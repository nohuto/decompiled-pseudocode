/*
 * XREFs of ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805B9430
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x1800A6C2C (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShell.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x1800A6C98 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@_ea_1800A6C98.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18024323C (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@II@Foundation@Win.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180287DF0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoRestartWidgets@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805B239C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoRestartWidgets@@@details@wil@@QEAAX_N.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::shutdown_services(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        struct IProfferService *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoRestartWidgets>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AutoRestartWidgets>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( *((_QWORD *)this + 12)
    && !(unsigned int)winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 12) )
  {
    winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 12);
  }
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ((__int64 *)this + 18);
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ((__int64 *)this + 20);
  v5 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 17, &v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
}
