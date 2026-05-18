/*
 * XREFs of sub_1800C48B0 @ 0x1800C48B0
 * Callers:
 *     sub_1800C40D4 @ 0x1800C40D4 (sub_1800C40D4.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C48B0(int a1, char a2)
{
  int v2; // edx

  if ( (unsigned int)(a1 - 23) <= 1 )
    v2 = 2;
  else
    v2 = (a2 & 8) != 0;
  return sub_1800C04E0(a1, v2);
}
