/*
 * XREFs of _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$9 @ 0x180167A8F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
