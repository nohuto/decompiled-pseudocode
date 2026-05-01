/*
 * XREFs of ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18031B900
 * Callers:
 *     ?AddRef@?$implements_delegate@UPointerEventHandler@Input@Xaml@UI@Windows@winrt@@V_lambda_ab41be452aee620a78330148d586d4d3_@@@impl@winrt@@UEAAIXZ @ 0x18022D300 (-AddRef@-$implements_delegate@UPointerEventHandler@Input@Xaml@UI@Windows@winrt@@V_lambda_ab41be4.c)
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_base::increment_reference(
        winrt::impl::implements_delegate_base *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
}
