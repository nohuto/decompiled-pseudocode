/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_ee761b073d5526e40795a858cafe2e0e_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180636230
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_ee761b073d5526e40795a858cafe2e0e_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           &winrt::impl::guid_v<winrt::Windows::Foundation::EventHandler<unsigned int>>);
}
