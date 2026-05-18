/*
 * XREFs of sub_18008B154 @ 0x18008B154
 * Callers:
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 * Callees:
 *     sub_18008A6AC @ 0x18008A6AC (sub_18008A6AC.c)
 */

__m128 __fastcall sub_18008B154(__int64 a1)
{
  float v3; // xmm0_4
  __int128 v4; // xmm1

  if ( *(_DWORD *)(a1 + 1816) )
  {
    LODWORD(v3) = sub_18008A6AC(a1, *(float *)(a1 + 1812)).m128_u32[0];
    v4 = *(unsigned int *)(a1 + 1828);
    *(float *)&v4 = fmaxf(*(float *)&v4, v3);
    return (__m128)v4;
  }
  else
  {
    return (__m128)*(unsigned int *)(a1 + 1828);
  }
}
