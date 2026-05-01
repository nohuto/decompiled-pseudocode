/*
 * XREFs of ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805C078C
 * Callers:
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1801EBC78 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x1805C0698 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800F2370 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C70DC (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?RequestorProcessAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C7128 (-RequestorProcessAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorWindowAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C71B0 (-RequestorWindowAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1802C7214 (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 */

char __fastcall AreEquivalentPinSources(__int64 a1, __int64 *a2)
{
  __int64 *v3; // r10
  __m128i v4; // xmm1
  __int64 *v5; // rax
  __int64 v6; // r10
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  __int64 *v10; // r10
  __int64 *v11; // r10
  __int64 v12; // r10
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  __int64 *v15; // r10
  __m128i v16; // xmm1
  __int64 *v17; // rax
  __int64 *v18; // r10
  _QWORD **v19; // r10
  char v20; // al
  __int64 v21; // r10
  std::_Ref_count_base *v22; // rcx
  char v23; // di
  std::_Ref_count_base *v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-20h] BYREF
  __int128 v26; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(__m128i *)PinRequestContext::RequestorImagePath(*a2, &v25);
  v5 = (__int64 *)PinRequestContext::RequestorImagePath(*v3, &v26);
  if ( std::_Traits_equal<std::char_traits<unsigned short>>(
         *v5,
         v5[1],
         v4.m128i_i64[0],
         _mm_srli_si128(v4, 8).m128i_i64[0]) )
  {
    v7 = *(std::_Ref_count_base **)(v6 + 8);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = (std::_Ref_count_base *)a2[1];
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 1;
  }
  if ( *((_QWORD *)PinRequestContext::RequestorPackageAppId(*(_QWORD **)v6, &v26) + 1)
    || *((_QWORD *)PinRequestContext::RequestorPackageAppId((_QWORD *)*a2, &v26) + 1) )
  {
    v16 = *(__m128i *)PinRequestContext::RequestorPackageAppId((_QWORD *)*a2, &v26);
    v17 = (__int64 *)PinRequestContext::RequestorPackageAppId(*v19, &v25);
  }
  else if ( *((_QWORD *)PinRequestContext::RequestorWindowAppId(*v10, &v26) + 1)
         || *((_QWORD *)PinRequestContext::RequestorWindowAppId(*a2, &v26) + 1) )
  {
    v16 = *(__m128i *)PinRequestContext::RequestorWindowAppId(*a2, &v26);
    v17 = (__int64 *)PinRequestContext::RequestorWindowAppId(*v18, &v25);
  }
  else
  {
    if ( !*((_QWORD *)PinRequestContext::RequestorProcessAppId(*v11, &v26) + 1)
      && !*((_QWORD *)PinRequestContext::RequestorProcessAppId(*a2, &v26) + 1) )
    {
      v13 = *(std::_Ref_count_base **)(v12 + 8);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      v14 = (std::_Ref_count_base *)a2[1];
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      return 0;
    }
    v16 = *(__m128i *)PinRequestContext::RequestorProcessAppId(*a2, &v26);
    v17 = (__int64 *)PinRequestContext::RequestorProcessAppId(*v15, &v25);
  }
  v20 = std::_Traits_equal<std::char_traits<unsigned short>>(
          *v17,
          v17[1],
          v16.m128i_i64[0],
          _mm_srli_si128(v16, 8).m128i_i64[0]);
  v22 = *(std::_Ref_count_base **)(v21 + 8);
  v23 = v20;
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  v24 = (std::_Ref_count_base *)a2[1];
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  return v23;
}
