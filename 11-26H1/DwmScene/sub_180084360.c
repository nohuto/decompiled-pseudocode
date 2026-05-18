/*
 * XREFs of sub_180084360 @ 0x180084360
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180093840 @ 0x180093840 (sub_180093840.c)
 */

LPVOID __fastcall sub_180084360(LPVOID lpMem, char a2)
{
  sub_180093840(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
