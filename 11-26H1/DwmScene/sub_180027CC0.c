/*
 * XREFs of sub_180027CC0 @ 0x180027CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180027BF4 @ 0x180027BF4 (sub_180027BF4.c)
 */

LPVOID __fastcall sub_180027CC0(LPVOID lpMem, char a2)
{
  sub_180027BF4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
