/*
 * XREFs of ?QueryInterface@?$implements_delegate@UTimerElapsedHandler@Threading@System@Windows@winrt@@V_lambda_3804bfd109d91ea783e715dd384c2590_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180245010
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x18031BB8C (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_3804bfd109d91ea783e715dd384c2590_>::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Windows::System::Threading::TimerElapsedHandler>);
}
