/*
 * XREFs of sub_18000B5D0 @ 0x18000B5D0
 * Callers:
 *     sub_180098138 @ 0x180098138 (sub_180098138.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall sub_18000B5D0(const __m128i *a1, const __m128i *a2, unsigned __int8 a3)
{
  __m128i v3; // xmm2
  __m128i si128; // xmm4
  const __m128i *v6; // rdx
  const __m128i *v8; // r9
  __int64 v10; // r10
  const __m128i *v11; // rcx
  __m128i v12; // xmm3
  __m128i v13; // xmm5
  __m128i v14; // xmm2
  __m128i v15; // xmm6
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // r8
  __m128i v20; // xmm4
  __m128i v21; // xmm4
  __m128i v22; // xmm1
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v28; // rdx
  __m128i v29; // [rsp+0h] [rbp-28h]

  v3 = _mm_loadu_si128(a1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1800F9C60);
  v6 = (const __m128i *)((char *)a1 + (((char *)a2 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
  v8 = a1;
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  v11 = a1 + 1;
  v12 = 0LL;
  v13 = _mm_loadu_si128(&xmmword_1800F9C00[a3]);
  v14 = _mm_sub_epi64(v3, v13);
  if ( v11 != v6 )
  {
    v15 = si128;
    do
    {
      v16 = _mm_loadu_si128(v11++);
      v17 = _mm_sub_epi64(v16, v13);
      v18 = _mm_cmpgt_epi64(v14, v17);
      v12 = _mm_blendv_epi8(v12, si128, v18);
      si128 = _mm_add_epi64(si128, v15);
      v14 = _mm_blendv_epi8(v14, v17, v18);
    }
    while ( v11 != v6 );
  }
  v19 = _mm_srli_si128(v14, 8).m128i_u64[0];
  if ( v19 >= v14.m128i_i64[0] )
    v19 = v14.m128i_i64[0];
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
  if ( v19 != 0x7FFFFFFFFFFFFFFFLL )
  {
    v10 = v19;
    v21 = _mm_cmpeq_epi64(v20, v14);
    v22 = _mm_blendv_epi8(_mm_load_si128((const __m128i *)&xmmword_1800F9C70), v12, v21);
    v23 = _mm_srli_si128(v22, 8).m128i_u64[0];
    v29 = v12;
    if ( v23 >= v22.m128i_i64[0] )
      v23 = v22.m128i_i64[0];
    _BitScanForward(
      (unsigned int *)&v24,
      _mm_movemask_epi8(v21) & _mm_movemask_epi8(_mm_cmpeq_epi64(_mm_unpacklo_epi64((__m128i)v23, (__m128i)v23), v22)));
    v8 = (const __m128i *)((char *)&a1[v29.m128i_i64[v24 >> 3]] + (unsigned int)v24);
  }
  if ( !a3 )
  {
    for ( i = v10 + 0x8000000000000000uLL; v11 != a2; i = v28 )
    {
      v28 = v11->m128i_i64[0];
      if ( v11->m128i_i64[0] < i )
        v8 = v11;
      v11 = (const __m128i *)((char *)v11 + 8);
      if ( v28 >= i )
        v28 = i;
    }
    return v8;
  }
  if ( v11 == a2 )
    return v8;
  do
  {
    v25 = v11->m128i_i64[0];
    if ( v11->m128i_i64[0] < v10 )
      v8 = v11;
    v11 = (const __m128i *)((char *)v11 + 8);
    if ( v25 >= v10 )
      v25 = v10;
    v10 = v25;
  }
  while ( v11 != a2 );
  return v8;
}
