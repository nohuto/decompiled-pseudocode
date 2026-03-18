/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140277760
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     KeSuspendThread @ 0x140208D48 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x140208FAC (KiFreezeSingleThread.c)
 *     KiSuspendThread @ 0x14020909C (KiSuspendThread.c)
 *     KeRemoveQueueEx @ 0x140220B60 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x1402229B0 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140223020 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402C2960 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeForceResumeThread @ 0x1402C5E5C (KeForceResumeThread.c)
 *     KeResumeThread @ 0x1402C5F30 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x1402C6004 (KiThawSingleThread.c)
 *     KiResumeThread @ 0x1402C60D8 (KiResumeThread.c)
 *     KiInswapAndReadyThread @ 0x1402C6944 (KiInswapAndReadyThread.c)
 *     KeUnstackDetachProcess @ 0x1402C7110 (KeUnstackDetachProcess.c)
 *     KiInSwapSingleProcess @ 0x1402C79E4 (KiInSwapSingleProcess.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiTimer2Expiration @ 0x140336A40 (KiTimer2Expiration.c)
 *     ExpCheckForWorker @ 0x140344BD8 (ExpCheckForWorker.c)
 *     KiReadyOutSwappedThreads @ 0x14037B7C4 (KiReadyOutSwappedThreads.c)
 *     KeInsertPriQueue @ 0x1403814C0 (KeInsertPriQueue.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403AA9A8 (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     KeRemoveQueueEntry @ 0x1403AAB00 (KeRemoveQueueEntry.c)
 *     KiProcessExpiredTimerList @ 0x1403ABBEC (KiProcessExpiredTimerList.c)
 *     KiWaitForAllObjects @ 0x1403C0E68 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1403C26D0 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KeRundownQueueEx @ 0x1403DC2B8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x1403DC828 (KeDeleteMutant.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403DF6B0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403DF824 (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1403E00A8 (KeTimeOutQueueWaiters.c)
 *     KeRemovePriQueue @ 0x1403F5D50 (KeRemovePriQueue.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403F65F0 (KiActivateWaiterQueueWithThreadLock.c)
 *     KeInsertQueue @ 0x1403F6B50 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F6CA0 (IopPassiveInterruptDpc.c)
 *     KiDecrementProcessStackCount @ 0x1404108F0 (KiDecrementProcessStackCount.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 *     KeQueryTimerDueTime @ 0x140439548 (KeQueryTimerDueTime.c)
 *     KiInSwapProcesses @ 0x14048C2D4 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14049A3E4 (KiOutSwapProcesses.c)
 *     KeRetryOutswapProcess @ 0x1404AA98C (KeRetryOutswapProcess.c)
 *     KiRundownMutants @ 0x1404B1F80 (KiRundownMutants.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404D0E9C (KeSetProcess.c)
 *     KeQueryOwnerMutant @ 0x1404D1618 (KeQueryOwnerMutant.c)
 *     KeQueryTotalSuspendCountThread @ 0x1404D5BDC (KeQueryTotalSuspendCountThread.c)
 *     FsRtlpPostStackOverflow @ 0x1405B8130 (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405E55DC (KeRegisterObjectDpc.c)
 *     KeInsertHeadQueue @ 0x1405F1610 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405F6408 (KiAdjustThreadTimer.c)
 *     KeRundownPriQueue @ 0x1405F9688 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1406171C0 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
