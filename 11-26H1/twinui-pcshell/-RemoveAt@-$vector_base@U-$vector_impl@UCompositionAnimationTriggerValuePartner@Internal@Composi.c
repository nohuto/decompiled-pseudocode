/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXI@Z @ 0x18049CEA4
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x18049CE70 (-RemoveAt@-$produce@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$vec.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$assign@AEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$removed_value@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAAXAEAUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x1804991AC (--$assign@AEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$removed_value@UMeetAndCha.c)
 *     ??1?$_Optional_destruct_base@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@$0A@@std@@QEAA@XZ @ 0x180499B90 (--1-$_Optional_destruct_base@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Wi.c)
 *     ?erase@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@@2@@Z @ 0x18049DBB4 (-erase@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::RemoveAt(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  const struct winrt::impl::slim_source_location *v4; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+48h] [rbp-20h] BYREF
  char v8; // [rsp+70h] [rbp+8h] BYREF

  v5[8] = 0;
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v2 + 8) - *(_QWORD *)v2) >> 3) )
  {
    v4 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v7);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v4);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v3 = (__int64 *)(*(_QWORD *)v2 + 8LL * a2);
  winrt::impl::removed_value<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,void>::assign<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp &>(
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5,
    v3);
  std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::erase(v2, &v8, v3);
  std::_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>::~_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
}
