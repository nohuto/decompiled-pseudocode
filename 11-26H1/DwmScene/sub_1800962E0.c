/*
 * XREFs of sub_1800962E0 @ 0x1800962E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800961F4 @ 0x1800961F4 (sub_1800961F4.c)
 */

_QWORD *__fastcall sub_1800962E0(_QWORD *lpMem, char a2)
{
  sub_1800961F4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
