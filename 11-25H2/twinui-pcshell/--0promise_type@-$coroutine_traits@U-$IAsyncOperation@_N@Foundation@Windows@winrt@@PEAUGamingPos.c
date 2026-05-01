/*
 * XREFs of ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@QEAA@XZ @ 0x18032B810
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_InitCoro$2 @ 0x18032CA80 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--C.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_InitCoro$2 @ 0x180330958 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--T.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_InitCoro$2 @ 0x1805AF688 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_InitCoro$2.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_InitCoro$2 @ 0x1805B0AD4 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_InitCoro$2.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_InitCoro$2 @ 0x1805B4AA0 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_InitCoro$2.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x18060DAA8 (CopilotHotkeyManager--LaunchHardwareKeySettings$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type::promise_type(
        __int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>>::`vftable';
  *(_QWORD *)(a1 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::`vftable';
  v2 = (_QWORD *)(a1 + 56);
  *v2 = 0LL;
  v2[1] = 0LL;
  __ExceptionPtrCreate(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 100) = 0;
  *(_QWORD *)a1 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *>::promise_type::`vftable';
  result = a1;
  *(_BYTE *)(a1 + 104) = 0;
  return result;
}
