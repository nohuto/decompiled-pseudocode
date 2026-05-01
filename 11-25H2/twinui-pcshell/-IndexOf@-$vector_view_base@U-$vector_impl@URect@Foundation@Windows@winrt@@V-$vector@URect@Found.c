/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA_NAEBURect@Foundation@Windows@2@AEAI@Z @ 0x18046C4EC
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAIPEA_N@Z @ 0x18046C470 (-IndexOf@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Win.c)
 *     ?IndexOf@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAIPEA_N@Z @ 0x18046C4B0 (-IndexOf@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@F_ea_18046C4B0.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x180228738 (--8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        float *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  float *v4; // r10
  _DWORD *v5; // r11
  __int64 v6; // r9
  float *v7; // rdx
  __int64 v8; // rax
  float *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  v3 = a1 + 8;
  v4 = a2;
  if ( !a1 )
    v3 = 48LL;
  v5 = a3;
  v6 = a1;
  v7 = *(float **)v3;
  v8 = a1 + 16;
  if ( !a1 )
    v8 = 56LL;
  v9 = *(float **)v8;
  while ( v7 != v9 && !winrt::Windows::Foundation::operator==(v4, v7) )
    v7 += 4;
  v10 = v6 + 8;
  v11 = v6 + 16;
  if ( !v6 )
    v10 = 48LL;
  v12 = (__int64)v7 - *(_QWORD *)v10;
  v13 = v6 + 8;
  v14 = v12 >> 4;
  *v5 = v14;
  if ( !v6 )
  {
    v13 = 48LL;
    v11 = 56LL;
  }
  return (unsigned int)v14 < (unsigned int)((__int64)(*(_QWORD *)v11 - *(_QWORD *)v13) >> 4);
}
