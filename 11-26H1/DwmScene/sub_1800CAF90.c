/*
 * XREFs of sub_1800CAF90 @ 0x1800CAF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800CACD0 @ 0x1800CACD0 (sub_1800CACD0.c)
 */

_QWORD *__fastcall sub_1800CAF90(_QWORD *lpMem, char a2)
{
  sub_1800CACD0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
