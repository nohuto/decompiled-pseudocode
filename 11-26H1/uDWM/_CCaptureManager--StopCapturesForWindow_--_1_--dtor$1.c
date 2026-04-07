/*
 * XREFs of _CCaptureManager::StopCapturesForWindow_::_1_::dtor$1 @ 0x1800E8076
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCaptureManager::StopCapturesForWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<DWM_CAPTURE_TOKEN>::~vector<DWM_CAPTURE_TOKEN>(a2 + 32);
}
