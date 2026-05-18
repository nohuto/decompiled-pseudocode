/*
 * XREFs of sub_1800801F0 @ 0x1800801F0
 * Callers:
 *     sub_1800815B0 @ 0x1800815B0 (sub_1800815B0.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800849AC @ 0x1800849AC (sub_1800849AC.c)
 */

LPVOID __fastcall sub_1800801F0(LPVOID lpMem, char a2)
{
  sub_1800849AC();
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
