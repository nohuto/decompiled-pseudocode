/*
 * XREFs of _CVirtualDesktopComponent::SubscribeToServices_::_1_::dtor$17 @ 0x1806B45C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopComponent::SubscribeToServices_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 176));
}
