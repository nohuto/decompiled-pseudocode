/*
 * XREFs of sub_1800BB470 @ 0x1800BB470
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800BADBC @ 0x1800BADBC (sub_1800BADBC.c)
 */

_QWORD *__fastcall sub_1800BB470(_QWORD *lpMem, char a2)
{
  sub_1800BADBC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
