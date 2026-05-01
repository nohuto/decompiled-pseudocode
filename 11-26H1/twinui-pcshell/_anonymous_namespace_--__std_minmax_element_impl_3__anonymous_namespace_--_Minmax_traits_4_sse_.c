/*
 * XREFs of _anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_sse_ @ 0x1802CC9A0
 * Callers:
 *     __std_minmax_element_4 @ 0x1802CD230 (__std_minmax_element_4.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall anonymous_namespace_::__std_minmax_element_impl_3__anonymous_namespace_::_Minmax_traits_4_sse_(
        _OWORD *a1,
        const __m128i *a2,
        const __m128i *a3,
        unsigned __int8 a4)
{
  const __m128i *v6; // r11
  __m128i si128; // xmm11
  unsigned __int64 v8; // rax
  __m128i v9; // xmm12
  const __m128i *v10; // r10
  int v11; // edi
  signed int v12; // ebx
  __m128i v13; // xmm6
  __m128i v14; // xmm9
  __m128i v15; // xmm7
  const __m128i *v16; // r8
  __m128i v17; // xmm10
  const __m128i *v18; // rbp
  __m128i v19; // xmm3
  __m128i v20; // xmm5
  __m128i v21; // xmm2
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm4
  __m128i v25; // xmm4
  int v26; // eax
  __m128i v27; // xmm4
  __m128i v28; // xmm2
  __m128i v29; // xmm1
  unsigned __int64 v30; // rax
  __m128i v31; // xmm3
  __m128i v32; // xmm3
  int v33; // eax
  __m128i v34; // xmm3
  __m128i v35; // xmm2
  __m128i v36; // xmm1
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  __int32 v39; // ecx
  __int32 v40; // eax
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  unsigned __int32 v43; // ecx
  __int32 v44; // eax
  _OWORD *result; // rax
  __int128 v46; // [rsp+0h] [rbp-B8h]
  __m128i v47; // [rsp+10h] [rbp-A8h]

  v6 = a2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = ((char *)a3 - (char *)a2) & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_QWORD *)&v46 = a2;
  v10 = a2;
  if ( v8 > 0x1000000000LL )
    v8 = 0x1000000000LL;
  *((_QWORD *)&v46 + 1) = a2;
  v11 = 0x7FFFFFFF;
  v12 = 0x80000000;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = (const __m128i *)((char *)a2 + v8);
  v17 = _mm_loadu_si128(&xmmword_180792290[a4]);
  while ( 1 )
  {
    v18 = a2;
    v19 = _mm_sub_epi32(_mm_loadu_si128(a2), v17);
    v20 = v19;
    while ( 1 )
    {
      ++a2;
      v15 = _mm_add_epi32(v15, si128);
      if ( a2 == v16 )
        break;
      v21 = _mm_sub_epi32(_mm_loadu_si128(a2), v17);
      v22 = _mm_cmpgt_epi32(v19, v21);
      v19 = _mm_min_epi32(v19, v21);
      v13 = _mm_blendv_epi8(v13, v15, v22);
      v23 = v20;
      v20 = _mm_max_epi32(v20, v21);
      v14 = _mm_blendv_epi8(v15, v14, _mm_cmpgt_epi32(v23, v21));
    }
    v24 = _mm_min_epi32(v19, _mm_shuffle_epi32(v19, 78));
    v25 = _mm_min_epi32(v24, _mm_shuffle_epi32(v24, 177));
    v26 = _mm_cvtsi128_si32(v25);
    if ( v26 < v11 )
    {
      v11 = v26;
      v27 = _mm_cmpeq_epi32(v25, v19);
      v28 = _mm_blendv_epi8(v9, v13, v27);
      v29 = _mm_min_epu32(v28, _mm_shuffle_epi32(v28, 78));
      v47 = v13;
      _BitScanForward(
        (unsigned int *)&v30,
        _mm_movemask_epi8(v27) & _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_min_epu32(v29, _mm_shuffle_epi32(v29, 177)), v28)));
      v6 = (const __m128i *)((char *)&v18[v47.m128i_u32[v30 >> 2]] + (unsigned int)v30);
      *(_QWORD *)&v46 = v6;
    }
    v31 = _mm_max_epi32(v20, _mm_shuffle_epi32(v20, 78));
    v32 = _mm_max_epi32(v31, _mm_shuffle_epi32(v31, 177));
    v33 = _mm_cvtsi128_si32(v32);
    if ( v12 <= v33 )
    {
      v12 = v33;
      v34 = _mm_cmpeq_epi32(v32, v20);
      v35 = _mm_blendv_epi8((__m128i)0LL, v14, v34);
      v36 = _mm_max_epu32(v35, _mm_shuffle_epi32(v35, 78));
      v47 = v14;
      _BitScanReverse(
        &v37,
        _mm_movemask_epi8(v34) & _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_max_epu32(v36, _mm_shuffle_epi32(v36, 177)), v35)));
      v10 = (const __m128i *)((char *)&v18[v47.m128i_u32[(unsigned __int64)(v37 - 3) >> 2] - 1].m128i_u64[1] + v37 + 5);
      *((_QWORD *)&v46 + 1) = v10;
    }
    v38 = ((char *)a3 - (char *)a2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !v38 )
      break;
    v13 = 0LL;
    v14 = 0LL;
    if ( v38 > 0x1000000000LL )
      v38 = 0x1000000000LL;
    v16 = (const __m128i *)((char *)v16 + v38);
  }
  if ( a4 )
  {
    if ( a2 != a3 )
    {
      do
      {
        v39 = a2->m128i_i32[0];
        v40 = a2->m128i_i32[0];
        if ( a2->m128i_i32[0] < v11 )
          v6 = a2;
        else
          v40 = v11;
        v11 = v40;
        if ( v12 <= v39 )
          v10 = a2;
        a2 = (const __m128i *)((char *)a2 + 4);
        if ( v12 > v39 )
          v39 = v12;
        v12 = v39;
      }
      while ( a2 != a3 );
LABEL_35:
      *(_QWORD *)&v46 = v6;
      *((_QWORD *)&v46 + 1) = v10;
    }
  }
  else
  {
    v41 = v12 + 0x80000000;
    v42 = v11 + 0x80000000;
    if ( a2 != a3 )
    {
      do
      {
        v43 = a2->m128i_i32[0];
        v44 = a2->m128i_i32[0];
        if ( a2->m128i_i32[0] < v42 )
          v6 = a2;
        else
          v44 = v42;
        v42 = v44;
        if ( v41 <= v43 )
          v10 = a2;
        a2 = (const __m128i *)((char *)a2 + 4);
        if ( v41 > v43 )
          v43 = v41;
        v41 = v43;
      }
      while ( a2 != a3 );
      goto LABEL_35;
    }
  }
  result = a1;
  *a1 = v46;
  return result;
}
