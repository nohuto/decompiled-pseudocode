/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$1 @ 0x1806C2A86
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 312));
}
