/*
 * XREFs of sub_180042CE0 @ 0x180042CE0
 * Callers:
 *     sub_18005E3A0 @ 0x18005E3A0 (sub_18005E3A0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180042974 @ 0x180042974 (sub_180042974.c)
 */

LPVOID __fastcall sub_180042CE0(LPVOID lpMem, char a2)
{
  sub_180042974((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
