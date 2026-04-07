/*
 * XREFs of ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800A8C64
 * Callers:
 *     CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_a047c981d901725fbcc49e7dada48a99___ @ 0x1800BDA3C (CProjectionBorderManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_a047c981d901725.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800C4B10 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4B74 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetDefaultSDRBoost(CCaptureControllerProxy *this, float a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 728LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
