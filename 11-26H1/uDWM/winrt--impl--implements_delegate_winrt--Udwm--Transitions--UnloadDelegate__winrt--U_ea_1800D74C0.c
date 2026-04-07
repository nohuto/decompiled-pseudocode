/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::QueryInterface @ 0x1800D74C0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800D6240 (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  return winrt::impl::implements_delegate_base::query_interface(
           a1 + 8,
           a2,
           a3,
           a1,
           winrt::impl::guid_v<winrt::Udwm::Transitions::UnloadDelegate>);
}
