/*
 * XREFs of sub_1800323E0 @ 0x1800323E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180031648 @ 0x180031648 (sub_180031648.c)
 */

_QWORD *__fastcall sub_1800323E0(_QWORD *lpMem, char a2)
{
  sub_180031648(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
