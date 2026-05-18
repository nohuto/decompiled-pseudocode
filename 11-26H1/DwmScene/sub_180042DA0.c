/*
 * XREFs of sub_180042DA0 @ 0x180042DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180042A4C @ 0x180042A4C (sub_180042A4C.c)
 */

_QWORD *__fastcall sub_180042DA0(_QWORD *lpMem, char a2)
{
  sub_180042A4C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
