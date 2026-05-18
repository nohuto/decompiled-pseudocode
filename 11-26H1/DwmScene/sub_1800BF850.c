/*
 * XREFs of sub_1800BF850 @ 0x1800BF850
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 */

LPVOID __fastcall sub_1800BF850(LPVOID lpMem, char a2)
{
  sub_1800BF7A8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
