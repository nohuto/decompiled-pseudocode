/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@Ucollection_version@23@@winrt@@QEBA_NAEBUMenuItem@UI@WindowsUdk@2@AEAI@Z @ 0x18049BEC4
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x18049BE30 (-IndexOf@-$produce@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@.c)
 *     ?IndexOf@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x18049BE80 (-IndexOf@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vect.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int128 v8; // xmm0
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
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
  v9 = *(_QWORD **)v6;
  v10 = *(_QWORD **)v7;
  while ( v9 != v10
       && !winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v8, v9) )
    ++v9;
  v11 = ((__int64)v9 - *(_QWORD *)v6) >> 3;
  *a3 = v11;
  return (unsigned int)v11 < (unsigned int)((__int64)(*(_QWORD *)v7 - *(_QWORD *)v6) >> 3);
}
