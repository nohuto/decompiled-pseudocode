/*
 * XREFs of sub_18006AD40 @ 0x18006AD40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18006ACC0 @ 0x18006ACC0 (sub_18006ACC0.c)
 */

_QWORD *__fastcall sub_18006AD40(_QWORD *lpMem, char a2)
{
  sub_18006ACC0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
