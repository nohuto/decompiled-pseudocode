/*
 * XREFs of sub_140046E54 @ 0x140046E54
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140046E54(_BYTE *a1, float a2)
{
  char result; // al

  result = (int)(a2 * 128.0) + 0x80;
  *a1 = result;
  return result;
}
