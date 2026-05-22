/*
 * XREFs of _DockableDeviceCollection::Create_::_1_::dtor$3 @ 0x1801D9B98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockableDeviceCollection::Create_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 32) + 2760LL));
}
