/*
 * XREFs of _UwpWindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor$2 @ 0x1806A7FE7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewEventArgs,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
