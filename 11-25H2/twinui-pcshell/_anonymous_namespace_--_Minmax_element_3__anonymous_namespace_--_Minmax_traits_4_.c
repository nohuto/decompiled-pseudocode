/*
 * XREFs of _anonymous_namespace_::_Minmax_element_3__anonymous_namespace_::_Minmax_traits_4_ @ 0x1802D51F0
 * Callers:
 *     __std_minmax_element_4 @ 0x1802D5620 (__std_minmax_element_4.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

_OWORD *__fastcall anonymous_namespace_::_Minmax_element_3__anonymous_namespace_::_Minmax_traits_4_(
        _OWORD *a1,
        const __m128i *a2,
        const __m128i *a3,
        unsigned __int8 a4)
{
  unsigned __int64 v5; // r8
  int v6; // r15d
  const __m128i *v8; // r11
  __int64 v9; // r10
  int v10; // edi
  signed int v11; // ebx
  const __m128i *v12; // r14
  unsigned __int64 v13; // r8
  __m128i si128; // xmm11
  __m128i v15; // xmm6
  __m128i v16; // xmm9
  const __m128i *v17; // r9
  __m128i v18; // xmm7
  __m128i v19; // xmm10
  __m128i v20; // xmm3
  __m128i v21; // xmm5
  __m128i v22; // xmm4
  __m128i v23; // xmm4
  int v24; // eax
  __m128i v25; // xmm4
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  unsigned __int64 v28; // rax
  __m128i v29; // xmm3
  __m128i v30; // xmm3
  int v31; // eax
  __m128i v32; // xmm3
  __m128i v33; // xmm2
  __m128i v34; // xmm1
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  __m128i v37; // xmm2
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int32 v40; // ecx
  __int32 v41; // eax
  unsigned int v42; // r8d
  unsigned int v43; // r9d
  unsigned __int32 v44; // ecx
  __int32 v45; // eax
  _OWORD *result; // rax
  __int128 v47; // [rsp+0h] [rbp-B8h]
  __m128i v48; // [rsp+18h] [rbp-A0h]

  v5 = (char *)a3 - (char *)a2;
  v6 = a4;
  *(_QWORD *)&v47 = a2;
  v8 = a2;
  *((_QWORD *)&v47 + 1) = a2;
  v9 = (__int64)a2;
  v10 = 0x7FFFFFFF;
  v11 = 0x80000000;
  v12 = a2;
  if ( v5 >= 0x10 && (_isa_enabled & 4) != 0 )
  {
    v13 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v13 > 0x1000000000LL )
      v13 = 0x1000000000LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v15 = 0LL;
    v16 = 0LL;
    v17 = (const __m128i *)((char *)a2 + v13);
    v18 = 0LL;
    v19 = _mm_loadu_si128(&xmmword_1807677C0[v6]);
    while ( 1 )
    {
      v20 = _mm_sub_epi32(_mm_loadu_si128(a2), v19);
      v21 = v20;
      while ( 1 )
      {
        ++a2;
        v18 = _mm_add_epi32(v18, si128);
        if ( a2 == v17 )
          break;
        v37 = _mm_sub_epi32(_mm_loadu_si128(a2), v19);
        v38 = _mm_cmpgt_epi32(v20, v37);
        v20 = _mm_min_epi32(v20, v37);
        v15 = _mm_blendv_epi8(v15, v18, v38);
        v39 = v21;
        v21 = _mm_max_epi32(v21, v37);
        v16 = _mm_blendv_epi8(v18, v16, _mm_cmpgt_epi32(v39, v37));
      }
      v22 = _mm_min_epi32(v20, _mm_shuffle_epi32(v20, 78));
      v23 = _mm_min_epi32(v22, _mm_shuffle_epi32(v22, 177));
      v24 = _mm_cvtsi128_si32(v23);
      if ( v24 < v10 )
      {
        v10 = v24;
        v25 = _mm_cmpeq_epi32(v23, v20);
        v26 = _mm_blendv_epi8(_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff), v15, v25);
        v27 = _mm_min_epu32(v26, _mm_shuffle_epi32(v26, 78));
        v48 = v15;
        _BitScanForward(
          (unsigned int *)&v28,
          _mm_movemask_epi8(v25) & _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_min_epu32(v27, _mm_shuffle_epi32(v27, 177)), v26)));
        v8 = (const __m128i *)((char *)&v12[v48.m128i_u32[v28 >> 2]] + (unsigned int)v28);
        *(_QWORD *)&v47 = v8;
      }
      v29 = _mm_max_epi32(v21, _mm_shuffle_epi32(v21, 78));
      v30 = _mm_max_epi32(v29, _mm_shuffle_epi32(v29, 177));
      v31 = _mm_cvtsi128_si32(v30);
      if ( v11 <= v31 )
      {
        v11 = v31;
        v32 = _mm_cmpeq_epi32(v30, v21);
        v33 = _mm_blendv_epi8((__m128i)0LL, v16, v32);
        v34 = _mm_max_epu32(v33, _mm_shuffle_epi32(v33, 78));
        v48 = v16;
        _BitScanReverse(
          &v35,
          _mm_movemask_epi8(v32) & _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_max_epu32(v34, _mm_shuffle_epi32(v34, 177)), v33)));
        v9 = (__int64)&v12[v48.m128i_u32[(unsigned __int64)(v35 - 3) >> 2] - 1].m128i_i64[1] + v35 + 5;
        *((_QWORD *)&v47 + 1) = v9;
      }
      v36 = ((char *)a3 - (char *)a2) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v36 )
        break;
      v12 = a2;
      v15 = 0LL;
      v16 = 0LL;
      if ( v36 > 0x1000000000LL )
        v36 = 0x1000000000LL;
      v17 = (const __m128i *)((char *)v17 + v36);
    }
  }
  if ( (_BYTE)v6 )
  {
    if ( a2 != a3 )
    {
      do
      {
        v40 = a2->m128i_i32[0];
        v41 = a2->m128i_i32[0];
        if ( a2->m128i_i32[0] < v10 )
          v8 = a2;
        else
          v41 = v10;
        v10 = v41;
        if ( v11 <= v40 )
          v9 = (__int64)a2;
        a2 = (const __m128i *)((char *)a2 + 4);
        if ( v11 > v40 )
          v40 = v11;
        v11 = v40;
      }
      while ( a2 != a3 );
LABEL_37:
      *(_QWORD *)&v47 = v8;
      *((_QWORD *)&v47 + 1) = v9;
    }
  }
  else
  {
    v42 = v11 + 0x80000000;
    v43 = v10 + 0x80000000;
    if ( a2 != a3 )
    {
      do
      {
        v44 = a2->m128i_i32[0];
        v45 = a2->m128i_i32[0];
        if ( a2->m128i_i32[0] < v43 )
          v8 = a2;
        else
          v45 = v43;
        v43 = v45;
        if ( v42 <= v44 )
          v9 = (__int64)a2;
        a2 = (const __m128i *)((char *)a2 + 4);
        if ( v42 > v44 )
          v44 = v42;
        v42 = v44;
      }
      while ( a2 != a3 );
      goto LABEL_37;
    }
  }
  result = a1;
  *a1 = v47;
  return result;
}
