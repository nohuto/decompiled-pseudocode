/*
 * XREFs of sub_180021FD0 @ 0x180021FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180021E88 @ 0x180021E88 (sub_180021E88.c)
 */

LPVOID __fastcall sub_180021FD0(LPVOID lpMem, char a2)
{
  sub_180021E88((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
