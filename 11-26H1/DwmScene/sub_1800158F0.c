/*
 * XREFs of sub_1800158F0 @ 0x1800158F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800158A4 @ 0x1800158A4 (sub_1800158A4.c)
 */

LPVOID __fastcall sub_1800158F0(LPVOID lpMem, char a2)
{
  sub_1800158A4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
