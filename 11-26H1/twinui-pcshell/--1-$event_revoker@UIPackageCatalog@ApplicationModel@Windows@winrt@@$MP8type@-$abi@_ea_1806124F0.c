/*
 * XREFs of ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x1806124F0
 * Callers:
 *     ??0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802BC338 (--0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180612764 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??4?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180612A4C (--4-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_180612A4C.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180616270 (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ??1RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063EF6C (--1RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::RemoteDesktopProviderPackageUninstallHandler_::_1_::dtor$1 @ 0x1806E02CD (_winrt--Windows--Internal--Shell--implementation--RemoteDesktopProviderPackageUnins_ea_1806E02CD.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$4 @ 0x18070102A (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_18070102A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180292C80 (-get@-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x180292CD0 (-revoke_impl@-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIP.c)
 */

void __fastcall __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rax
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(
                                                                                               a1,
                                                                                               &v4);
    _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
      (__int64)a1,
      v2,
      v3);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
