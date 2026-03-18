/*
 * XREFs of InbvEnableDisplayString @ 0x1405327C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall InbvEnableDisplayString(char a1)
{
  char result; // al

  result = byte_140E65CE8;
  byte_140E65CE8 = a1;
  return result;
}
