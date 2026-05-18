/*
 * XREFs of sub_1800324D0 @ 0x1800324D0
 * Callers:
 *     sub_180037BD0 @ 0x180037BD0 (sub_180037BD0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180031CF4 @ 0x180031CF4 (sub_180031CF4.c)
 */

_QWORD *__fastcall sub_1800324D0(_QWORD *lpMem, char a2)
{
  sub_180031CF4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
