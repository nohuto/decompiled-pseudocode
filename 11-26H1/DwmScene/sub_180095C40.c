/*
 * XREFs of sub_180095C40 @ 0x180095C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180095B54 @ 0x180095B54 (sub_180095B54.c)
 */

_QWORD *__fastcall sub_180095C40(_QWORD *lpMem, char a2)
{
  sub_180095B54(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
