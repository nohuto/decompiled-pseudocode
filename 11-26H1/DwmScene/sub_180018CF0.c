/*
 * XREFs of sub_180018CF0 @ 0x180018CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18001BEB4 @ 0x18001BEB4 (sub_18001BEB4.c)
 */

LPVOID __fastcall sub_180018CF0(LPVOID lpMem, char a2)
{
  sub_18001BEB4();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
