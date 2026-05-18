/*
 * XREFs of sub_18006D810 @ 0x18006D810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18006D644 @ 0x18006D644 (sub_18006D644.c)
 */

_QWORD *__fastcall sub_18006D810(_QWORD *lpMem, char a2)
{
  sub_18006D644(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
