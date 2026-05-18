/*
 * XREFs of sub_180095630 @ 0x180095630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800955DC @ 0x1800955DC (sub_1800955DC.c)
 */

_QWORD *__fastcall sub_180095630(_QWORD *lpMem, char a2)
{
  sub_1800955DC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
