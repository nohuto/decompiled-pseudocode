/*
 * XREFs of ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x180096E24
 * Callers:
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x18008C784 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
 *     CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_4ba5dd8d9c462c04f6ab12b46ce7a702___ @ 0x1800BD90C (CProjectionBorderManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_4ba5dd8d9c462c0.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetCaptureState(CCaptureControllerProxy *this, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(unsigned int *)(v2 + 24);
  LOBYTE(v2) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 704LL))(v4, v5, v2);
}
