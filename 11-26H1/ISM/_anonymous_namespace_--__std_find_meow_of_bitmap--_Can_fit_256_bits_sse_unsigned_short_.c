/*
 * XREFs of _anonymous_namespace_::__std_find_meow_of_bitmap::_Can_fit_256_bits_sse_unsigned_short_ @ 0x18009BD30
 * Callers:
 *     _anonymous_namespace_::__std_find_last_of::_Dispatch_pos_unsigned_short_ @ 0x18009BD90 (_anonymous_namespace_--__std_find_last_of--_Dispatch_pos_unsigned_short_.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::__std_find_meow_of_bitmap::_Can_fit_256_bits_sse_unsigned_short_(
        const __m128i *a1,
        __int64 a2)
{
  __m128i si128; // xmm1
  char v3; // al
  const __m128i *v4; // rdx
  const __m128i *v5; // rdx

  si128 = _mm_load_si128((const __m128i *)&_xmm_ff00ff00ff00ff00ff00ff00ff00ff00);
  v3 = 2 * a2;
  v4 = (const __m128i *)((char *)a1 + ((2 * a2) & 0xFFFFFFFFFFFFFFF0uLL));
  if ( a1 == v4 )
  {
LABEL_4:
    v5 = (const __m128i *)((char *)v4 + (v3 & 0xF));
    if ( a1 == v5 )
      return 1;
    while ( (a1->m128i_i16[0] & 0xFF00) == 0 )
    {
      a1 = (const __m128i *)((char *)a1 + 2);
      if ( a1 == v5 )
        return 1;
    }
  }
  else
  {
    while ( _mm_testz_si128(si128, _mm_loadu_si128(a1)) )
    {
      if ( ++a1 == v4 )
        goto LABEL_4;
    }
  }
  return 0;
}
