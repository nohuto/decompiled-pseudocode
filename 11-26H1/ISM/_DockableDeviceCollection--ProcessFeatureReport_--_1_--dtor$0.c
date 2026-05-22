/*
 * XREFs of _DockableDeviceCollection::ProcessFeatureReport_::_1_::dtor$0 @ 0x1801D9C6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockableDeviceCollection::ProcessFeatureReport_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
