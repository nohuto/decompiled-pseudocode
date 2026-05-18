/*
 * XREFs of sub_18008E780 @ 0x18008E780
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008E740 @ 0x18008E740 (sub_18008E740.c)
 */

_QWORD *__fastcall sub_18008E780(_QWORD *lpMem, char a2)
{
  sub_18008E740(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
