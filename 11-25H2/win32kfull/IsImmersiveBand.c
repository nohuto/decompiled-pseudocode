/*
 * XREFs of IsImmersiveBand @ 0x140025E6C
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     IsImmersiveBandOrShellManaged @ 0x140025D98 (IsImmersiveBandOrShellManaged.c)
 *     xxxEnableWindow @ 0x140025DCC (xxxEnableWindow.c)
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x140027C00 (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256E34 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x140277714 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7654 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C7B44 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402C8BC0 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveBand(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx
  int v3; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 1;
  v3 = *(_DWORD *)(v1 + 236);
  if ( (unsigned int)(v3 - 1) <= 1 || v3 == 16 )
    return 0;
  return v2;
}
