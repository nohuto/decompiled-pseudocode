/*
 * XREFs of ?QueryInterface@?$implements_delegate@UPointerEventHandler@Input@Xaml@UI@Windows@winrt@@V_lambda_32a94db20d24004169404e6488bbc979_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805C21F0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031818C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::UI::Xaml::Input::PointerEventHandler,_lambda_32a94db20d24004169404e6488bbc979_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::UI::Xaml::Input::PointerEventHandler>);
}
