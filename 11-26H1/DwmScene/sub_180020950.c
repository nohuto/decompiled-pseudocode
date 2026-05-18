/*
 * XREFs of sub_180020950 @ 0x180020950
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18002085C @ 0x18002085C (sub_18002085C.c)
 */

_QWORD *__fastcall sub_180020950(_QWORD *lpMem, char a2)
{
  sub_18002085C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
