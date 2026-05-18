/*
 * XREFs of sub_180050FD0 @ 0x180050FD0
 * Callers:
 *     sub_1800516B0 @ 0x1800516B0 (sub_1800516B0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180053214 @ 0x180053214 (sub_180053214.c)
 */

LPVOID __fastcall sub_180050FD0(LPVOID lpMem, char a2)
{
  sub_180053214();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
