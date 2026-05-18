/*
 * XREFs of sub_180018CB0 @ 0x180018CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800185FC @ 0x1800185FC (sub_1800185FC.c)
 */

LPVOID __fastcall sub_180018CB0(LPVOID lpMem, char a2)
{
  sub_1800185FC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
