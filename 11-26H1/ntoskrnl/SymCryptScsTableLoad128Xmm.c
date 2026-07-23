/*
 * XREFs of SymCryptScsTableLoad128Xmm @ 0x1405773D8
 * Callers:
 *     SymCryptScsTableLoad @ 0x1405773B0 (SymCryptScsTableLoad.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall SymCryptScsTableLoad128Xmm(__int64 a1, unsigned int a2, __m128 *a3)
{
  __m128 *v3; // rax
  __m128i v4; // xmm11
  __m128i v5; // xmm12
  __m128 v6; // xmm3
  __m128 v7; // xmm4
  __m128 v8; // xmm5
  __m128 v9; // xmm6
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm9
  __m128 v13; // xmm10
  __m128 v14; // xmm3
  __m128 *result; // rax
  int v16; // edx
  __m128 v17; // xmm2
  __m128 v18; // xmm0

  v3 = *(__m128 **)(a1 + 16);
  v4 = (__m128i)_xmm;
  v5 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 0);
  v6 = (__m128)_mm_cmpeq_epi32((__m128i)0LL, v5);
  v7 = _mm_and_ps(v6, *v3);
  v8 = _mm_and_ps(v6, v3[1]);
  v9 = _mm_and_ps(v6, v3[2]);
  v10 = _mm_and_ps(v6, v3[3]);
  v11 = _mm_and_ps(v6, v3[4]);
  v12 = _mm_and_ps(v6, v3[5]);
  v13 = _mm_and_ps(v6, v3[6]);
  v14 = _mm_and_ps(v6, v3[7]);
  result = v3 + 8;
  v16 = *(_DWORD *)(a1 + 8) - 1;
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    do
    {
      v17 = (__m128)_mm_cmpeq_epi32(v5, v4);
      v4 = _mm_add_epi32(v4, (__m128i)_xmm);
      v18 = _mm_and_ps(v17, result[1]);
      v7 = _mm_or_ps(v7, _mm_and_ps(v17, *result));
      result += 8;
      v8 = _mm_or_ps(v8, v18);
      v9 = _mm_or_ps(v9, _mm_and_ps(v17, result[-6]));
      v10 = _mm_or_ps(v10, _mm_and_ps(v17, result[-5]));
      v11 = _mm_or_ps(v11, _mm_and_ps(v17, result[-4]));
      v12 = _mm_or_ps(v12, _mm_and_ps(v17, result[-3]));
      v13 = _mm_or_ps(v13, _mm_and_ps(v17, result[-2]));
      v14 = _mm_or_ps(v14, _mm_and_ps(v17, result[-1]));
      --v16;
    }
    while ( v16 );
  }
  a3[2] = v9;
  a3[3] = v10;
  a3[4] = v11;
  a3[5] = v12;
  a3[6] = v13;
  *a3 = v7;
  a3[1] = v8;
  a3[7] = v14;
  return result;
}
