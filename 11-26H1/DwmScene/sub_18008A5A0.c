/*
 * XREFs of sub_18008A5A0 @ 0x18008A5A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008A4E4 @ 0x18008A4E4 (sub_18008A4E4.c)
 */

_QWORD *__fastcall sub_18008A5A0(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_18008A4E4(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
