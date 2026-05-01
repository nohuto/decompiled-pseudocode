/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___::QueryInterface @ 0x1805D5740
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031818C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>>);
}
