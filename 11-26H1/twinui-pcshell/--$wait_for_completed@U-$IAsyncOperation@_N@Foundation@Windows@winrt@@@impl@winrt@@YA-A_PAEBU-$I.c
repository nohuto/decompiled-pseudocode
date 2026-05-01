/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805CAB38
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x1806597D0 (_lambda_57788f35bdd9b54a58cb4d12640be97c_--operator().c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180668F70 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BAF0 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670CA4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x180233DD0 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     WaitForSingleObject_0 @ 0x1802CA3A3 (WaitForSingleObject_0.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802CA3EB (WINRT_IMPL_CloseHandle.c)
 *     WINRT_IMPL_CreateEventW @ 0x1802CAAB8 (WINRT_IMPL_CreateEventW.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z @ 0x1803177DC (--$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z.c)
 *     ??$make_delegate_with_shared_state@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@Ushared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@_N@234@I@Z@@impl@winrt@@YA?AU?$pair@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@PEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@4@YA?A_PAEBU?$IAsyncOperation@_N@234@I@Z@@std@@$$QEAUshared_type@?1???$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@01@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z@@Z @ 0x1805C6074 (--$make_delegate_with_shared_state@U-$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(__int64 *a1)
{
  HANDLE EventW; // rax
  __int64 v3; // rbx
  HANDLE hObject[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int128 v7; // [rsp+38h] [rbp-18h]

  LODWORD(v6) = 0;
  v7 = 0LL;
  EventW = WINRT_IMPL_CreateEventW(0LL, 1, 0, 0LL);
  hObject[0] = (HANDLE)winrt::check_pointer<void>((__int64)EventW, (winrt *)&v6);
  hObject[1] = 0LL;
  ___make_delegate_with_shared_state_U__AsyncOperationCompletedHandler__N_Foundation_Windows_winrt__Ushared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation__N_234_I_Z__impl_winrt__YA_AU__pair_U__AsyncOperationCompletedHandler__N_Foundation_Windows_winrt__PEAUshared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___impl_4_YA_A_PAEBU__IAsyncOperation__N_234_I_Z__std____QEAUshared_type__1____wait_for_completed_U__IAsyncOperation__N_Foundation_Windows_winrt___01_YA_A_PAEBU__IAsyncOperation__N_Foundation_Windows_1_I_Z__Z(
    (char *)&v6,
    (__int64 *)hObject);
  if ( hObject[0] )
    WINRT_IMPL_CloseHandle(hObject[0]);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    a1,
    &v6);
  v3 = v7;
  WaitForSingleObject_0(*(HANDLE *)v7, 0xFFFFFFFF);
  LODWORD(v3) = *(_DWORD *)(v3 + 8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return (unsigned int)v3;
}
