/*
 * XREFs of sub_180012020 @ 0x180012020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180011E94 @ 0x180011E94 (sub_180011E94.c)
 */

LPVOID __fastcall sub_180012020(LPVOID lpMem, char a2)
{
  sub_180011E94((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
