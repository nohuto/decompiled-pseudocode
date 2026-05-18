/*
 * XREFs of sub_180018B20 @ 0x180018B20
 * Callers:
 *     sub_18001BC10 @ 0x18001BC10 (sub_18001BC10.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800468E0 @ 0x1800468E0 (sub_1800468E0.c)
 */

LPVOID __fastcall sub_180018B20(LPVOID lpMem, char a2)
{
  sub_1800468E0();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
