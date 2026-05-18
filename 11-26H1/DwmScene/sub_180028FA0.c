/*
 * XREFs of sub_180028FA0 @ 0x180028FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180028E98 @ 0x180028E98 (sub_180028E98.c)
 */

LPVOID __fastcall sub_180028FA0(LPVOID lpMem, char a2)
{
  sub_180028E98((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
