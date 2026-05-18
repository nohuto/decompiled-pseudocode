/*
 * XREFs of sub_180053390 @ 0x180053390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180050314 @ 0x180050314 (sub_180050314.c)
 */

LPVOID __fastcall sub_180053390(LPVOID lpMem, char a2)
{
  sub_180050314((__int64)lpMem + 24);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
