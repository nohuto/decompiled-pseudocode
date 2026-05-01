/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA_NAEBURect@Foundation@Windows@2@AEAI@Z @ 0x18047A29C
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAIPEA_N@Z @ 0x18047A220 (-IndexOf@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Win.c)
 *     ?IndexOf@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAIPEA_N@Z @ 0x18047A260 (-IndexOf@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@F_ea_18047A260.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x1802195CC (--8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int128 v8; // xmm0
  float *v9; // r11
  float *v10; // rdx
  __int64 v11; // rdx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v13, a2, a1);
  v6 = v5 + 8;
  v7 = v5 + 16;
  if ( !v5 )
    v6 = 48LL;
  v8 = *(_OWORD *)v4;
  v9 = *(float **)v6;
  if ( !v5 )
    v7 = 56LL;
  v10 = *(float **)v6;
  if ( v9 != *(float **)v7 )
  {
    do
    {
      if ( winrt::Windows::Foundation::operator==((float *)v8, v10) )
        break;
      v10 += 4;
    }
    while ( v10 != *(float **)v7 );
  }
  v11 = ((char *)v10 - (char *)v9) >> 4;
  *a3 = v11;
  return (unsigned int)v11 < (unsigned int)((__int64)(*(_QWORD *)v7 - *(_QWORD *)v6) >> 4);
}
