/*
 * XREFs of sub_180028FE0 @ 0x180028FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180027C54 @ 0x180027C54 (sub_180027C54.c)
 */

LPVOID __fastcall sub_180028FE0(LPVOID lpMem, char a2)
{
  sub_180027C54((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
