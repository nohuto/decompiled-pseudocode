/*
 * XREFs of ?get_ErrorCode@?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAUhresult@3@@Z @ 0x1803326F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ErrorCode@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUhresult@3@XZ @ 0x18032D678 (-ErrorCode@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Wind.c)
 */

__int64 __fastcall winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::get_ErrorCode(
        __int64 a1,
        _DWORD *a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::ErrorCode(
           (RTL_SRWLOCK *)((a1 - 24) & -(__int64)(a1 != 0)),
           &v3);
  return 0LL;
}
