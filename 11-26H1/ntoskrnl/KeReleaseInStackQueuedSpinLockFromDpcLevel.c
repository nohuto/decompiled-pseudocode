/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     MiWalkLevelCompleted @ 0x140249800 (MiWalkLevelCompleted.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026F250 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x1402707CC (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299010 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiUnlockFaultPageTable @ 0x1402CD850 (MiUnlockFaultPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiCaptureDeleteHierarchy @ 0x1402E5900 (MiCaptureDeleteHierarchy.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiWalkPageTablesPrepareToDescend @ 0x140327B50 (MiWalkPageTablesPrepareToDescend.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x14035BA10 (KeRemoveDeviceQueue.c)
 *     HalAllocateAdapterChannelV2 @ 0x14035BB40 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035BE20 (HalBuildScatterGatherListV2.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     MiUnlockPoolCommitWs @ 0x140366EB0 (MiUnlockPoolCommitWs.c)
 *     CcIncrementWriteBehindPriority @ 0x14038B454 (CcIncrementWriteBehindPriority.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     WmipNotificationIrpCancel @ 0x1403FBA80 (WmipNotificationIrpCancel.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x140409614 (CcReferenceSharedCacheMapByVacb.c)
 *     CcDereferenceVacbArray @ 0x140409730 (CcDereferenceVacbArray.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14041E108 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14041EBC4 (ExpConvertFastResourceExclusiveToShared.c)
 *     IvtIommuWaitCommand @ 0x140434918 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140434A6C (IvtIommuSendCommand.c)
 *     IopInterlockedDecrementUlong @ 0x140442D10 (IopInterlockedDecrementUlong.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 *     ?KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448DD0 (-KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z.c)
 *     IopDereferenceVpbAndFree @ 0x140463630 (IopDereferenceVpbAndFree.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140472BD0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140472CD0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeInsertByKeyDeviceQueue @ 0x140472F90 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x1404730E0 (KeInsertDeviceQueue.c)
 *     CcSetLogHandleForFileEx @ 0x140475F50 (CcSetLogHandleForFileEx.c)
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 *     CcIsThereDirtyLoggedPages @ 0x14047FE50 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x140485448 (CcWaitForUninitializeCacheMap.c)
 *     HalpDmaReleaseBufferMappings @ 0x140488F0C (HalpDmaReleaseBufferMappings.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14048E1A0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcSerializeWithLazyWriter @ 0x1404E35B0 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404F3E10 (CcSetLoggedDataThreshold.c)
 *     CcNotifyExternalCachesInternal @ 0x1405007BC (CcNotifyExternalCachesInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x1405034FC (IvtAllocateScalableModePasidTables.c)
 *     IvtAllocateContextTable @ 0x140508E08 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1405A8178 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x1405A8660 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x1405A8940 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A8E04 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDevicePasidTable @ 0x1405A9FD0 (IvtSetDevicePasidTable.c)
 *     HsaAllocatePasidTables @ 0x1405AB238 (HsaAllocatePasidTables.c)
 *     HsaAttachDeviceDomainInternal @ 0x1405AB798 (HsaAttachDeviceDomainInternal.c)
 *     HsaFreePasidTables @ 0x1405AC050 (HsaFreePasidTables.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405AD79C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B3CF4 (CcUpdateTimeOnLogHandles.c)
 *     CcIsThereDirtyDataEx @ 0x1405B43F0 (CcIsThereDirtyDataEx.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper @ 0x140666AF0 (DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D5A14 (ExpReleaseSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406D5A4C (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140BF7F18 (PnprMirrorMarkedPages.c)
 * Callees:
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  unsigned __int64 v7; // r8
  char v8; // bl
  __int64 v9; // rdi
  __int64 v10; // r9
  unsigned __int64 v11; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v14; // eax
  __int64 v15; // rdx
  unsigned __int32 v16; // ett
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v22; // [rsp+20h] [rbp-128h] BYREF
  _QWORD v23[33]; // [rsp+28h] [rbp-120h] BYREF
  __int64 retaddr; // [rsp+148h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)LockHandle, retaddr, v2, v3);
    return;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( !LockHandle->LockQueue.Next )
  {
    if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                              0LL,
                                              (signed __int64)LockHandle) )
      return;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
  }
  LockHandle->LockQueue.Next = 0LL;
  Lock = LockHandle->LockQueue.Lock;
  if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)&Next->Lock, (__int64)Lock)) & 4) != 0 )
  {
    _InterlockedOr(v21, 0);
    v8 = KeDisableInterrupts(Lock, v1, &Next->Lock);
    v9 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v7 >> 5) & 0x7F], 0LL);
    memset_0(v23, 0, 0x100uLL);
    v11 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v11 )
    {
LABEL_7:
      if ( v8 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v14 = *SchedulerAssist;
          do
          {
            v15 = v14;
            LODWORD(v15) = v14 & 0xFFDFFFFF;
            v16 = v14;
            v14 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v14 & 0xFFDFFFFF, v14);
          }
          while ( v16 != v14 );
          if ( (v14 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v15, SchedulerAssist, v10);
        }
        _enable();
      }
      return;
    }
    v22 = 2097153LL;
    memset_0(v23, 0, 0x100uLL);
    while ( 1 )
    {
      v17 = *(_QWORD *)(v11 + 8);
      v18 = *(_QWORD *)(v11 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v11 + 24), 1) )
      {
        v19 = *(_QWORD *)(v17 + 200);
        v20 = *(unsigned __int8 *)(v17 + 208);
        if ( (unsigned __int16)v22 > (unsigned __int16)v20 )
          goto LABEL_25;
        if ( WORD1(v22) > (unsigned __int16)v20 )
          break;
      }
LABEL_26:
      v11 = v18;
      if ( !v18 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors((__int64)&v22);
        else
          HalRequestIpi(0, (__int64)&v22);
        goto LABEL_7;
      }
    }
    LOWORD(v22) = v20 + 1;
LABEL_25:
    v23[v20] |= v19;
    goto LABEL_26;
  }
}
