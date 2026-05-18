/*
 * XREFs of sub_18002B720 @ 0x18002B720
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18002B454 @ 0x18002B454 (sub_18002B454.c)
 */

_QWORD *__fastcall sub_18002B720(_QWORD *lpMem, char a2)
{
  sub_18002B454(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
