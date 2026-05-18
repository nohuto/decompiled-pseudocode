/*
 * XREFs of sub_180027C80 @ 0x180027C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180027B84 @ 0x180027B84 (sub_180027B84.c)
 */

_QWORD *__fastcall sub_180027C80(_QWORD *lpMem, char a2)
{
  sub_180027B84(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
