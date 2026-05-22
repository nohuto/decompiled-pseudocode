/*
 * XREFs of _MouseHapticDevice::MouseHapticDevice_::_1_::dtor$2 @ 0x1801DC3A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseHapticDevice::MouseHapticDevice_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 616LL));
}
