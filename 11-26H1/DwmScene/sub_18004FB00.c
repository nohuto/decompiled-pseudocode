/*
 * XREFs of sub_18004FB00 @ 0x18004FB00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18004F7A4 @ 0x18004F7A4 (sub_18004F7A4.c)
 */

_QWORD *__fastcall sub_18004FB00(_QWORD *lpMem, char a2)
{
  sub_18004F7A4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
