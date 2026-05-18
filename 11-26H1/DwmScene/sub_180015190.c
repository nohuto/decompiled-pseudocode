/*
 * XREFs of sub_180015190 @ 0x180015190
 * Callers:
 *     sub_180015770 @ 0x180015770 (sub_180015770.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800496FC @ 0x1800496FC (sub_1800496FC.c)
 */

LPVOID __fastcall sub_180015190(LPVOID lpMem, char a2)
{
  sub_1800496FC();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
