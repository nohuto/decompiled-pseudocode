/*
 * XREFs of _TaskViewHost::TaskViewHost_::_1_::dtor$15 @ 0x1806DE040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewHost::TaskViewHost_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 264LL));
}
