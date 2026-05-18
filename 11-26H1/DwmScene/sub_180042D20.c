/*
 * XREFs of sub_180042D20 @ 0x180042D20
 * Callers:
 *     sub_180043960 @ 0x180043960 (sub_180043960.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180042A00 @ 0x180042A00 (sub_180042A00.c)
 */

LPVOID __fastcall sub_180042D20(LPVOID lpMem, char a2)
{
  sub_180042A00((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
