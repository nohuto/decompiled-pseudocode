/*
 * XREFs of _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$5 @ 0x1806CE614
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 216));
}
