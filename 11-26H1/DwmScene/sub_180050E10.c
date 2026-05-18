/*
 * XREFs of sub_180050E10 @ 0x180050E10
 * Callers:
 *     sub_180051610 @ 0x180051610 (sub_180051610.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180084328 @ 0x180084328 (sub_180084328.c)
 */

LPVOID __fastcall sub_180050E10(LPVOID lpMem, char a2)
{
  sub_180084328();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
