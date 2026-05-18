/*
 * XREFs of sub_18006AD00 @ 0x18006AD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18006AC38 @ 0x18006AC38 (sub_18006AC38.c)
 */

LPVOID __fastcall sub_18006AD00(LPVOID lpMem, char a2)
{
  sub_18006AC38((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
