/*
 * XREFs of __anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short__::_33_::_lambda_3_::operator() @ 0x1800B1A90
 * Callers:
 *     _anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short_ @ 0x1800B1380 (_anonymous_namespace_--__std_find_end_impl__anonymous_namespace_--_Find_traits_2_unsigned_short_.c)
 * Callees:
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 */

char __fastcall _anonymous_namespace_::__std_find_end_impl__anonymous_namespace_::_Find_traits_2_unsigned_short__::_33_::_lambda_3_::operator()(
        __int64 a1,
        unsigned int a2)
{
  const __m128i **v3; // r14
  const __m128i *v4; // rbp
  __int64 v5; // rdi
  const __m128i *v6; // rbx
  __m128i v7; // xmm0
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a2 )
    return 0;
  v3 = *(const __m128i ***)a1;
  v4 = **(const __m128i ***)a1;
  while ( 1 )
  {
    _BitScanReverse((unsigned int *)&v5, a2);
    v6 = v4;
    if ( !(_DWORD)v5
      || (v6 = (const __m128i *)((char *)v4 + 2 * v5),
          v7 = (__m128i)_mm_xor_ps((__m128)_mm_loadu_si128(v6), *(__m128 *)(a1 + 16)),
          _mm_testz_si128(v7, v7)) )
    {
      if ( !memcmp_0(&v6[1], *(const void **)(a1 + 32), *(_QWORD *)(a1 + 40) - 16LL) )
        break;
    }
    _bittestandreset((signed __int32 *)&v9, v5);
    a2 = v9;
    if ( !v9 )
      return 0;
  }
  *v3 = v6;
  return 1;
}
