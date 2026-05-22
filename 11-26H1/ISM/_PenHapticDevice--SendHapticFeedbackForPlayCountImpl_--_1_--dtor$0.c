/*
 * XREFs of _PenHapticDevice::SendHapticFeedbackForPlayCountImpl_::_1_::dtor$0 @ 0x1801DC2FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenHapticDevice::SendHapticFeedbackForPlayCountImpl_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
