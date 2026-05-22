/*
 * XREFs of _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$1 @ 0x1801D5C8A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputInjectionClientProxy::InjectTouchInput_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
