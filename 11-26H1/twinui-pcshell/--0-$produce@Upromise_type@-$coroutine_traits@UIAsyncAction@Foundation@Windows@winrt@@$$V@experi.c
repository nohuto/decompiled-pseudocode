/*
 * XREFs of ??0?$produce@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801917A4
 * Callers:
 *     ??0?$producer@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18019178C (--0-$producer@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@win_ea_18019178C.c)
 * Callees:
 *     ??0?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18028E8C8 (--0-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV.c)
 */

_QWORD *winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncInfo>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>::produce_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncInfo,void>();
  result = v0;
  *v0 = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  return result;
}
