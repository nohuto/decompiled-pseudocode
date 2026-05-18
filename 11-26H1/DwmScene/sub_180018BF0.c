/*
 * XREFs of sub_180018BF0 @ 0x180018BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180018584 @ 0x180018584 (sub_180018584.c)
 */

_QWORD *__fastcall sub_180018BF0(_QWORD *lpMem, char a2)
{
  sub_180018584(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
