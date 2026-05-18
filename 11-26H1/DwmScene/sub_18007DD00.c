/*
 * XREFs of sub_18007DD00 @ 0x18007DD00
 * Callers:
 *     sub_18007F4D0 @ 0x18007F4D0 (sub_18007F4D0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18007DAB8 @ 0x18007DAB8 (sub_18007DAB8.c)
 */

LPVOID __fastcall sub_18007DD00(LPVOID lpMem, char a2)
{
  sub_18007DAB8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
