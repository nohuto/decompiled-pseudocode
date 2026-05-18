/*
 * XREFs of sub_1800CC810 @ 0x1800CC810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800CC7D0 @ 0x1800CC7D0 (sub_1800CC7D0.c)
 */

_QWORD *__fastcall sub_1800CC810(_QWORD *lpMem, char a2)
{
  sub_1800CC7D0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
