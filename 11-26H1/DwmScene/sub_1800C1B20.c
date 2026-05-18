/*
 * XREFs of sub_1800C1B20 @ 0x1800C1B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800C1A7C @ 0x1800C1A7C (sub_1800C1A7C.c)
 */

_QWORD *__fastcall sub_1800C1B20(_QWORD *lpMem, char a2)
{
  sub_1800C1A7C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
