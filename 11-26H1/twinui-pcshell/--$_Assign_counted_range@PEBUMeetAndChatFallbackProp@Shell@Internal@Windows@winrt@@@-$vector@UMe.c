/*
 * XREFs of ??$_Assign_counted_range@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@_K@Z @ 0x180498EB0
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@2@@Z @ 0x18049D06C (-ReplaceAll@-$vector_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Compo.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801C53CC (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Uninitialized_copy_n@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU12345@_KPEAU12345@AEAV?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1804990DC (--$_Uninitialized_copy_n@PEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18049D9CC (-_Clear_and_reserve_geometric@-$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Assign_counted_range<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 *v7; // r8
  unsigned __int64 v8; // r14
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *i; // r14

  v3 = *(__int64 **)a1;
  v4 = a3;
  if ( a3 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 )
  {
    std::vector<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>::_Clear_and_reserve_geometric(a1, a3);
    v7 = *(__int64 **)a1;
LABEL_11:
    i = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)std::_Uninitialized_copy_n<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp const *>(
                                                                                              a2,
                                                                                              v4,
                                                                                              v7);
    goto LABEL_7;
  }
  v7 = *(__int64 **)(a1 + 8);
  v8 = v7 - v3;
  if ( v4 > v8 )
  {
    while ( v3 != v7 )
    {
      winrt::Windows::Foundation::IUnknown::operator=(v3, a2);
      v7 = *(__int64 **)(a1 + 8);
      ++v3;
      ++a2;
    }
    v4 -= v8;
    goto LABEL_11;
  }
  for ( i = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3[v4]; v4; --v4 )
    winrt::Windows::Foundation::IUnknown::operator=(v3++, a2++);
  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
    i,
    *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a1 + 8));
LABEL_7:
  *(_QWORD *)(a1 + 8) = i;
}
