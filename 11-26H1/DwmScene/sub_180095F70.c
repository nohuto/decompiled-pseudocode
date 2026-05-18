/*
 * XREFs of sub_180095F70 @ 0x180095F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180095EE8 @ 0x180095EE8 (sub_180095EE8.c)
 */

_QWORD *__fastcall sub_180095F70(_QWORD *lpMem, char a2)
{
  sub_180095EE8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
