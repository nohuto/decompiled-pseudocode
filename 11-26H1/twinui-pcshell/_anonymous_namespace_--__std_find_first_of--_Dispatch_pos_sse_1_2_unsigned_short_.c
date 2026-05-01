/*
 * XREFs of _anonymous_namespace_::__std_find_first_of::_Dispatch_pos_sse_1_2_unsigned_short_ @ 0x1802CB960
 * Callers:
 *     __std_find_first_of_trivial_pos_2 @ 0x1802CD0F0 (__std_find_first_of_trivial_pos_2.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _anonymous_namespace_::__std_find_meow_of_bitmap::_Can_fit_256_bits_sse_unsigned_short_ @ 0x1802CB900 (_anonymous_namespace_--__std_find_meow_of_bitmap--_Can_fit_256_bits_sse_unsigned_short_.c)
 *     _anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_first_avx_unsigned_short_ @ 0x1802CBB30 (_anonymous_namespace_--__std_find_meow_of_bitmap--_Impl_first_avx_unsigned_short_.c)
 *     _anonymous_namespace_::__std_find_first_of::_Impl_pcmpestri_unsigned_short_ @ 0x1802CBC80 (_anonymous_namespace_--__std_find_first_of--_Impl_pcmpestri_unsigned_short_.c)
 */

unsigned __int64 __fastcall anonymous_namespace_::__std_find_first_of::_Dispatch_pos_sse_1_2_unsigned_short_(
        unsigned __int16 *Src,
        unsigned __int64 a2,
        const __m128i *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  const __m128i *v6; // rdi
  __int64 v9; // rbx
  int v10; // ecx
  bool v11; // cf
  bool v12; // zf
  __m128i si128; // xmm1
  const __m128i *v14; // rax
  const __m128i *v15; // r8
  const __m128i *v16; // r8
  unsigned __int16 *i; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int16 *v21; // rax
  _BYTE v22[256]; // [rsp+40h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL;
  v6 = a3;
  if ( (_isa_enabled & 0x20) != 0 && a2 > 0x30 )
  {
    v9 = 0LL;
    if ( a4 > 8 )
      v10 = 2;
    else
      v10 = 2 * (a2 > 0x80);
  }
  else
  {
    v9 = 0LL;
    v10 = 0;
    if ( a4 > 8 )
    {
      if ( a4 > 0x50 )
      {
        v11 = a2 < 8;
        v12 = a2 == 8;
      }
      else
      {
        v11 = a2 < 0x10;
        v12 = a2 == 16;
      }
      LOBYTE(v10) = !v11 && !v12;
    }
  }
  if ( v10 == 2 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ff00ff00ff00ff00ff00ff00ff00ff00);
    v14 = a3;
    v15 = (const __m128i *)((char *)a3 + ((2 * a4) & 0xFFFFFFFFFFFFFFE0uLL));
    if ( v6 == v15 )
    {
LABEL_15:
      v16 = (const __m128i *)((char *)v15 + ((2 * (_BYTE)a4) & 0x1E));
      if ( v14 == v16 )
        return anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_first_avx_unsigned_short_(Src, a2, v6);
      while ( (v14->m128i_i16[0] & 0xFF00) == 0 )
      {
        v14 = (const __m128i *)((char *)v14 + 2);
        if ( v14 == v16 )
          return anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_first_avx_unsigned_short_(Src, a2, v6);
      }
    }
    else
    {
      while ( _mm_testz_si128(si128, _mm_loadu_si128(v14)) )
      {
        v14 += 2;
        if ( v14 == v15 )
          goto LABEL_15;
      }
    }
  }
  else if ( v10 == 1 && anonymous_namespace_::__std_find_meow_of_bitmap::_Can_fit_256_bits_sse_unsigned_short_(a3, a4) )
  {
    memset_0((void *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL), 0, 0x100uLL);
    for ( i = (unsigned __int16 *)v6 + a4; v6 != (const __m128i *)i; *(_BYTE *)(v4 + v19) = 1 )
    {
      v19 = v6->m128i_u16[0];
      v6 = (const __m128i *)((char *)v6 + 2);
    }
    if ( !a2 )
      return -1LL;
    while ( 1 )
    {
      v20 = Src[v9];
      if ( (unsigned __int16)v20 < 0x100u )
      {
        if ( *(_BYTE *)(v4 + v20) )
          break;
      }
      if ( ++v9 == a2 )
        return -1LL;
    }
    return v9;
  }
  v21 = (unsigned __int16 *)anonymous_namespace_::__std_find_first_of::_Impl_pcmpestri_unsigned_short_(Src);
  v9 = -1LL;
  if ( v21 != &Src[a2] )
    return (unsigned __int64)((char *)v21 - (char *)Src) >> 1;
  return v9;
}
