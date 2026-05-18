/*
 * XREFs of sub_180093D30 @ 0x180093D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180093AD0 @ 0x180093AD0 (sub_180093AD0.c)
 */

_QWORD *__fastcall sub_180093D30(_QWORD *lpMem, char a2)
{
  sub_180093AD0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
