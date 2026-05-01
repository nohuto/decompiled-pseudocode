/*
 * XREFs of ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180655260
 * Callers:
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180655050 (--$_Destroy_range@V-$allocator@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop.c)
 *     ??1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065556C (--1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180658DB8 (--1RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18065C5A8 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180668320 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18066B3C0 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 *     ?Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180670EEC (-Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScre.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$10 @ 0x180704F2F (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_180704F2F.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$23 @ 0x180704F98 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_180704F98.c)
 *     _winrt::Windows::Internal::Shell::implementation::ProviderActivator::Activate_::_1_::dtor$2 @ 0x1807057A7 (_winrt--Windows--Internal--Shell--implementation--ProviderActivator--Activate_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x180655A4C (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::~event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>(
        __int64 *a1)
{
  __int64 result; // rax

  result = winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke();
  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  return result;
}
