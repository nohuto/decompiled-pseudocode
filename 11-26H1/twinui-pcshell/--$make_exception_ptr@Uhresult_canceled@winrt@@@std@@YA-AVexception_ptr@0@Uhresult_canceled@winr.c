/*
 * XREFs of ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x18032690C
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180329E3C (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel @ 0x180345AEC (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180345AEC.c)
 * Callees:
 *     ??1hresult_error@winrt@@QEAA@XZ @ 0x1802D4E34 (--1hresult_error@winrt@@QEAA@XZ.c)
 *     ?_Copy_exception@exception_ptr@std@@SA?AV12@PEAXPEBX@Z @ 0x18033055C (-_Copy_exception@exception_ptr@std@@SA-AV12@PEAXPEBX@Z.c)
 */

__int64 __fastcall std::make_exception_ptr<winrt::hresult_canceled>(__int64 a1, OLECHAR **a2)
{
  std::exception_ptr::_Copy_exception();
  winrt::hresult_error::~hresult_error(a2);
  return a1;
}
