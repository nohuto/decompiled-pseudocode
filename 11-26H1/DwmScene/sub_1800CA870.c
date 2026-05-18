/*
 * XREFs of sub_1800CA870 @ 0x1800CA870
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800CA82C @ 0x1800CA82C (sub_1800CA82C.c)
 */

_QWORD *__fastcall sub_1800CA870(_QWORD *lpMem, char a2)
{
  sub_1800CA82C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
