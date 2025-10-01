/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/DigitalReadSerial/
*/
const int buttonPin = 8;
const int r = 3;
const int g = 4;
const int b = 5;
// digital pin 2 has a pushbutton attached to it. Give it a name:
int buttonState= 0;
int ledcolor = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  // make the pushbutton's pin an input:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  buttonState = digitalRead(buttonPin);
  // print out the state of the button:
  if(buttonState ==HIGH){
    ledcolor = ledcolor +1;
    delay(100);  // delay in between reads for stability
  }
  if(ledcolor == 0){
    digitalWrite(r, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
  }
  else if(ledcolor == 1){
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
  }
  else if(ledcolor == 2){
    digitalWrite(r, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(b, HIGH);
  }
  else if(ledcolor == 3){
    digitalWrite(r, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, LOW);
  }
  else if(ledcolor == 4){
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    digitalWrite(b, HIGH);
  }
  else if(ledcolor == 5){
    digitalWrite(r, LOW);
    digitalWrite(g, HIGH);
    digitalWrite(b, LOW);
  }
  else if(ledcolor == 6){
    digitalWrite(r, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(b, LOW);
  }
  else if(ledcolor == 7){
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
    digitalWrite(b, LOW);
  }
  else if(ledcolor == 8){
    ledcolor = 0;
  }
}
