/*
 * XREFs of sub_1800575F0 @ 0x1800575F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800570E0 @ 0x1800570E0 (sub_1800570E0.c)
 */

LPVOID __fastcall sub_1800575F0(LPVOID lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800570E0((__int64)lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
