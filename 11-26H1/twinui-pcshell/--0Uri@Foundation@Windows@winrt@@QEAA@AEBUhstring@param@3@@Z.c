/*
 * XREFs of ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1802B5A0C
 * Callers:
 *     ?HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAJUhstring@7@AEAVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x18032C500 (-HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x18032F980 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--T.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F9810 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805FC660 (-RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA-AUIInspectable@Foundation@Windows@winrt@@PEAUH.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_ResumeCoro$1 @ 0x180632670 (CopilotHotkeyManager--LaunchCustomUriAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806344E8 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180635530 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     ?LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E5DC (-LaunchRemoteSystemSettingsAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Win.c)
 *     ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180667714 (--0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$basic_string@GU-$char_trai.c)
 *     ?Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA?AU0Foundation@56@XZ @ 0x1806678A8 (-Uri@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0Foundation@56@XZ.c)
 * Callees:
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriRuntimeClassFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@Z @ 0x18014283C (--$call@AEAV_lambda_0a61d549bec6c444b35123f4c9509ca7_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 */

winrt::Windows::Foundation::Uri *__fastcall winrt::Windows::Foundation::Uri::Uri(
        winrt::Windows::Foundation::Uri *this,
        const struct winrt::param::hstring *a2)
{
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = (__int64 *)a2;
  v5 = &qword_1808D9FA8;
  _InterlockedIncrement64(&qword_1808D9FA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v4,
      (__int64)this,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>);
    _InterlockedDecrement64(&qword_1808D9FA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808D9FA8);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriRuntimeClassFactory>::call<_lambda_0a61d549bec6c444b35123f4c9509ca7_ &>(
      (__int64 *)this,
      this,
      &v4);
  }
  return this;
}
