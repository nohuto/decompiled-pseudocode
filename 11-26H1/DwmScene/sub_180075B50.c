/*
 * XREFs of sub_180075B50 @ 0x180075B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180075AE0 @ 0x180075AE0 (sub_180075AE0.c)
 */

LPVOID __fastcall sub_180075B50(LPVOID lpMem, char a2)
{
  sub_180075AE0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
