/*
 * XREFs of ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x18009BE24
 * Callers:
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_11_::_lambda_2___ @ 0x18009CA78 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__CCaptureManager--__ea_18009CA78.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost_::_4_::_lambda_1___ @ 0x18009CDC8 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindowedSwapChain__CCaptur_ea_18009CDC8.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6294 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetDefaultSDRBoost(CCaptureControllerProxy *this, float a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 544LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6));
}
