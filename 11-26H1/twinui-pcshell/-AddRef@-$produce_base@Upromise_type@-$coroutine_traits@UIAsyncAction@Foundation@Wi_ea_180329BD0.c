/*
 * XREFs of ?AddRef@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x180329BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>::AddRef(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(
           (a1 - 24) & -(__int64)(a1 != 0),
           a2,
           a3,
           a4);
}
