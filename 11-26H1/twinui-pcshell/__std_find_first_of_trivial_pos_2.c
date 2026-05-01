/*
 * XREFs of __std_find_first_of_trivial_pos_2 @ 0x1802CD0F0
 * Callers:
 *     ??$_Traits_find_first_of@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x18061E6B4 (--$_Traits_find_first_of@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _anonymous_namespace_::__std_find_first_of::_Dispatch_pos_sse_1_2_unsigned_short_ @ 0x1802CB960 (_anonymous_namespace_--__std_find_first_of--_Dispatch_pos_sse_1_2_unsigned_short_.c)
 */

unsigned __int64 __fastcall _std_find_first_of_trivial_pos_2(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        const __m128i *a3,
        unsigned __int64 a4)
{
  const __m128i *v9; // r8
  const __m128i *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 *v14; // r9
  unsigned __int16 *v15; // rdx
  bool v16; // zf
  const __m128i *v17; // rax
  _BYTE v18[256]; // [rsp+20h] [rbp-138h] BYREF

  if ( (_isa_enabled & 4) != 0 )
    return anonymous_namespace_::__std_find_first_of::_Dispatch_pos_sse_1_2_unsigned_short_(a1, a2, a3, a4);
  memset_0(v18, 0, sizeof(v18));
  v9 = (const __m128i *)((char *)a3 + 2 * a4);
  v10 = a3;
  if ( a3 == v9 )
  {
LABEL_6:
    v12 = 0LL;
    if ( a2 )
    {
      while ( 1 )
      {
        v13 = a1[v12];
        if ( (unsigned __int16)v13 < 0x100u )
        {
          if ( v18[v13] )
            break;
        }
        if ( ++v12 == a2 )
          return -1LL;
      }
    }
    else
    {
      return -1LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v11 = v10->m128i_u16[0];
      if ( (unsigned __int16)v11 >= 0x100u )
        break;
      v10 = (const __m128i *)((char *)v10 + 2);
      v18[v11] = 1;
      if ( v10 == v9 )
        goto LABEL_6;
    }
    v14 = &a1[a2];
    v15 = a1;
    v16 = a1 == v14;
LABEL_13:
    if ( !v16 )
    {
      v17 = a3;
      while ( *v15 != v17->m128i_i16[0] )
      {
        v17 = (const __m128i *)((char *)v17 + 2);
        if ( v17 == v9 )
        {
          v16 = ++v15 == v14;
          goto LABEL_13;
        }
      }
    }
    v12 = -1LL;
    if ( v15 != v14 )
      return (unsigned __int64)((char *)v15 - (char *)a1) >> 1;
  }
  return v12;
}
