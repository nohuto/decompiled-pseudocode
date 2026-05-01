/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_9d097171a5ceedc1393197ea9c83028f_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180442510
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>,_lambda_9d097171a5ceedc1393197ea9c83028f_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           &winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>>);
}
