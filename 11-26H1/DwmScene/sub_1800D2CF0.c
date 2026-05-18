/*
 * XREFs of sub_1800D2CF0 @ 0x1800D2CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800D2B44 @ 0x1800D2B44 (sub_1800D2B44.c)
 */

LPVOID __fastcall sub_1800D2CF0(LPVOID lpMem, char a2)
{
  sub_1800D2B44((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
