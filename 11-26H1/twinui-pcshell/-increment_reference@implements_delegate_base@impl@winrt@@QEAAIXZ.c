/*
 * XREFs of ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028A1E0
 * Callers:
 *     ?AddRef@?$implements_delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@V_lambda_21b8f538ea640528a040a422d8eba358_@@@impl@winrt@@UEAAIXZ @ 0x18028A1D0 (-AddRef@-$implements_delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider.c)
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031818C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_base::increment_reference(
        winrt::impl::implements_delegate_base *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
}
