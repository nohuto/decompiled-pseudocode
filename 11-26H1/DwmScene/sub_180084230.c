/*
 * XREFs of sub_180084230 @ 0x180084230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800841FC @ 0x1800841FC (sub_1800841FC.c)
 */

_QWORD *__fastcall sub_180084230(_QWORD *lpMem, char a2)
{
  sub_1800841FC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
