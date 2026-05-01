/*
 * XREFs of _LegacyUwpWindowWrapper::LegacyUwpWindowWrapper_::_1_::dtor$1 @ 0x1806C3349
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LegacyUwpWindowWrapper::LegacyUwpWindowWrapper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 128) + 624LL));
}
