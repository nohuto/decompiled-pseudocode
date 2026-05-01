/*
 * XREFs of ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18032873C
 * Callers:
 *     ?CheckConfigurationPrerequisitesAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@XZ @ 0x18032A13C (-CheckConfigurationPrerequisitesAsync@GamingPostureController@implementation@Posture@GamingExper.c)
 *     ?TryLaunchGamingAppAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@UUri@967@@Z @ 0x180330004 (-TryLaunchGamingAppAsync@GamingPostureController@implementation@Posture@GamingExperiences@Intern.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@QEAA@XZ @ 0x1805CBCBC (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScree.c)
 *     ?InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x1805D3E0C (-InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA-AU-$IAsyncOperation@_N@Found.c)
 *     ?LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x180632EEC (-LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA-AU-$IAsyncOperation@_N@Foundation@Windows@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>(
        __int64 a1)
{
  _QWORD *v2; // rcx

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>>::`vftable';
  *(_QWORD *)(a1 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::`vftable';
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  v2 = (_QWORD *)(a1 + 56);
  *v2 = 0LL;
  v2[1] = 0LL;
  __ExceptionPtrCreate(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 100) = 0;
  return a1;
}
