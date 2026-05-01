/*
 * XREFs of ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x180333518
 * Callers:
 *     ?Release@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAKXZ @ 0x18032D798 (-Release@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foun_ea_18032D798.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1803309B4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1803309B4.c)
 *     ?Release@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAKXZ @ 0x1805C2328 (-Release@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@F_ea_1805C2328.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@V?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x1803334F0 (-subtract_final_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Found.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>::subtract_reference(
        __int64 a1)
{
  __int64 result; // rax

  result = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,GamingOverlayExperienceManager *,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::subtract_final_reference(a1);
  if ( !(_DWORD)result )
    *(_QWORD *)(a1 + 8) = 1LL;
  return result;
}
