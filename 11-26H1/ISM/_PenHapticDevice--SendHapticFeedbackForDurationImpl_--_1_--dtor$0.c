/*
 * XREFs of _PenHapticDevice::SendHapticFeedbackForDurationImpl_::_1_::dtor$0 @ 0x1801DC2EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenHapticDevice::SendHapticFeedbackForDurationImpl_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
