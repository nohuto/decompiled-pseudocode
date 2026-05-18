/*
 * XREFs of sub_1800CC5B0 @ 0x1800CC5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800CC570 @ 0x1800CC570 (sub_1800CC570.c)
 */

_QWORD *__fastcall sub_1800CC5B0(_QWORD *lpMem, char a2)
{
  sub_1800CC570(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
