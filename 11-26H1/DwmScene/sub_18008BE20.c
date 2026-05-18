/*
 * XREFs of sub_18008BE20 @ 0x18008BE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008BD78 @ 0x18008BD78 (sub_18008BD78.c)
 */

_QWORD *__fastcall sub_18008BE20(_QWORD *lpMem, char a2)
{
  sub_18008BD78(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
