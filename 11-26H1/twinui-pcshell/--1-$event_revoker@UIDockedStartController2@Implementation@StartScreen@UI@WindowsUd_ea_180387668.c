/*
 * XREFs of ??1?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAA@XZ @ 0x180387668
 * Callers:
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1803876F0 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18038792C (--4-$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUd_ea_18038792C.c)
 *     ?SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z @ 0x18038AFF0 (-SetDockedStartController@CStartExperienceManager@@UEAAJPEAUIInspectable@@@Z.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$19 @ 0x1806E6E13 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$19.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9IDCompThumbnail@@$BIA@AA @ 0x1803644B0 (--_9IDCompThumbnail@@$BIA@AA.c)
 *     ?get@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18038B500 (-get@-$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@.c)
 */

void __fastcall __1__event_revoker_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UIDockedStartController2_Implementation_StartScreen_UI_WindowsUdk_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (__int64 *)winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>::get(
                      a1,
                      &v3);
    if ( *v2 )
       IDCompThumbnail::`vcall'{128,{flat}}(*v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
