/*
 * XREFs of sub_18008A530 @ 0x18008A530
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008A404 @ 0x18008A404 (sub_18008A404.c)
 */

LPVOID __fastcall sub_18008A530(LPVOID lpMem, char a2)
{
  sub_18008A404((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
