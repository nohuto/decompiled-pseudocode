/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName @ 0x180581C58
 * Callers:
 *     winrt::impl::produce_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncInfo_void_::GetRuntimeClassName @ 0x180581B60 (winrt--impl--produce_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180581B60.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180583424 (-get@-$runtime_class_name@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windo.c)
 */

__int64 __fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_::NonDelegatingGetRuntimeClassName(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,void>::get(&v5);
  v3 = v5;
  v5 = 0LL;
  *a2 = v3;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v5);
  return 0LL;
}
