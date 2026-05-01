/*
 * XREFs of ?find_interface@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180654360
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@impl@winrt@@@?$interface_list@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@@12@@Z @ 0x1806466F4 (--$find@U-$find_iid_traits@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRa_ea_1806466F4.c)
 */

__int64 __fastcall winrt::implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,winrt::Windows::Foundation::IAsyncInfo>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,winrt::Windows::Foundation::IAsyncInfo>::find<winrt::impl::find_iid_traits<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type>>(v3);
}
