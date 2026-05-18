/*
 * XREFs of sub_1800D4730 @ 0x1800D4730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800D4678 @ 0x1800D4678 (sub_1800D4678.c)
 */

LPVOID __fastcall sub_1800D4730(LPVOID lpMem, char a2)
{
  sub_1800D4678((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
