/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x180326020
 * Callers:
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x1802655E0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1 @ 0x180330140 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--W.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x1803403F0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundatio.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180340680 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windo_ea_180340680.c)
 *     _lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1::operator() @ 0x180343220 (_lambda_ad4fdaeda6be1b81b98d00a1be3a64f1_$_ResumeCoro$1--operator().c)
 *     _lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1::operator() @ 0x180343470 (_lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1--operator().c)
 *     _lambda_6a8bd4d85aaf6b8b5565fde26477aaf5_$_ResumeCoro$1::operator() @ 0x1803437E0 (_lambda_6a8bd4d85aaf6b8b5565fde26477aaf5_$_ResumeCoro$1--operator().c)
 *     _lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1::operator() @ 0x180343A50 (_lambda_6f0ec96f73276b26c622c449cb3cd9b5_$_ResumeCoro$1--operator().c)
 *     _lambda_6f72b8d44943172be67b057af8fb054b_$_ResumeCoro$1::operator() @ 0x180343CB0 (_lambda_6f72b8d44943172be67b057af8fb054b_$_ResumeCoro$1--operator().c)
 *     _lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1::operator() @ 0x1803444E0 (_lambda_a46c03df8e345f39007d0c0666af0d28_$_ResumeCoro$1--operator().c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B2A60 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1805D9DC0 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_ResumeCoro$1.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805F0510 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r9

  v2 = (a2 - 80) & -(__int64)(a2 != 112);
  if ( *(_BYTE *)(v2 + 0x10) )
  {
    *a1 = v2;
    *(_QWORD *)(((a2 - 80) & -(__int64)(a2 != 112)) + 8) = a1;
    *(_QWORD *)v2 = _lambda_535fe0d4889b9fd58d63caa6da13cd83_::_lambda_invoker_cdecl_;
  }
  a1[5] = a2;
  winrt::impl::signal_awaiter::create_threadpool_wait((winrt::impl::signal_awaiter *)a1);
}
