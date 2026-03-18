/*
 * XREFs of KxTryToAcquireSpinLock @ 0x140330C68
 * Callers:
 *     EtwpCovSampTryAcquireBufferLock @ 0x1402BFE94 (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpTraceStackKey @ 0x14032C740 (EtwpTraceStackKey.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x140331050 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KiSrcuReportQuiescent @ 0x1404628BC (KiSrcuReportQuiescent.c)
 *     PopFxComponentRelationsCleanup @ 0x140470E54 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x140471064 (PopFxDeviceRelationsCleanup.c)
 *     KdPollBreakIn @ 0x140487E90 (KdPollBreakIn.c)
 *     KiRcuReportQuiescentState @ 0x1404D99B8 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x140503B7C (KiRcuFlushCompleted.c)
 *     EtwpGetCrimsonStackKey @ 0x140505998 (EtwpGetCrimsonStackKey.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     KiSrcuFlushCompleted @ 0x14052EB44 (KiSrcuFlushCompleted.c)
 *     HalpHandleMachineCheck @ 0x14057AD9C (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x14057B360 (HalpMceHandlerCore.c)
 *     KiProcessNMI @ 0x1405EBA60 (KiProcessNMI.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x140664F40 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x1404BAD14 (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
    return KiTryToAcquireSpinLockInstrumented(a1, 0LL);
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  _mm_pause();
  return v1;
}
