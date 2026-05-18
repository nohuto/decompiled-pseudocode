/*
 * XREFs of sub_180051010 @ 0x180051010
 * Callers:
 *     sub_1800516D0 @ 0x1800516D0 (sub_1800516D0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008497C @ 0x18008497C (sub_18008497C.c)
 */

LPVOID __fastcall sub_180051010(LPVOID lpMem, char a2)
{
  sub_18008497C();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
