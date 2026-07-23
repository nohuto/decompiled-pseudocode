/*
 * XREFs of InbvEnableDisplayString @ 0x140534C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140E65EE0;
  byte_140E65EE0 = a1;
  return result;
}
