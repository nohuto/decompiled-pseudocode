/*
 * XREFs of sub_1400BDDB0 @ 0x1400BDDB0
 * Callers:
 *     sub_1400BC9C0 @ 0x1400BC9C0 (sub_1400BC9C0.c)
 *     sub_1401251CC @ 0x1401251CC (sub_1401251CC.c)
 * Callees:
 *     sub_1400BDD84 @ 0x1400BDD84 (sub_1400BDD84.c)
 */

char __fastcall sub_1400BDDB0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r9d
  bool v5; // cf
  bool v6; // zf
  unsigned int v7; // eax

  if ( a2 < 2 )
    return sub_1400BDD84(a1, a2, a3);
  v4 = *(unsigned __int16 *)(a1 + 578);
  v5 = v4 < a2;
  v6 = v4 == a2;
  if ( v4 == a2 )
  {
    v7 = *(unsigned __int8 *)(a1 + 577);
    if ( v7 == a3 || v7 >= a3 )
      return 1;
    v5 = v4 < a2;
    v6 = v4 == a2;
  }
  return !v5 && !v6;
}
