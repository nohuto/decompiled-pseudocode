/*
 * XREFs of LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_InitCoro$2 @ 0x1805B0AD4
 * Callers:
 *     ?IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@Z @ 0x1805B0DA0 (-IsPackageVolumeSupportedForInstallAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU-$IAsyncOpera.c)
 * Callees:
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@QEAA@XZ @ 0x18032B810 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPos.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUIAsyncAction@Foundation@Windows@3@XZ @ 0x18033283C (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Wind.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1 @ 0x1805B0B80 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx

  *(_QWORD *)(a2 + 113) = a5;
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 121) = v7;
  *(_QWORD *)a2 = LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v8 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type::promise_type(v8);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::get_return_object(
    v8,
    a3);
  *(_BYTE *)(a2 + 112) = 0;
  return LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync__ResumeCoro_1(a2);
}
