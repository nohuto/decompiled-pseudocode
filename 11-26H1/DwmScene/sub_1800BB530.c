/*
 * XREFs of sub_1800BB530 @ 0x1800BB530
 * Callers:
 *     sub_1800BE220 @ 0x1800BE220 (sub_1800BE220.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800C9300 @ 0x1800C9300 (sub_1800C9300.c)
 */

LPVOID __fastcall sub_1800BB530(LPVOID lpMem, char a2)
{
  sub_1800C9300();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
