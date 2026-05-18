/*
 * XREFs of sub_180083A50 @ 0x180083A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800838C4 @ 0x1800838C4 (sub_1800838C4.c)
 */

_QWORD *__fastcall sub_180083A50(_QWORD *lpMem, char a2)
{
  sub_1800838C4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
