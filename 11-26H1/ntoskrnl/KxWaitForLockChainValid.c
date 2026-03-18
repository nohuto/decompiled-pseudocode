/*
 * XREFs of KxWaitForLockChainValid @ 0x1402BA360
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021AB70 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022B26C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiJoinCooperativeIdleSearch @ 0x140240260 (KiJoinCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402695A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     KiRemoveBoostThread @ 0x1402742E0 (KiRemoveBoostThread.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ?KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x1402BA3C0 (-KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z.c)
 *     KiReleaseThreadStateLock @ 0x1402BA4C0 (KiReleaseThreadStateLock.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402BE9E0 (KiAddThreadToPrcbQueue.c)
 *     CcGetVirtualAddress @ 0x1402E0F50 (CcGetVirtualAddress.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403322B0 (KiAcquireThreadStateLockForWrite.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     KiScanSharedReadyThreads @ 0x1403BF4BC (KiScanSharedReadyThreads.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1403EB1E0 (IoReleaseCancelSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1403EB2A0 (IopVerifyDeviceObjectOnStack.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiLeaveCooperativeIdleSearch @ 0x140457AB0 (KiLeaveCooperativeIdleSearch.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404D35B4 (KiAdjustUserIsolationDomainThread.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404ED5A4 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x140516424 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 *     KeTryToFreezeThreadStack @ 0x1405EC060 (KeTryToFreezeThreadStack.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = 0;
  do
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
