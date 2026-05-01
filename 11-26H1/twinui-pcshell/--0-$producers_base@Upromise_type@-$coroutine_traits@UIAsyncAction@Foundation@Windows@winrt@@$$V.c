/*
 * XREFs of ??0?$producers_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@V?$tuple@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@234@@4@@impl@winrt@@QEAA@XZ @ 0x18028E780
 * Callers:
 *     ??0?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18028E6E8 (--0-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 * Callees:
 *     ??0?$producer_convert@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18019140C (--0-$producer_convert@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$.c)
 *     ??0?$producer_convert@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18028E7B4 (--0-$producer_convert@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Win_ea_18028E7B4.c)
 */

__int64 __fastcall winrt::impl::producers_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,std::tuple<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>>::producers_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,std::tuple<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8

  winrt::impl::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>::producer_convert<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>();
  return v2;
}
