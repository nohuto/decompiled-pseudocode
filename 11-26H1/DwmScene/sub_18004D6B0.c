/*
 * XREFs of sub_18004D6B0 @ 0x18004D6B0
 * Callers:
 *     sub_18004F0E0 @ 0x18004F0E0 (sub_18004F0E0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18004D33C @ 0x18004D33C (sub_18004D33C.c)
 */

LPVOID __fastcall sub_18004D6B0(LPVOID lpMem, char a2)
{
  sub_18004D33C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
