/*
 * XREFs of _anonymous_namespace_::__std_find_last_of::_Dispatch_pos_unsigned_short_ @ 0x18009BD90
 * Callers:
 *     __std_find_last_of_trivial_pos_2 @ 0x18009C8B0 (__std_find_last_of_trivial_pos_2.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _anonymous_namespace_::__std_find_meow_of_bitmap::_Can_fit_256_bits_sse_unsigned_short_ @ 0x18009BD30 (_anonymous_namespace_--__std_find_meow_of_bitmap--_Can_fit_256_bits_sse_unsigned_short_.c)
 *     _anonymous_namespace_::__std_find_last_of::_Impl_unsigned_short_ @ 0x18009BF70 (_anonymous_namespace_--__std_find_last_of--_Impl_unsigned_short_.c)
 *     _anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_last_avx_unsigned_short_ @ 0x18009C190 (_anonymous_namespace_--__std_find_meow_of_bitmap--_Impl_last_avx_unsigned_short_.c)
 */

__int64 __fastcall anonymous_namespace_::__std_find_last_of::_Dispatch_pos_unsigned_short_(
        unsigned __int16 *Src,
        unsigned __int64 a2,
        const __m128i *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  const __m128i *v6; // rdi
  unsigned __int64 v7; // rbx
  int v9; // ecx
  bool v10; // cf
  bool v11; // zf
  unsigned __int16 *i; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 *v16; // rdx
  unsigned __int16 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const __m128i *v21; // rax
  _BYTE v22[256]; // [rsp+40h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL;
  v6 = a3;
  v7 = a2;
  if ( (_isa_enabled & 4) != 0 )
  {
    if ( (_isa_enabled & 0x20) != 0 && a2 > 0x30 )
    {
      if ( a4 > 8 )
        v9 = 2;
      else
        v9 = 2 * (a2 > 0x80);
    }
    else
    {
      v9 = 0;
      if ( a4 > 8 )
      {
        if ( a4 > 0x50 )
        {
          v10 = a2 < 8;
          v11 = a2 == 8;
        }
        else
        {
          v10 = a2 < 0x10;
          v11 = a2 == 16;
        }
        LOBYTE(v9) = !v10 && !v11;
      }
    }
    if ( v9 == 2 )
    {
      if ( anonymous_namespace_::__std_find_meow_of_bitmap::_Can_fit_256_bits_sse_unsigned_short_(a3, a4) )
        return anonymous_namespace_::__std_find_meow_of_bitmap::_Impl_last_avx_unsigned_short_(Src);
      return anonymous_namespace_::__std_find_last_of::_Impl_unsigned_short_(Src);
    }
    if ( v9 != 1 || !anonymous_namespace_::__std_find_meow_of_bitmap::_Can_fit_256_bits_sse_unsigned_short_(a3, a4) )
      return anonymous_namespace_::__std_find_last_of::_Impl_unsigned_short_(Src);
    memset_0((void *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL), 0, 0x100uLL);
    for ( i = (unsigned __int16 *)v6 + a4; v6 != (const __m128i *)i; *(_BYTE *)(v4 + v14) = 1 )
    {
      v14 = v6->m128i_u16[0];
      v6 = (const __m128i *)((char *)v6 + 2);
    }
    if ( v7 )
    {
      while ( 1 )
      {
        v15 = Src[--v7];
        if ( (unsigned __int16)v15 < 0x100u )
        {
          if ( *(_BYTE *)(v4 + v15) )
            break;
        }
        if ( !v7 )
          return -1LL;
      }
      return v7;
    }
  }
  else
  {
    memset_0((void *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFE0uLL), 0, 0x100uLL);
    v16 = (unsigned __int16 *)v6 + a4;
    v17 = (unsigned __int16 *)v6;
    if ( v6 == (const __m128i *)v16 )
    {
LABEL_28:
      if ( v7 )
      {
        while ( 1 )
        {
          v19 = Src[--v7];
          if ( (unsigned __int16)v19 < 0x100u )
          {
            if ( *(_BYTE *)(v4 + v19) )
              break;
          }
          if ( !v7 )
            return -1LL;
        }
        return v7;
      }
    }
    else
    {
      while ( 1 )
      {
        v18 = *v17;
        if ( (unsigned __int16)v18 >= 0x100u )
          break;
        ++v17;
        *(_BYTE *)(v4 + v18) = 1;
        if ( v17 == v16 )
          goto LABEL_28;
      }
LABEL_34:
      if ( v7 )
      {
        v20 = Src[--v7];
        v21 = v6;
        while ( v20 != v21->m128i_i16[0] )
        {
          v21 = (const __m128i *)((char *)v21 + 2);
          if ( v21 == (const __m128i *)v16 )
            goto LABEL_34;
        }
        return v7;
      }
    }
  }
  return -1LL;
}
