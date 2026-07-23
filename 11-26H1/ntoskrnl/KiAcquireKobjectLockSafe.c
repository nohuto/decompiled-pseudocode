/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140276CD0
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     KeSuspendThread @ 0x140208E28 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x14020908C (KiFreezeSingleThread.c)
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14030D620 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeForceResumeThread @ 0x140310AFC (KeForceResumeThread.c)
 *     KeResumeThread @ 0x140310BD0 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x140310CA4 (KiThawSingleThread.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 *     KiInswapAndReadyThread @ 0x1403115E4 (KiInswapAndReadyThread.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KiInSwapSingleProcess @ 0x140312684 (KiInSwapSingleProcess.c)
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     ExpCheckForWorker @ 0x140346C58 (ExpCheckForWorker.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403B46B8 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     KeRemoveQueueEntry @ 0x1403B4810 (KeRemoveQueueEntry.c)
 *     KiProcessExpiredTimerList @ 0x1403B58FC (KiProcessExpiredTimerList.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KeRundownQueueEx @ 0x1403DF4A8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x1403DFA18 (KeDeleteMutant.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403E28A0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403E2A14 (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1403E3298 (KeTimeOutQueueWaiters.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0 (KiActivateWaiterQueueWithThreadLock.c)
 *     KeInsertQueue @ 0x1403F0500 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F0650 (IopPassiveInterruptDpc.c)
 *     KiDecrementProcessStackCount @ 0x140410010 (KiDecrementProcessStackCount.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     KiInSwapProcesses @ 0x140485E14 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140493F34 (KiOutSwapProcesses.c)
 *     KeRetryOutswapProcess @ 0x1404A401C (KeRetryOutswapProcess.c)
 *     KiRundownMutants @ 0x1404AB48C (KiRundownMutants.c)
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
 *     KeQueryTimerDueTime @ 0x1404C2994 (KeQueryTimerDueTime.c)
 *     KeSetProcess @ 0x1404CA8CC (KeSetProcess.c)
 *     KeQueryOwnerMutant @ 0x1404CB048 (KeQueryOwnerMutant.c)
 *     KeQueryTotalSuspendCountThread @ 0x1404CF3A0 (KeQueryTotalSuspendCountThread.c)
 *     FsRtlpPostStackOverflow @ 0x1405BA9A0 (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405E7F4C (KeRegisterObjectDpc.c)
 *     KeInsertHeadQueue @ 0x1405F3FD0 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405F8DC8 (KiAdjustThreadTimer.c)
 *     KeRundownPriQueue @ 0x1405FC0A8 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x14061A1B0 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
