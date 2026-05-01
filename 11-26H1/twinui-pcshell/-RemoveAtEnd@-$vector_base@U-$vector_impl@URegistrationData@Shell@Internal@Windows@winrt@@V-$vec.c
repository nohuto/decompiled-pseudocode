/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXXZ @ 0x18049CF80
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18049CF50 (-RemoveAtEnd@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$assign@AEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$removed_value@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAAXAEAUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x1804991AC (--$assign@AEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$removed_value@UMeetAndCha.c)
 *     ??1?$_Optional_destruct_base@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@$0A@@std@@QEAA@XZ @ 0x180499B90 (--1-$_Optional_destruct_base@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::RegistrationData>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  const struct winrt::impl::slim_source_location *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v6[32]; // [rsp+48h] [rbp-20h] BYREF

  v4[8] = 0;
  v1 = (__int64)(a1 + 2);
  if ( !a1 )
    v1 = 48LL;
  if ( *(_QWORD *)v1 == *(_QWORD *)(v1 + 8) )
  {
    v3 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v6);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v3);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v2 = (__int64)(a1 + 4);
  if ( !a1 )
    v2 = 56LL;
  winrt::impl::removed_value<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,void>::assign<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp &>(
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v4,
    (__int64 *)(*(_QWORD *)v2 - 8LL));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(*(_QWORD *)v2 - 8LL));
  *(_QWORD *)v2 -= 8LL;
  std::_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>::~_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v4);
}
