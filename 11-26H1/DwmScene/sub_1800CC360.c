/*
 * XREFs of sub_1800CC360 @ 0x1800CC360
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800CC330 @ 0x1800CC330 (sub_1800CC330.c)
 */

_QWORD *__fastcall sub_1800CC360(_QWORD *lpMem, char a2)
{
  sub_1800CC330(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
