/*
 * XREFs of ?IndexOfInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@IU678295@PEAIPEAE@Z @ 0x180477FE8
 * Callers:
 *     ?IndexOf@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x180477F10 (-IndexOf@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __m128i *a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int i; // r10d
  __m128i v7; // xmm5
  __m128i v8; // xmm3
  __int64 v9; // rcx
  __m128i v10; // xmm4
  __m128i v11; // xmm2
  __m128i v12; // xmm4
  __m128i v13; // xmm5

  for ( i = 0; i < a3; ++i )
  {
    v7 = *a4;
    v8 = a4[1];
    v9 = 56LL * i;
    v10 = *(__m128i *)(v9 + a2);
    v11 = *(__m128i *)(v9 + a2 + 16);
    if ( HIDWORD(a4->m128i_i64[0]) == HIDWORD(*(_QWORD *)(v9 + a2))
      && _mm_cvtsi128_si32(v7) == _mm_cvtsi128_si32(v10)
      && (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)) == (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) )
    {
      v12 = _mm_srli_si128(v10, 8);
      v13 = _mm_srli_si128(v7, 8);
      if ( v13.m128i_i8[1] == v12.m128i_i8[1]
        && v13.m128i_i32[1] == v12.m128i_i32[1]
        && _mm_cvtsi128_si32(v8) == _mm_cvtsi128_si32(v11)
        && v8.m128i_i32[1] == v11.m128i_i32[1]
        && _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) == _mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) )
      {
        *a6 = 1;
        *a5 = i;
        return 0LL;
      }
    }
  }
  return 0LL;
}
