/*
 * XREFs of sub_180032490 @ 0x180032490
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 */

LPVOID __fastcall sub_180032490(LPVOID lpMem, char a2)
{
  sub_1800319D0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
