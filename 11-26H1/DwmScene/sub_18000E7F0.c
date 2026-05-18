/*
 * XREFs of sub_18000E7F0 @ 0x18000E7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18000E708 @ 0x18000E708 (sub_18000E708.c)
 */

_QWORD *__fastcall sub_18000E7F0(_QWORD *lpMem, char a2)
{
  sub_18000E708(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
