/*
 * XREFs of sub_180096500 @ 0x180096500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800964BC @ 0x1800964BC (sub_1800964BC.c)
 */

_QWORD *__fastcall sub_180096500(_QWORD *lpMem, char a2)
{
  sub_1800964BC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
