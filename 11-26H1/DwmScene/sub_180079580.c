/*
 * XREFs of sub_180079580 @ 0x180079580
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180079548 @ 0x180079548 (sub_180079548.c)
 */

_QWORD *__fastcall sub_180079580(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180079548(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
