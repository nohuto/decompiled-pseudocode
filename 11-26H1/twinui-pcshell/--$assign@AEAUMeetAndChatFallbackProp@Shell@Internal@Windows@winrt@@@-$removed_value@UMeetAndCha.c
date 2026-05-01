/*
 * XREFs of ??$assign@AEAUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@?$removed_value@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAAXAEAUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x1804991AC
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXI@Z @ 0x18049CEA4 (-RemoveAt@-$vector_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composi.c)
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXXZ @ 0x18049CF80 (-RemoveAtEnd@-$vector_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vec.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@@winrt@@QEAAXIAEBUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x18049D20C (-SetAt@-$vector_base@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$ve.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::removed_value<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp,void>::assign<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp &>(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a1,
        __int64 *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a1);
    *((_BYTE *)a1 + 8) = 0;
  }
  result = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = result;
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
