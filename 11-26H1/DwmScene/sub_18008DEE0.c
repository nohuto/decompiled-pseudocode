/*
 * XREFs of sub_18008DEE0 @ 0x18008DEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008DDA8 @ 0x18008DDA8 (sub_18008DDA8.c)
 */

_QWORD *__fastcall sub_18008DEE0(_QWORD *lpMem, char a2)
{
  sub_18008DDA8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
