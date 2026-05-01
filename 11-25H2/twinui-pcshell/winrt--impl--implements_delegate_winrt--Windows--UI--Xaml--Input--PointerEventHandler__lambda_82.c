/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_828944ce103634e2e050a423f7a4c10d___::QueryInterface @ 0x180270340
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_828944ce103634e2e050a423f7a4c10d___::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::Input::PointerEventHandler>);
}
