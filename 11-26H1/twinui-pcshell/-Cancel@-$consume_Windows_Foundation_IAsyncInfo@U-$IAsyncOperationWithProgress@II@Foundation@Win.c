/*
 * XREFs of ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180234444
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x180266080 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180330BB0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--WindowsUdk--UI--Sh.c)
 *     wil::details::lambda_call__lambda_f4f2326583ed96e2d7351e893046bf00___::_lambda_call__lambda_f4f2326583ed96e2d7351e893046bf00___ @ 0x180342210 (wil--details--lambda_call__lambda_f4f2326583ed96e2d7351e893046bf00___--_lambda_call__lambda_f4f2.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1 @ 0x180355FA0 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x1803563D0 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x1803567B0 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1 @ 0x180356B50 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1.c)
 *     ?shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProfferService@@@Z @ 0x1805DCF60 (-shutdown_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIProff.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64 *, __int64 *); // rcx
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-20h] BYREF
  __int128 v6; // [rsp+28h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp+10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+18h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v7 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo>, &v7);
    v3 = v7;
    v8 = v7;
  }
  else
  {
    v2 = 0;
    v8 = 0LL;
    v3 = 0LL;
  }
  v5 = 0;
  v6 = 0LL;
  winrt::check_hresult(&v7, v2, &v5);
  v5 = 0;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
  winrt::check_hresult(&v7, v4, &v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
}
