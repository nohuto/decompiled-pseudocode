/*
 * XREFs of _CDesktopPositioner::SubscribeToServices_::_1_::dtor$2 @ 0x1806CAFE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::SubscribeToServices_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 1184));
}
