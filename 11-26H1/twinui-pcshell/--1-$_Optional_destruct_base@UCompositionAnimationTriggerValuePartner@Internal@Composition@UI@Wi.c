/*
 * XREFs of ??1?$_Optional_destruct_base@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@$0A@@std@@QEAA@XZ @ 0x180499B90
 * Callers:
 *     ??1?$removed_value@UUri@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180499CB0 (--1-$removed_value@UUri@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ.c)
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXI@Z @ 0x18049CEA4 (-RemoveAt@-$vector_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composi.c)
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXXZ @ 0x18049CF80 (-RemoveAtEnd@-$vector_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vec.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@@winrt@@QEAAXIAEBUMeetAndChatFallbackProp@Shell@Internal@Windows@2@@Z @ 0x18049D20C (-SetAt@-$vector_base@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-$ve.c)
 *     ?Insert@?$map_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@URemoteSystem@Shell@Internal@Windows@3@@winrt@@QEAA_NAEBUhstring@2@AEBURemoteSystem@Shell@Internal@Windows@2@@Z @ 0x18064DDE8 (-Insert@-$map_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V-$map@Uhs.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>::~_Optional_destruct_base<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,0>(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a1)
{
  if ( *((_BYTE *)a1 + 8) )
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a1);
}
