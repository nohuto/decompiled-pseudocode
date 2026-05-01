/*
 * XREFs of ?QueryInterface@?$implements_delegate@UTimerElapsedHandler@Threading@System@Windows@winrt@@V_lambda_731ff91df660fe6a6a02c254355fca9f_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180351840
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031818C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_731ff91df660fe6a6a02c254355fca9f_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           (winrt::impl::implements_delegate_base *)(a1 + 8),
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Windows::System::Threading::TimerElapsedHandler>);
}
