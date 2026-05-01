/*
 * XREFs of _TaskViewHost::RuntimeClassInitialize_::_1_::dtor$7 @ 0x1806DE1DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewHost::RuntimeClassInitialize_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 320));
}
