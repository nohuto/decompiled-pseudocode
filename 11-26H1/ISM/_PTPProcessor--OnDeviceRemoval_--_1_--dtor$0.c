/*
 * XREFs of _PTPProcessor::OnDeviceRemoval_::_1_::dtor$0 @ 0x1801DA003
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::OnDeviceRemoval_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
