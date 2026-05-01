/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@2@@Z @ 0x18049D06C
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18049D020 (-ReplaceAll@-$produce@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Compositi.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_counted_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@_K@Z @ 0x180498EB0 (--$_Assign_counted_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@-$vector@UMe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v4; // rsi
  __int64 v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  _InterlockedIncrement(a1);
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( &v6 != (__int128 *)v2 )
  {
    v3 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)v2;
    *(_QWORD *)&v6 = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
    v4 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v2 + 8);
    *((_QWORD *)&v6 + 1) = v4;
    *(_QWORD *)(v2 + 8) = 0LL;
    v5 = *(_QWORD *)(v2 + 16);
    v7 = v5;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Assign_counted_range<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *>(
    v2,
    *(__int64 **)a2,
    *(unsigned int *)(a2 + 8));
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v3, v4);
    std::_Deallocate<16>(v3, (struct std::nothrow_t *)((v5 - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
