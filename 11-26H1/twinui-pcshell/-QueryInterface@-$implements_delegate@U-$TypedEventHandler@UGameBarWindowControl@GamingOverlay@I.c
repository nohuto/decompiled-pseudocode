/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@V_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18035BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031818C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,_lambda_3388fa7f0a5c6f3f4a8233dcf615ab87_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           &winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>);
}
