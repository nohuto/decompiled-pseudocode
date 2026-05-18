/*
 * XREFs of sub_180018C30 @ 0x180018C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800185B0 @ 0x1800185B0 (sub_1800185B0.c)
 */

LPVOID __fastcall sub_180018C30(LPVOID lpMem, char a2)
{
  sub_1800185B0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
