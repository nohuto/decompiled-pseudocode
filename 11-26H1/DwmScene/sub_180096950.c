/*
 * XREFs of sub_180096950 @ 0x180096950
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18009683C @ 0x18009683C (sub_18009683C.c)
 */

_QWORD *__fastcall sub_180096950(_QWORD *lpMem, char a2)
{
  sub_18009683C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
