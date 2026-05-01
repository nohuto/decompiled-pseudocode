/*
 * XREFs of ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805E4840
 * Callers:
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1800E3304 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x1805E4748 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C05B0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?RequestorProcessAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C07E8 (-RequestorProcessAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorWindowAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C0A40 (-RequestorWindowAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C0B0C (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 */

char __fastcall AreEquivalentPinSources(__int64 *a1, __int64 *a2)
{
  __m128i v4; // xmm1
  _OWORD *v5; // rax
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  __m128i v11; // xmm1
  _OWORD *v12; // rax
  bool v13; // al
  std::_Ref_count_base *v14; // rcx
  bool v15; // si
  std::_Ref_count_base *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(__m128i *)PinRequestContext::RequestorImagePath(*a2, &v17);
  v5 = PinRequestContext::RequestorImagePath(*a1, &v18);
  if ( std::_Traits_equal<std::char_traits<unsigned short>>(
         *(const wchar_t **)v5,
         *((_QWORD *)v5 + 1),
         (const wchar_t *)v4.m128i_i64[0],
         _mm_srli_si128(v4, 8).m128i_i64[0]) )
  {
    v6 = (std::_Ref_count_base *)a1[1];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    v7 = (std::_Ref_count_base *)a2[1];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    return 1;
  }
  if ( *((_QWORD *)PinRequestContext::RequestorPackageAppId((__int64 *)*a1, &v18) + 1)
    || *((_QWORD *)PinRequestContext::RequestorPackageAppId((__int64 *)*a2, &v18) + 1) )
  {
    v11 = *(__m128i *)PinRequestContext::RequestorPackageAppId((__int64 *)*a2, &v18);
    v12 = PinRequestContext::RequestorPackageAppId((__int64 *)*a1, &v17);
  }
  else if ( *((_QWORD *)PinRequestContext::RequestorWindowAppId(*a1, &v18) + 1)
         || *((_QWORD *)PinRequestContext::RequestorWindowAppId(*a2, &v18) + 1) )
  {
    v11 = *(__m128i *)PinRequestContext::RequestorWindowAppId(*a2, &v18);
    v12 = PinRequestContext::RequestorWindowAppId(*a1, &v17);
  }
  else
  {
    if ( !*((_QWORD *)PinRequestContext::RequestorProcessAppId(*a1, &v18) + 1)
      && !*((_QWORD *)PinRequestContext::RequestorProcessAppId(*a2, &v18) + 1) )
    {
      v9 = (std::_Ref_count_base *)a1[1];
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      v10 = (std::_Ref_count_base *)a2[1];
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      return 0;
    }
    v11 = *(__m128i *)PinRequestContext::RequestorProcessAppId(*a2, &v18);
    v12 = PinRequestContext::RequestorProcessAppId(*a1, &v17);
  }
  v13 = std::_Traits_equal<std::char_traits<unsigned short>>(
          *(const wchar_t **)v12,
          *((_QWORD *)v12 + 1),
          (const wchar_t *)v11.m128i_i64[0],
          _mm_srli_si128(v11, 8).m128i_i64[0]);
  v14 = (std::_Ref_count_base *)a1[1];
  v15 = v13;
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  v16 = (std::_Ref_count_base *)a2[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  return v15;
}
