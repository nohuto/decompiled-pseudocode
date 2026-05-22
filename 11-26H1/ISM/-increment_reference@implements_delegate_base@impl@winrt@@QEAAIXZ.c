/*
 * XREFs of ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800A6B24
 * Callers:
 *     ?AddRef@?$implements_delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_fa0031d3c6b8052c81d53446b7ba3d8a_@@@impl@winrt@@UEAAIXZ @ 0x1800A61B0 (-AddRef@-$implements_delegate@U-$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@A.c)
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800A6DDC (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_base::increment_reference(
        winrt::impl::implements_delegate_base *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
}
