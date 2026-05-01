/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::ErrorCode @ 0x1803466E4
 * Callers:
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncInfo_::get_ErrorCode @ 0x180359800 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation_ea_180359800.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::rethrow_if_failed @ 0x18035A0F8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18035A0F8.c)
 */

_DWORD *__fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::ErrorCode(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v4; // rbx

  v4 = (RTL_SRWLOCK *)(a1 + 72);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::rethrow_if_failed(
    a1,
    *(unsigned int *)(a1 + 96));
  *a2 = 0;
  ReleaseSRWLockExclusive_0(v4);
  return a2;
}
