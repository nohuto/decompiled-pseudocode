/*
 * XREFs of sub_180052150 @ 0x180052150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180052060 @ 0x180052060 (sub_180052060.c)
 */

_QWORD *__fastcall sub_180052150(_QWORD *lpMem, char a2)
{
  sub_180052060(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
