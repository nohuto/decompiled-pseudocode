/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName @ 0x18034DEA4
 * Callers:
 *     winrt::impl::produce_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncInfo_void_::GetRuntimeClassName @ 0x18034A520 (winrt--impl--produce_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18034A520.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$runtime_class_name@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180331A50 (-get@-$runtime_class_name@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhstring@3@X.c)
 */

__int64 __fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_ca9df4dcfe6d5cd8540c8434d0f06187__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName(
        struct winrt::impl::shared_hstring_header *a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  struct winrt::impl::shared_hstring_header *v3; // rax
  struct winrt::impl::shared_hstring_header *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncAction,void>::get(&v5);
  v3 = v5;
  v5 = 0LL;
  *a2 = v3;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v5);
  return 0LL;
}
