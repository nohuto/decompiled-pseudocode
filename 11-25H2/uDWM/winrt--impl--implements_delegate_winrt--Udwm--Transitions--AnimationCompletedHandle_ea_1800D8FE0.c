/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::QueryInterface @ 0x1800D8FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800D9210 (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::QueryInterface(
        int a1,
        int a2,
        int a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           (__int64)&winrt::impl::guid_v<winrt::Udwm::Transitions::AnimationCompletedHandler>);
}
