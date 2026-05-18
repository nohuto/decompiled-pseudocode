/*
 * XREFs of sub_1800958D0 @ 0x1800958D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800957E0 @ 0x1800957E0 (sub_1800957E0.c)
 */

_QWORD *__fastcall sub_1800958D0(_QWORD *lpMem, char a2)
{
  sub_1800957E0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
