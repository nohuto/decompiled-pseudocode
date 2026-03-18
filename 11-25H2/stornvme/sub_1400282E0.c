/*
 * XREFs of sub_1400282E0 @ 0x1400282E0
 * Callers:
 *     sub_1400235E4 @ 0x1400235E4 (sub_1400235E4.c)
 *     sub_140024620 @ 0x140024620 (sub_140024620.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400282E0(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return -1;
  if ( a1 > 0x20Fu )
    return -2;
  if ( a1 <= 0x111u )
    return 0;
  return a1 - 17;
}
