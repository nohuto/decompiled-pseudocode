/*
 * XREFs of _lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_ @ 0x1802921E4
 * Callers:
 *     _winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral_::_1_::dtor$5 @ 0x1806B37C1 (_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs--GetDefe_ea_1806B37C1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180292200 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(a1);
  return result;
}
