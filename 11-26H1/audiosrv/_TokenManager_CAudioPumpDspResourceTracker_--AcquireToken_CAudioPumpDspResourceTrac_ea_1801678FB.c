/*
 * XREFs of _TokenManager_CAudioPumpDspResourceTracker_::AcquireToken_CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext__::_1_::dtor$4 @ 0x1801678FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TokenManager_CAudioPumpDspResourceTracker_::AcquireToken_CAudioPumpDspResourceTracker::AudioPumpDspTokenAcquisitionContext__::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)(a2 + 144));
}
