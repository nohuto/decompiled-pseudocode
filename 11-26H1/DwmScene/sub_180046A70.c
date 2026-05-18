/*
 * XREFs of sub_180046A70 @ 0x180046A70
 * Callers:
 *     sub_180048830 @ 0x180048830 (sub_180048830.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180081D50 @ 0x180081D50 (sub_180081D50.c)
 */

LPVOID __fastcall sub_180046A70(LPVOID lpMem, char a2)
{
  sub_180081D50();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
