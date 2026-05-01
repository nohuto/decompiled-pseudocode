/*
 * XREFs of _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$1 @ 0x1806E9AF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::_RaiseViewAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewHostItemEventArgs,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
