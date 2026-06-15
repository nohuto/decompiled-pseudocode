/*
 * XREFs of _anonymous_namespace_::__std_search_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x18002F1D0
 * Callers:
 *     __std_search_2 @ 0x18002F410 (__std_search_2.c)
 * Callees:
 *     _anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x18002EED0 (_anonymous_namespace_--__std_find_trivial_impl__anonymous_namespace_--_Find_traits_2_unsigned_sh.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180030A04 (memcmp_0.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 */

const __m128i *__fastcall anonymous_namespace_::__std_search_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_(
        const __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4)
{
  const __m128i *v6; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __m128i v11; // xmm6
  __m128i v12; // xmm0
  signed int v13; // ecx
  size_t v14; // r8
  size_t v15; // rsi
  __m128i v16; // xmm0
  int v17; // ecx
  __m128 v18; // xmm6
  const __m128i *v19; // rbp
  const __m128i *v20; // rdi
  __m128i v21; // xmm0
  int v22; // ecx
  __m128i v23; // xmm1
  const __m128i *v24; // r8
  __int16 v25; // r11
  signed __int64 v26; // r10
  __int64 v27; // rdx
  __int16 *i; // rcx
  __m128i v29; // [rsp+20h] [rbp-58h] BYREF

  v6 = a1;
  if ( !a4 )
    return a1;
  if ( a4 == 1 )
    return anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_(
             a1,
             a2,
             a3->m128i_i16[0]);
  v8 = (char *)a2 - (char *)a1;
  v9 = 2 * a4;
  if ( (char *)a2 - (char *)v6 >= (unsigned __int64)(2 * a4) )
  {
    if ( (_isa_enabled & 4) != 0 && v8 >= 0x10 )
    {
      if ( v9 > 0x10 )
      {
        v18 = (__m128)_mm_loadu_si128(a3);
        v19 = a3 + 1;
        v20 = (const __m128i *)((char *)a2 - v9);
        while ( 1 )
        {
          v21 = _mm_loadu_si128(v6);
          v22 = _mm_cmpestri((__m128i)v18, v21, 8u, 8u);
          if ( _mm_cmpestrc((__m128i)v18, v21, 8u, 8u) )
          {
            if ( !v22 )
              goto LABEL_23;
            v6 = (const __m128i *)((char *)v6 + 2 * v22);
            if ( v6 > v20 )
              return a2;
            v23 = (__m128i)_mm_xor_ps(v18, (__m128)_mm_loadu_si128(v6));
            if ( _mm_testz_si128(v23, v23) )
            {
LABEL_23:
              if ( !memcmp_0(&v6[1], v19, v9 - 16) )
                return v6;
            }
            v6 = (const __m128i *)((char *)v6 + 2);
          }
          else
          {
            ++v6;
          }
          if ( v6 > v20 )
            return a2;
        }
      }
      v10 = v9 >> 1;
      memcpy_0(&v29, a3, 2 * a4);
      v11 = _mm_load_si128(&v29);
      do
      {
        v12 = _mm_loadu_si128(v6);
        v13 = _mm_cmpestri(v11, v12, v10, 8u);
        if ( _mm_cmpestrc(v11, v12, v10, 8u) )
        {
          v6 = (const __m128i *)((char *)v6 + 2 * v13);
          if ( v13 <= (int)(8 - (v9 >> 1)) )
            return v6;
        }
        else
        {
          ++v6;
        }
      }
      while ( v6 <= &a2[-1] );
      v14 = (char *)a2 - (char *)v6;
      if ( a2 != v6 )
      {
        v15 = v14 >> 1;
        memcpy_0(&v29, v6, v14);
        v16 = _mm_load_si128(&v29);
        v17 = _mm_cmpestri(v11, v16, v10, v15);
        if ( _mm_cmpestrc(v11, v16, v10, v15) )
          return (const __m128i *)((char *)v6 + 2 * v17);
      }
    }
    else
    {
      v24 = (const __m128i *)((char *)a2 + 2 - v9);
      if ( v6 != v24 )
      {
        v25 = a3->m128i_i16[0];
        v26 = (char *)a3 - (char *)v6;
        do
        {
          if ( v6->m128i_i16[0] == v25 )
          {
            v27 = 1LL;
            for ( i = &v6->m128i_i16[1]; *i == *(__int16 *)((char *)i + v26); ++i )
            {
              if ( ++v27 == a4 )
                return v6;
            }
          }
          v6 = (const __m128i *)((char *)v6 + 2);
          v26 -= 2LL;
        }
        while ( v6 != v24 );
      }
    }
  }
  return a2;
}
