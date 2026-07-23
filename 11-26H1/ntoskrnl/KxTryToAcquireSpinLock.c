/*
 * XREFs of KxTryToAcquireSpinLock @ 0x140332C98
 * Callers:
 *     EtwpCovSampTryAcquireBufferLock @ 0x14030AB58 (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x140333080 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     PopFxComponentRelationsCleanup @ 0x14046A5D4 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x14046A7E4 (PopFxDeviceRelationsCleanup.c)
 *     KdPollBreakIn @ 0x1404819D0 (KdPollBreakIn.c)
 *     KiRcuReportQuiescentState @ 0x1404D3098 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     EtwpGetCrimsonStackKey @ 0x1404FF248 (EtwpGetCrimsonStackKey.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     HalpHandleMachineCheck @ 0x14057D2CC (HalpHandleMachineCheck.c)
 *     HalpMceHandlerCore @ 0x14057D890 (HalpMceHandlerCore.c)
 *     KiProcessNMI @ 0x1405EE3D0 (KiProcessNMI.c)
 *     DifKeTryToAcquireSpinLockAtDpcLevelWrapper @ 0x140668B20 (DifKeTryToAcquireSpinLockAtDpcLevelWrapper.c)
 * Callees:
 *     KiTryToAcquireSpinLockInstrumented @ 0x1404B45A4 (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return KiTryToAcquireSpinLockInstrumented(a1, 0LL);
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  _mm_pause();
  return v1;
}
