/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830
 * Callers:
 *     IopRecordIoAttribution @ 0x140207994 (IopRecordIoAttribution.c)
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
 *     ExpRemovePoolTrackerExpansion @ 0x1403450B0 (ExpRemovePoolTrackerExpansion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035927C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x140359460 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToScatterPool @ 0x1403596B4 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140359C70 (KeRemoveDeviceQueue.c)
 *     HalAllocateAdapterChannelV2 @ 0x140359DA0 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035A080 (HalBuildScatterGatherListV2.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
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
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403E211C (CcFindPrivateVolumeCacheMap.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1403EB2A0 (IopVerifyDeviceObjectOnStack.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 *     ExpIsResourceAcquiredSharedLite @ 0x14043CD80 (ExpIsResourceAcquiredSharedLite.c)
 *     IopInterlockedDecrementUlong @ 0x14044ABE0 (IopInterlockedDecrementUlong.c)
 *     IoAcquireCancelSpinLock @ 0x14044F400 (IoAcquireCancelSpinLock.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1404685E0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140469EB0 (IopDereferenceVpbAndFree.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140479710 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeInsertDeviceQueue @ 0x140479780 (KeInsertDeviceQueue.c)
 *     CcSetLogHandleForFileEx @ 0x14047C5E0 (CcSetLogHandleForFileEx.c)
 *     HsaIommuSendCommand @ 0x14047E698 (HsaIommuSendCommand.c)
 *     ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x1404856CC (-KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE.c)
 *     CcIsThereDirtyLoggedPages @ 0x140486480 (CcIsThereDirtyLoggedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1402B4950 (KxWaitForLockOwnerShipWithIrql.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
