/*
 * XREFs of ??0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C574C
 * Callers:
 *     ??$make_shared@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802C56D8 (--$make_shared@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?OpenForCurrentUser@PackageCatalog@ApplicationModel@Windows@winrt@@SA@XZ @ 0x1802BFFC0 (-OpenForCurrentUser@PackageCatalog@ApplicationModel@Windows@winrt@@SA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x1805EDA10 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_1805EDA10.c)
 *     ??4?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1805EDED4 (--4-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_1805EDED4.c)
 *     ?PackageUninstalling@?$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUninstallingEventArgs@234@@Foundation@Windows@3@@Z @ 0x1805F15E8 (-PackageUninstalling@-$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@Applica.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::RemoteDesktopProviderPackageUninstallHandler(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *this)
{
  __int64 *v2; // rax
  _DWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = winrt::Windows::ApplicationModel::PackageCatalog::OpenForCurrentUser(&v8);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this, v2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  v3 = operator new(0x18uLL);
  v3[2] = 1;
  *((_QWORD *)v3 + 2) = this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v3 = off_180733830;
  v8 = v3;
  v5 = winrt::impl::consume_Windows_ApplicationModel_IPackageCatalog<winrt::Windows::ApplicationModel::IPackageCatalog>::PackageUninstalling(
         this,
         v7,
         v4,
         &v8);
  __4__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (char *)this + 8,
    v5);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAA_XZ(v7);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  return this;
}
