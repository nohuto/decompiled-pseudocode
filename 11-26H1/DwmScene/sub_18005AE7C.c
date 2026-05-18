/*
 * XREFs of sub_18005AE7C @ 0x18005AE7C
 * Callers:
 *     sub_180058C70 @ 0x180058C70 (sub_180058C70.c)
 *     sub_18005B198 @ 0x18005B198 (sub_18005B198.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18008A6AC @ 0x18008A6AC (sub_18008A6AC.c)
 * Callees:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_18005A6E8 @ 0x18005A6E8 (sub_18005A6E8.c)
 */

__int64 __fastcall sub_18005AE7C(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // xmm3_8
  unsigned __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+38h] [rbp-20h]
  unsigned __int64 v6; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v7; // [rsp+44h] [rbp-14h]

  if ( *(_BYTE *)(a1 + 336) && *(_BYTE *)(a1 + 1612) )
  {
    result = sub_180059458(a1, (__int64)&v4);
    v3 = _mm_sub_ps(_mm_movelh_ps((__m128)v6, (__m128)v7), _mm_movelh_ps((__m128)v4, (__m128)v5)).m128_u64[0];
    if ( *((float *)&v3 + 1) != 0.0 )
    {
      result = sub_18005A6E8(a1, *(float *)&v3 / *((float *)&v3 + 1));
      *(_BYTE *)(a1 + 1612) = 0;
    }
  }
  return result;
}
