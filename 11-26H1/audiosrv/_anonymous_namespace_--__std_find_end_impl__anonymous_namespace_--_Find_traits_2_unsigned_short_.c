/*
 * XREFs of _anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x1800B1380
 * Callers:
 *     __std_find_end_2 @ 0x1800B1B30 (__std_find_end_2.c)
 * Callees:
 *     _anonymous_namespace_::__std_find_last_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x1800B1720 (_anonymous_namespace_--__std_find_last_trivial_impl__anonymous_namespace_--_Find_traits_2_unsign.c)
 *     __anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short__::_33_::_lambda_3_::operator() @ 0x1800B1A90 (__anonymous_namespace_--__std_find_end_impl__anonymous_namespace_--_Find_traits_2_unsigned_short.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

const __m128i *__fastcall anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4)
{
  const __m128i *result; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  __m128i *v10; // r12
  int v11; // r13d
  __m128 v12; // xmm2
  __m128i *v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // eax
  __m128i v18; // xmm1
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // edx
  unsigned int v22; // r9d
  __m128i v23; // xmm3
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  __m128 v28; // xmm6
  unsigned __int64 v29; // r14
  const __m128i *v30; // r12
  __m128i *v31; // rsi
  __m128i *v32; // r13
  __m128i *v33; // rbx
  __m128i v34; // xmm0
  unsigned int v35; // eax
  __int64 v36; // rdi
  const __m128i *v37; // rbx
  __m128i v38; // xmm0
  int v39; // r14d
  __int16 v40; // r9
  __m128i *v41; // r8
  __int8 *i; // r10
  __int64 v43; // rdx
  __int16 *j; // rax
  signed __int32 v45[4]; // [rsp+20h] [rbp-79h] BYREF
  __m128i *v46; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-61h]
  __int64 v48; // [rsp+40h] [rbp-59h]
  __m128i **v49; // [rsp+50h] [rbp-49h] BYREF
  __m128 v50; // [rsp+60h] [rbp-39h]
  const __m128i *v51; // [rsp+70h] [rbp-29h]
  __int64 v52; // [rsp+78h] [rbp-21h]
  __m128i v53; // [rsp+80h] [rbp-19h] BYREF

  v48 = a2;
  v53.m128i_i64[0] = (__int64)a1;
  if ( !a4 )
    return (const __m128i *)v48;
  if ( a4 == 1 )
    return (const __m128i *)anonymous_namespace_::__std_find_last_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_(
                              a1,
                              a2,
                              a3->m128i_u16[0]);
  v8 = 2 * a4;
  v9 = a2 - (_QWORD)a1;
  if ( a2 - (__int64)a1 < (unsigned __int64)(2 * a4) )
    return (const __m128i *)v48;
  if ( (_isa_enabled & 4) == 0 || v9 < 0x10 )
  {
    v40 = a3->m128i_i16[0];
    v41 = (__m128i *)(a2 - v8);
    for ( i = &a3->m128i_i8[-(a2 - v8)]; ; i += 2 )
    {
      if ( v41->m128i_i16[0] == v40 )
      {
        v43 = 1LL;
        for ( j = &v41->m128i_i16[1]; *j == *(__int16 *)((char *)j + (_QWORD)i); ++j )
        {
          if ( ++v43 == a4 )
            return v41;
        }
      }
      if ( v41 == a1 )
        break;
      v41 = (__m128i *)((char *)v41 - 2);
    }
    return (const __m128i *)v48;
  }
  if ( v8 > 0x10 )
  {
    v28 = (__m128)_mm_loadu_si128(a3);
    v29 = v9 - v8;
    v52 = 2 * a4;
    v47 = v29;
    v50 = v28;
    v30 = a3 + 1;
    v31 = (__m128i *)(a2 - v8);
    v51 = a3 + 1;
    v46 = (__m128i *)(a2 - v8);
    v32 = (__m128i *)((char *)a1 + (v29 & 0xF));
    v49 = &v46;
    v33 = a1;
    v34 = (__m128i)_mm_xor_ps((__m128)_mm_loadu_si128((const __m128i *)(a2 - v8)), v28);
    if ( _mm_testz_si128(v34, v34) && !memcmp_0(&v31[1], v30, v8 - 16) )
      return v31;
    if ( v31 != v32 )
    {
      do
      {
        v46 = --v31;
        v35 = _mm_cvtsi128_si32(_mm_cmpestrm((__m128i)v28, *v31, 8u, 8u));
        if ( v35 )
        {
          v45[0] = v35;
          do
          {
            _BitScanReverse((unsigned int *)&v36, v35);
            v37 = v31;
            if ( !(_DWORD)v36
              || (v37 = (__m128i *)((char *)v31 + 2 * v36),
                  v38 = (__m128i)_mm_xor_ps((__m128)_mm_loadu_si128(v37), v28),
                  _mm_testz_si128(v38, v38)) )
            {
              if ( !memcmp_0(&v37[1], v30, v8 - 16) )
                return v37;
            }
            _bittestandreset(v45, v36);
            v35 = v45[0];
          }
          while ( v45[0] );
        }
      }
      while ( v31 != v32 );
      LOBYTE(v29) = v47;
      v33 = (__m128i *)v53.m128i_i64[0];
    }
    v39 = v29 & 0xF;
    if ( v39 )
    {
      v46 = v33;
      if ( (((1 << v39) - 1) & _mm_cvtsi128_si32(_mm_cmpestrm((__m128i)v28, *v33, 8u, 8u))) != 0 )
      {
        if ( (unsigned __int8)_anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short__::_33_::_lambda_3_::operator()(&v49) )
          return v46;
      }
    }
    return (const __m128i *)v48;
  }
  v47 = v9 & 0xF;
  v10 = (__m128i *)((char *)a1 + v47);
  v11 = (1 << (9 - a4)) - 1;
  memcpy_0(&v53, a3, 2 * a4);
  v12 = (__m128)_mm_load_si128(&v53);
  v13 = (__m128i *)(v48 - 16);
  v14 = v11 ^ 0xFF;
  LODWORD(v15) = v11 & _mm_cvtsi128_si32(_mm_cmpestrm((__m128i)v12, *(__m128i *)(v48 - 16), a4, 8u));
  if ( (_DWORD)v15 )
  {
    _BitScanReverse((unsigned int *)&v15, v15);
    return (__m128i *)((char *)v13 + 2 * v15);
  }
  if ( v13 == v10 )
  {
LABEL_18:
    if ( v47 )
    {
      v21 = ((1 << v47) - 1) & _mm_cvtsi128_si32(_mm_cmpestrm((__m128i)v12, *a1, a4, 8u));
      if ( v21 )
      {
        v22 = v21 & v14;
        v45[0] = v22;
        if ( v22 )
        {
          v23 = _mm_loadu_si128((const __m128i *)((char *)&unk_18018CF10 - v8));
          do
          {
            _BitScanReverse((unsigned int *)&v24, v22);
            result = (__m128i *)((char *)a1 + 2 * v24);
            if ( _mm_testz_si128((__m128i)_mm_xor_ps(v12, (__m128)_mm_loadu_si128(result)), v23) )
              return result;
            _bittestandreset(v45, v24);
            v22 = v45[0];
          }
          while ( v45[0] );
        }
        v25 = v11 & v21;
        if ( v25 )
        {
          _BitScanReverse((unsigned int *)&v26, v25);
          return (__m128i *)((char *)a1 + 2 * v26);
        }
      }
    }
    return (const __m128i *)v48;
  }
  while ( 1 )
  {
    v16 = _mm_cvtsi128_si32(_mm_cmpestrm((__m128i)v12, *--v13, a4, 8u));
    if ( !v16 )
      goto LABEL_17;
    v17 = v16 & v14;
    v45[0] = v16 & v14;
    if ( (v16 & v14) != 0 )
      break;
LABEL_16:
    v20 = v11 & v16;
    if ( v20 )
    {
      _BitScanReverse((unsigned int *)&v27, v20);
      return (__m128i *)((char *)v13 + 2 * v27);
    }
LABEL_17:
    if ( v13 == v10 )
      goto LABEL_18;
  }
  v18 = _mm_loadu_si128((const __m128i *)((char *)&unk_18018CF10 - v8));
  while ( 1 )
  {
    _BitScanReverse((unsigned int *)&v19, v17);
    result = (__m128i *)((char *)v13 + 2 * v19);
    if ( _mm_testz_si128((__m128i)_mm_xor_ps((__m128)_mm_loadu_si128(result), v12), v18) )
      return result;
    _bittestandreset(v45, v19);
    v17 = v45[0];
    if ( !v45[0] )
      goto LABEL_16;
  }
}
