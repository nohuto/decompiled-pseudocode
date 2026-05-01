/*
 * XREFs of ?QueryInterface@?$implements_delegate@URoutedEventHandler@Xaml@UI@Windows@winrt@@V_lambda_41627dfc51315f72f0b35d11aeb636b7_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180284150
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::UI::Xaml::RoutedEventHandler,_lambda_41627dfc51315f72f0b35d11aeb636b7_>::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::RoutedEventHandler>);
}
