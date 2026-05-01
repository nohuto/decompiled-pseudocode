/*
 * XREFs of ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@QEAA@XZ @ 0x1805CBCBC
 * Callers:
 *     ?IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x1805D4C10 (-IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOpera.c)
 *     ?TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x1805D8908 (-TryEnableVolumeForPackageInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOperati.c)
 * Callees:
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18032873C (--0-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation_ea_18032873C.c)
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type::promise_type(
        __int64 a1)
{
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>(a1);
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)a1 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *>::promise_type::`vftable';
  return a1;
}
