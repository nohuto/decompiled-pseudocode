/*
 * XREFs of _CMultitaskingViewServiceProvider::s_CreateMTVManager_::_1_::dtor$23 @ 0x1806DC0EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewServiceProvider::s_CreateMTVManager_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 392));
}
