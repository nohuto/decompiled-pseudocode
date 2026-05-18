/*
 * XREFs of sub_180018D30 @ 0x180018D30
 * Callers:
 *     sub_18001BC50 @ 0x18001BC50 (sub_18001BC50.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18005325C @ 0x18005325C (sub_18005325C.c)
 */

LPVOID __fastcall sub_180018D30(LPVOID lpMem, char a2)
{
  sub_18005325C();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
