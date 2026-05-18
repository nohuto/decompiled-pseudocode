/*
 * XREFs of sub_180087EA0 @ 0x180087EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180087E28 @ 0x180087E28 (sub_180087E28.c)
 */

_QWORD *__fastcall sub_180087EA0(_QWORD *lpMem, char a2)
{
  sub_180087E28(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
