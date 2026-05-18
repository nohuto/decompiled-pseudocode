/*
 * XREFs of sub_180096650 @ 0x180096650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800965F8 @ 0x1800965F8 (sub_1800965F8.c)
 */

_QWORD *__fastcall sub_180096650(_QWORD *lpMem, char a2)
{
  sub_1800965F8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
