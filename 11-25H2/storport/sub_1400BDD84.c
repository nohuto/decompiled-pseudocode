/*
 * XREFs of sub_1400BDD84 @ 0x1400BDD84
 * Callers:
 *     sub_1400BCF34 @ 0x1400BCF34 (sub_1400BCF34.c)
 *     sub_1400BD6D8 @ 0x1400BD6D8 (sub_1400BD6D8.c)
 *     sub_1400BD9F4 @ 0x1400BD9F4 (sub_1400BD9F4.c)
 *     sub_1400BDDB0 @ 0x1400BDDB0 (sub_1400BDDB0.c)
 *     sub_1400C6B94 @ 0x1400C6B94 (sub_1400C6B94.c)
 *     sub_1400EC4CC @ 0x1400EC4CC (sub_1400EC4CC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400BDD84(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  bool v4; // cf
  bool v5; // zf

  v3 = *(unsigned __int16 *)(a1 + 578);
  v4 = v3 < a2;
  v5 = v3 == a2;
  if ( v3 == a2 )
  {
    if ( *(unsigned __int8 *)(a1 + 577) >= a3 )
      return 1;
    v4 = v3 < a2;
    v5 = v3 == a2;
  }
  return !v4 && !v5;
}
