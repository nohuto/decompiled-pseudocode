/*
 * XREFs of ??0?$producers_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@V?$tuple@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@234@@4@@impl@winrt@@QEAA@XZ @ 0x1805E2D68
 * Callers:
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805E2EBC (--0-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation_ea_1805E2EBC.c)
 * Callees:
 *     ??0?$producer_convert@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18029FAF0 (--0-$producer_convert@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Founda_ea_18029FAF0.c)
 *     ??0?$producer_convert@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805E2D08 (--0-$producer_convert@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Founda_ea_1805E2D08.c)
 */

__int64 __fastcall winrt::impl::producers_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,std::tuple<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>>::producers_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,std::tuple<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Foundation::IAsyncInfo>>(
        _QWORD *a1)
{
  __int64 v1; // r8

  winrt::impl::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>(a1);
  winrt::impl::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>();
  return v1;
}
