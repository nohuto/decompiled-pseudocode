/*
 * XREFs of sub_180028F20 @ 0x180028F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 */

LPVOID __fastcall sub_180028F20(LPVOID lpMem, char a2)
{
  sub_180027BC8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
