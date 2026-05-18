/*
 * XREFs of sub_1800954C0 @ 0x1800954C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180095470 @ 0x180095470 (sub_180095470.c)
 */

_QWORD *__fastcall sub_1800954C0(_QWORD *lpMem, char a2)
{
  sub_180095470(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
