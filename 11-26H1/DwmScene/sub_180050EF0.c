/*
 * XREFs of sub_180050EF0 @ 0x180050EF0
 * Callers:
 *     sub_180051650 @ 0x180051650 (sub_180051650.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800840DC @ 0x1800840DC (sub_1800840DC.c)
 */

LPVOID __fastcall sub_180050EF0(LPVOID lpMem, char a2)
{
  sub_1800840DC();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
