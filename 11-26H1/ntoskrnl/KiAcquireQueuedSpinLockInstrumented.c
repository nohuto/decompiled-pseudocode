/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500
 * Callers:
 *     IopRecordIoAttribution @ 0x140207A74 (IopRecordIoAttribution.c)
 *     MiWalkLevelCompleted @ 0x140249800 (MiWalkLevelCompleted.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140268B10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299010 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402F84A0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402F9EB0 (IopVerifyDeviceObjectOnStack.c)
 *     IopDecrementVpbRefCount @ 0x1402FB760 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402FF4B0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 *     MiWalkPageTablesPrepareToDescend @ 0x140327B50 (MiWalkPageTablesPrepareToDescend.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140347130 (ExpRemovePoolTrackerExpansion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035B01C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x14035B200 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x14035B454 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x14035BA10 (KeRemoveDeviceQueue.c)
 *     HalAllocateAdapterChannelV2 @ 0x14035BB40 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035BE20 (HalBuildScatterGatherListV2.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PfpPartitionGetNext @ 0x140384620 (PfpPartitionGetNext.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140384FA0 (CcPostWorkQueueCachemapUninit.c)
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140385C00 (CcCanIWriteStreamEx.c)
 *     CcCachemapUninitWorkerThread @ 0x140386E50 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x14039B640 (CcFlushCachePostProcess.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcGetDirtyPagesHelper @ 0x14039D5E0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     PoQueryWatchdogTime @ 0x1403B3890 (PoQueryWatchdogTime.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403E530C (CcFindPrivateVolumeCacheMap.c)
 *     ExpIsResourceAcquiredSharedLite @ 0x14042F630 (ExpIsResourceAcquiredSharedLite.c)
 *     IopInterlockedDecrementUlong @ 0x140442D10 (IopInterlockedDecrementUlong.c)
 *     IoAcquireCancelSpinLock @ 0x140447530 (IoAcquireCancelSpinLock.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140461C90 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140463630 (IopDereferenceVpbAndFree.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140473070 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeInsertDeviceQueue @ 0x1404730E0 (KeInsertDeviceQueue.c)
 *     CcSetLogHandleForFileEx @ 0x140475F50 (CcSetLogHandleForFileEx.c)
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 *     ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x14047F03C (-KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE.c)
 *     CcIsThereDirtyLoggedPages @ 0x14047FE50 (CcIsThereDirtyLoggedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1402FF620 (KxWaitForLockOwnerShipWithIrql.c)
 */

void __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // edi
  int v5; // r14d
  int v6; // r8d
  char v7; // si
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r9
  _DWORD *EtwSupport; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v5 = 0;
  v6 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = __rdtsc();
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v8 = _InterlockedExchange64(a2, a1);
  if ( v8 )
  {
    v9 = KxWaitForLockOwnerShipWithIrql(a1, v8, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v6 = v9;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v9;
  }
  if ( v7 )
  {
    v10 = __rdtsc();
    EtwSupport = KeGetCurrentPrcb()->EtwSupport;
    v12 = *((unsigned __int8 *)EtwSupport + 272);
    if ( (unsigned __int8)v12 >= 8u )
    {
      ++EtwSupport[69];
    }
    else
    {
      *((_BYTE *)EtwSupport + 272) = v12 + 1;
      v13 = 8LL * v12;
      *(_QWORD *)&EtwSupport[v13 + 4] = v10;
      EtwSupport[v13 + 8] = v10 - v5;
      EtwSupport[v13 + 9] = v6;
      *(_QWORD *)&EtwSupport[v13 + 6] = a2;
      EtwSupport[v13 + 10] = InterruptCount;
      LOBYTE(EtwSupport[v13 + 11]) = 1;
    }
  }
}
