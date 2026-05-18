/*
 * XREFs of sub_180061650 @ 0x180061650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180060D20 @ 0x180060D20 (sub_180060D20.c)
 */

_QWORD *__fastcall sub_180061650(_QWORD *lpMem, char a2)
{
  sub_180060D20(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
