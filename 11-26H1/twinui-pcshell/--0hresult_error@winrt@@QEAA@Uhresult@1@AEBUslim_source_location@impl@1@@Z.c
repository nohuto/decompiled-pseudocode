/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1803179C8
 * Callers:
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_illegal_delegate_assignment@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180328B6C (--0hresult_illegal_delegate_assignment@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180328B94 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180329E3C (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@.c)
 *     ??0hresult_not_implemented@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180335304 (--0hresult_not_implemented@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_changed_state@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803380D8 (--0hresult_changed_state@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180338100 (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel @ 0x180345AEC (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180345AEC.c)
 *     ??0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180450014 (--0hresult_no_interface@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B575C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 *     ??0hresult_illegal_state_change@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1806BFE30 (--0hresult_illegal_state_change@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_invalid_argument@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1806BFE58 (--0hresult_invalid_argument@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z @ 0x1802D793C (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, int a2, unsigned int *a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  winrt::hresult_error::originate(a1, a2, 0LL, a3);
  return a1;
}
