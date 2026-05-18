/*
 * XREFs of sub_1800C9D00 @ 0x1800C9D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800C9CC4 @ 0x1800C9CC4 (sub_1800C9CC4.c)
 */

_QWORD *__fastcall sub_1800C9D00(_QWORD *lpMem, char a2)
{
  sub_1800C9CC4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
