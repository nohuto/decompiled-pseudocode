/*
 * XREFs of _anonymous_namespace_::__std_find_first_of::_Impl_pcmpestri_unsigned_short_ @ 0x1802CBC80
 * Callers:
 *     _anonymous_namespace_::__std_find_first_of::_Dispatch_pos_sse_1_2_unsigned_short_ @ 0x1802CB960 (_anonymous_namespace_--__std_find_first_of--_Dispatch_pos_sse_1_2_unsigned_short_.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

const __m128i *__fastcall anonymous_namespace_::__std_find_first_of::_Impl_pcmpestri_unsigned_short_(
        const __m128i *Src,
        __int64 a2,
        const __m128i *a3,
        size_t a4)
{
  const __m128i *v4; // rbx
  const __m128i *v5; // rbp
  const __m128i *v6; // rdi
  char v7; // r15
  size_t v8; // rsi
  __m128i i; // xmm6
  __m128i v10; // xmm0
  int v11; // ecx
  unsigned int v12; // r15d
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  size_t v16; // r14
  const __m128i *v17; // rsi
  __m128i v18; // xmm6
  int v19; // r9d
  size_t v20; // r14
  __m128i v21; // xmm1
  const __m128i *v22; // r8
  __m128i v23; // xmm0
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // r15d
  unsigned __int64 v27; // rbp
  __m128i v28; // xmm1
  int v29; // r8d
  __m128i v30; // xmm0
  int v31; // ecx
  int v32; // ecx
  __m128i v33; // [rsp+20h] [rbp-68h] BYREF

  v4 = Src;
  v5 = (const __m128i *)((char *)Src + (a2 & 0xFFFFFFFFFFFFFFF0uLL));
  v6 = a3;
  v7 = a2;
  if ( a4 <= 0x10 )
  {
    v8 = a4 >> 1;
    memcpy_0(&v33, a3, a4);
    for ( i = _mm_load_si128(&v33); v4 != v5; ++v4 )
    {
      v10 = _mm_loadu_si128(v4);
      v11 = _mm_cmpestri(i, v10, v8, 8u);
      if ( _mm_cmpestrc(i, v10, v8, 8u) )
        return (const __m128i *)((char *)v4 + 2 * v11);
    }
    v12 = v7 & 0xF;
    if ( v12 )
    {
      v13 = (unsigned __int64)v12 >> 1;
      memcpy_0(&v33, v4, v12);
      v14 = _mm_load_si128(&v33);
      v11 = _mm_cmpestri(i, v14, v8, v13);
      if ( _mm_cmpestrc(i, v14, v8, v13) )
        return (const __m128i *)((char *)v4 + 2 * v11);
      return (const __m128i *)((char *)v4 + v12);
    }
    return v4;
  }
  v16 = a4 & 0xF;
  v17 = (const __m128i *)((char *)a3 + (a4 & 0xFFFFFFFFFFFFFFF0uLL));
  memcpy_0(&v33, v17, v16);
  v18 = _mm_load_si128(&v33);
  v19 = 16;
  v20 = v16 >> 1;
  if ( v4 == v5 )
  {
LABEL_21:
    v26 = v7 & 0xF;
    if ( v26 )
    {
      v27 = (unsigned __int64)v26 >> 1;
      memcpy_0(&v33, v4, v26);
      v28 = _mm_load_si128(&v33);
      v29 = v26 >> 1;
      do
      {
        v30 = _mm_loadu_si128(v6);
        v31 = _mm_cmpestri(v30, v28, 8u, v27);
        if ( _mm_cmpestrc(v30, v28, 8u, v27) && v31 < v29 )
          v29 = v31;
        ++v6;
      }
      while ( v6 != v17 );
      if ( (_DWORD)v20 )
      {
        v32 = _mm_cmpestri(v18, v28, v20, v27);
        if ( _mm_cmpestrc(v18, v28, v20, v27) )
        {
          if ( v32 < v29 )
            v29 = v32;
        }
      }
      return (const __m128i *)((char *)v4 + 2 * v29);
    }
    return v4;
  }
  while ( 1 )
  {
    v21 = _mm_loadu_si128(v4);
    v22 = v6;
    do
    {
      v23 = _mm_loadu_si128(v22);
      v24 = _mm_cmpestri(v23, v21, 8u, 8u);
      if ( _mm_cmpestrc(v23, v21, 8u, 8u) && v24 < v19 )
        v19 = v24;
      ++v22;
    }
    while ( v22 != v17 );
    if ( (_DWORD)v20 )
    {
      v25 = _mm_cmpestri(v18, v21, v20, 8u);
      if ( _mm_cmpestrc(v18, v21, v20, 8u) )
      {
        if ( v25 < v19 )
          v19 = v25;
      }
    }
    if ( v19 != 16 )
      return (const __m128i *)((char *)v4 + 2 * v19);
    if ( ++v4 == v5 )
      goto LABEL_21;
  }
}
