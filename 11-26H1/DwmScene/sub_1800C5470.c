/*
 * XREFs of sub_1800C5470 @ 0x1800C5470
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800C53AC @ 0x1800C53AC (sub_1800C53AC.c)
 */

_QWORD *__fastcall sub_1800C5470(_QWORD *lpMem, char a2)
{
  sub_1800C53AC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
