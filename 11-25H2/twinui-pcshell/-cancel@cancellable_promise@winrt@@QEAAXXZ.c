/*
 * XREFs of ?cancel@cancellable_promise@winrt@@QEAAXXZ @ 0x1803319D0
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x18032C9AC (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel @ 0x18055D27C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18055D27C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::cancellable_promise::cancel(winrt::cancellable_promise *this)
{
  void (__fastcall *v2)(_QWORD); // rax

  v2 = (void (__fastcall *)(_QWORD))_InterlockedExchange64((volatile __int64 *)this, 1LL);
  if ( (unsigned __int64)v2 >= 2 )
    v2(*((_QWORD *)this + 1));
  *(_QWORD *)this = 0LL;
}
