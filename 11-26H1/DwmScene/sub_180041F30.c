/*
 * XREFs of sub_180041F30 @ 0x180041F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180041EB4 @ 0x180041EB4 (sub_180041EB4.c)
 */

_QWORD *__fastcall sub_180041F30(_QWORD *lpMem, char a2)
{
  sub_180041EB4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
