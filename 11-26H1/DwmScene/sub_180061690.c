/*
 * XREFs of sub_180061690 @ 0x180061690
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180060D54 @ 0x180060D54 (sub_180060D54.c)
 */

LPVOID __fastcall sub_180061690(LPVOID lpMem, char a2)
{
  sub_180060D54((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
