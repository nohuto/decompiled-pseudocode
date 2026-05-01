/*
 * XREFs of ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1806681D8
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180668320 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B3C0 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 *     ?Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180670EEC (-Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScre.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BGA@AA @ 0x1802F0A60 (--_9IPropertyValue@Foundation@Windows@@$BGA@AA.c)
 *     ?get@?$weak_ref@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1806559E0 (-get@-$weak_ref@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@.c)
 */

void __fastcall __1__event_revoker_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt___MP8type___abi_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BGA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::get(
           a1,
           &v3);
    if ( *v2 )
       Windows::Foundation::IPropertyValue::`vcall'{96,{flat}}(*v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
