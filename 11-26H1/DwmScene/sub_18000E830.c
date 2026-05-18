/*
 * XREFs of sub_18000E830 @ 0x18000E830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180018628 @ 0x180018628 (sub_180018628.c)
 */

LPVOID __fastcall sub_18000E830(LPVOID lpMem, char a2)
{
  sub_180018628();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
