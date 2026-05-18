/*
 * XREFs of sub_1800C8E60 @ 0x1800C8E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800C8E24 @ 0x1800C8E24 (sub_1800C8E24.c)
 */

_QWORD *__fastcall sub_1800C8E60(_QWORD *lpMem, char a2)
{
  sub_1800C8E24(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
