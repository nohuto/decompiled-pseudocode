/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBA_NAEBUhstring@2@AEAI@Z @ 0x18061B2A4
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x18061B210 (-IndexOf@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstrin.c)
 *     ?IndexOf@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVectorView@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x18061B260 (-IndexOf@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allo_ea_18061B260.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18002E674 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int128 v8; // xmm0
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rbx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v13, a2, a1);
  v6 = v5 + 8;
  v7 = v5 + 16;
  v8 = *(_OWORD *)v4;
  if ( !v5 )
  {
    v6 = 48LL;
    v7 = 56LL;
  }
  v9 = *(__int64 **)v6;
  v10 = *(__int64 **)v7;
  while ( v9 != v10 && !(unsigned __int8)winrt::operator==((__int64 *)v8, v9) )
    ++v9;
  v11 = ((__int64)v9 - *(_QWORD *)v6) >> 3;
  *a3 = v11;
  return (unsigned int)v11 < (unsigned int)((__int64)(*(_QWORD *)v7 - *(_QWORD *)v6) >> 3);
}
