/*
 * XREFs of __lambda_ca9df4dcfe6d5cd8540c8434d0f06187_$_ResumeCoro$1::operator()_::_1_::catch$4 @ 0x1806E3FDB
 * Callers:
 *     <none>
 * Callees:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception @ 0x18035A1AC (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18035A1AC.c)
 */

__int64 __fastcall _lambda_ca9df4dcfe6d5cd8540c8434d0f06187___ResumeCoro_1::operator()_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  *(_WORD *)(v2 + 8) = -1;
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception((RTL_SRWLOCK *)(v2 - 112));
  return 0LL;
}
