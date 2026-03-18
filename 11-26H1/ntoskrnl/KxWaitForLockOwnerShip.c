/*
 * XREFs of KxWaitForLockOwnerShip @ 0x1402B29C0
 * Callers:
 *     IopRecordIoAttribution @ 0x140207994 (IopRecordIoAttribution.c)
 *     KeQueryTotalCycleTimeThread @ 0x14021AB70 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiJoinCooperativeIdleSearch @ 0x140240260 (KiJoinCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402695A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026FCE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ExpReleaseFastResourceShared @ 0x1402729A0 (ExpReleaseFastResourceShared.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     ExReleaseFastResource @ 0x14027B310 (ExReleaseFastResource.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299AB0 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     MiLockNestedPageTable @ 0x14029EBE0 (MiLockNestedPageTable.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402B47E0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402B8340 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402B9360 (ExpReleaseResourceForThreadLite.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402BE9E0 (KiAddThreadToPrcbQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402C2B40 (ExpWorkerFactoryCheckCreate.c)
 *     CcGetVirtualAddress @ 0x1402E0F50 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402EEB90 (MiLockPageLeafPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x140300610 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x140301220 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiTerminateWsle @ 0x140324930 (MiTerminateWsle.c)
 *     MiWalkPageTablesPrepareToDescend @ 0x140325B20 (MiWalkPageTablesPrepareToDescend.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403322B0 (KiAcquireThreadStateLockForWrite.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1403450B0 (ExpRemovePoolTrackerExpansion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035927C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x140359460 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x1403596B4 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140359C70 (KeRemoveDeviceQueue.c)
 *     HalAllocateAdapterChannelV2 @ 0x140359DA0 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035A080 (HalBuildScatterGatherListV2.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     PfpPartitionIterate @ 0x140382630 (PfpPartitionIterate.c)
 *     PfpPartitionGetNext @ 0x140382870 (PfpPartitionGetNext.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1403831F0 (CcPostWorkQueueCachemapUninit.c)
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140383E50 (CcCanIWriteStreamEx.c)
 *     CcCachemapUninitWorkerThread @ 0x1403850A0 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140385850 (CcAsyncLazywriteWorker.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x1403998E0 (CcFlushCachePostProcess.c)
 *     CcPurgeCacheSection @ 0x14039B300 (CcPurgeCacheSection.c)
 *     CcGetDirtyPagesHelper @ 0x14039B880 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcSetDirtyInMask @ 0x14039D5F0 (CcSetDirtyInMask.c)
 *     CcSetFileSizesEx @ 0x14039E300 (CcSetFileSizesEx.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     PoQueryWatchdogTime @ 0x1403A9C80 (PoQueryWatchdogTime.c)
 *     KiScanSharedReadyThreads @ 0x1403BF4BC (KiScanSharedReadyThreads.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403E211C (CcFindPrivateVolumeCacheMap.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1403EB2A0 (IopVerifyDeviceObjectOnStack.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 *     ?KiAcquireSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x140418740 (-KiAcquireSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z.c)
 *     ExpIsResourceAcquiredSharedLite @ 0x14043CD80 (ExpIsResourceAcquiredSharedLite.c)
 *     IopInterlockedDecrementUlong @ 0x14044ABE0 (IopInterlockedDecrementUlong.c)
 *     IoAcquireCancelSpinLock @ 0x14044F400 (IoAcquireCancelSpinLock.c)
 *     KiLeaveCooperativeIdleSearch @ 0x140457AB0 (KiLeaveCooperativeIdleSearch.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1404685E0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140469EB0 (IopDereferenceVpbAndFree.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140479710 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeInsertDeviceQueue @ 0x140479780 (KeInsertDeviceQueue.c)
 *     CcSetLogHandleForFileEx @ 0x14047C5E0 (CcSetLogHandleForFileEx.c)
 *     HsaIommuSendCommand @ 0x14047E698 (HsaIommuSendCommand.c)
 *     ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x1404856CC (-KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE.c)
 *     CcIsThereDirtyLoggedPages @ 0x140486480 (CcIsThereDirtyLoggedPages.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404D35B4 (KiAdjustUserIsolationDomainThread.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404ED5A4 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x140516424 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 *     KeTryToFreezeThreadStack @ 0x1405EC060 (KeTryToFreezeThreadStack.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KeCanUseHaltOnAddress @ 0x1403E5790 (KeCanUseHaltOnAddress.c)
 *     KiHaltOnAddress @ 0x1403E57E8 (KiHaltOnAddress.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(volatile signed __int64 i, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  volatile signed __int64 *v4; // rbx
  bool v5; // si
  unsigned int v6; // edi
  char v7; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rbp
  signed __int64 v11; // rtt
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(i + 8);
  v4 = (volatile signed __int64 *)(i + 8);
  *(_QWORD *)(i + 8) = v3 | 1;
  v5 = (v3 & 4) != 0;
  v13 = 0LL;
  BYTE1(v13) = v5;
  v6 = 0;
  *(_QWORD *)a2 = i;
  v7 = 0;
  v12 = 0LL;
  do
  {
    if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      goto LABEL_3;
    if ( KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->SchedulerAssist )
    {
      for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
      {
        a2 = KiProcessorBlock[i];
        if ( (*(_BYTE *)(a2 + 35) & 1) != 0 )
        {
          a2 = *(_QWORD *)(a2 + 36600);
          if ( !a2 )
            goto LABEL_15;
          a3 = *(unsigned __int8 *)(a2 + 64);
          if ( !*(_BYTE *)(a2 + 65) || !(_BYTE)a3 )
            goto LABEL_15;
        }
      }
LABEL_3:
      _mm_pause();
      goto LABEL_4;
    }
LABEL_15:
    ++v7;
    LOBYTE(v13) = 0;
    if ( (KiVelocityFlags & 0x10000) != 0 && (unsigned __int8)KeCanUseHaltOnAddress(i, a2, a3) && (v7 & 7) == 0 )
    {
      v9 = *v4;
      LOBYTE(v13) = 1;
      while ( (v9 & 1) != 0 )
      {
        if ( v5 )
          v10 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
        else
          v10 = v9 | 4;
        v11 = v9;
        v9 = _InterlockedCompareExchange64(v4, v10, v9);
        if ( v11 == v9 )
        {
          do
          {
            *((_QWORD *)&v12 + 1) = v10;
            KiHaltOnAddress(v4, (char *)&v12 + 8, 8LL);
            v9 = *v4;
          }
          while ( *v4 == v10 );
        }
      }
    }
    else
    {
      HvlNotifyLongSpinWait(v6);
    }
LABEL_4:
    i = *v4;
  }
  while ( (*v4 & 1) != 0 );
  return v6;
}
