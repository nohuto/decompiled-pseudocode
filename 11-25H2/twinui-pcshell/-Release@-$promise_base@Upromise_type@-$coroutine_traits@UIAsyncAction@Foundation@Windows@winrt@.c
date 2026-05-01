/*
 * XREFs of ?Release@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAKXZ @ 0x1800EA090
 * Callers:
 *     ?Release@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x18023CFB0 (-Release@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@W_ea_18023CFB0.c)
 *     ?Release@?$produce_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAIXZ @ 0x180446E70 (-Release@-$produce_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@W_ea_180446E70.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAIXZ @ 0x1800EA0D0 (-subtract_reference@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::Release(
        __int64 a1)
{
  unsigned int v2; // ebx

  v2 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::subtract_reference();
  if ( !v2 )
  {
    *(_QWORD *)(a1 + 120) |= 1uLL;
    (*(void (__fastcall **)(__int64))(a1 + 112))(a1 + 112);
  }
  return v2;
}
