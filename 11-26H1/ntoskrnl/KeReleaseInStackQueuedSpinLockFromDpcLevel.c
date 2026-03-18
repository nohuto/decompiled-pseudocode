/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     IoBoostThreadIoPriority @ 0x140205ACC (IoBoostThreadIoPriority.c)
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14026FCE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ExpReleaseFastResourceShared @ 0x1402729A0 (ExpReleaseFastResourceShared.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     ExReleaseFastResource @ 0x14027B310 (ExReleaseFastResource.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299AB0 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402EB0D0 (MiPerformFaultClusterMaintenance.c)
 *     MiUnlockFaultPageTable @ 0x1402EB810 (MiUnlockFaultPageTable.c)
 *     MiLockPageLeafPageTable @ 0x1402EEB90 (MiLockPageLeafPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x140300610 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x140301220 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiCaptureDeleteHierarchy @ 0x140303880 (MiCaptureDeleteHierarchy.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiWalkPageTablesPrepareToDescend @ 0x140325B20 (MiWalkPageTablesPrepareToDescend.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140359C70 (KeRemoveDeviceQueue.c)
 *     HalAllocateAdapterChannelV2 @ 0x140359DA0 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035A080 (HalBuildScatterGatherListV2.c)
 *     HalpDmaSyncMapBuffers @ 0x14035BE40 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035C1E8 (HalpDmaAcquireBufferMappings.c)
 *     MiDeleteVaDirect @ 0x140361EF0 (MiDeleteVaDirect.c)
 *     MiReleaseWalkLocks @ 0x140362F00 (MiReleaseWalkLocks.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiUnlockPoolCommitWs @ 0x140365110 (MiUnlockPoolCommitWs.c)
 *     CcIncrementWriteBehindPriority @ 0x1403896A4 (CcIncrementWriteBehindPriority.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A0340 (MiUnlockProbePacketWorkingSet.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     WmipNotificationIrpCancel @ 0x1403FFCE0 (WmipNotificationIrpCancel.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x140414FE4 (CcReferenceSharedCacheMapByVacb.c)
 *     CcDereferenceVacbArray @ 0x140415100 (CcDereferenceVacbArray.c)
 *     IvtIommuWaitCommand @ 0x140427808 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x14042795C (IvtIommuSendCommand.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1404310D8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14043120C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x140431B94 (ExpConvertFastResourceExclusiveToShared.c)
 *     IopInterlockedDecrementUlong @ 0x14044ABE0 (IopInterlockedDecrementUlong.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140450ADC (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 *     ?KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140450CA0 (-KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z.c)
 *     IopDereferenceVpbAndFree @ 0x140469EB0 (IopDereferenceVpbAndFree.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140479270 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140479370 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeInsertByKeyDeviceQueue @ 0x140479630 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140479780 (KeInsertDeviceQueue.c)
 *     CcSetLogHandleForFileEx @ 0x14047C5E0 (CcSetLogHandleForFileEx.c)
 *     HsaIommuSendCommand @ 0x14047E698 (HsaIommuSendCommand.c)
 *     CcIsThereDirtyLoggedPages @ 0x140486480 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14048B908 (CcWaitForUninitializeCacheMap.c)
 *     HalpDmaReleaseBufferMappings @ 0x14048F54C (HalpDmaReleaseBufferMappings.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140494650 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcSerializeWithLazyWriter @ 0x1404EA200 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404FA800 (CcSetLoggedDataThreshold.c)
 *     CcNotifyExternalCachesInternal @ 0x140506DEC (CcNotifyExternalCachesInternal.c)
 *     IvtAllocateScalableModePasidTables @ 0x140509A4C (IvtAllocateScalableModePasidTables.c)
 *     IvtAllocateContextTable @ 0x14050F398 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1405A5968 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x1405A5E50 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x1405A6130 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x1405A65F4 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDevicePasidTable @ 0x1405A77C0 (IvtSetDevicePasidTable.c)
 *     HsaAllocatePasidTables @ 0x1405A8A28 (HsaAllocatePasidTables.c)
 *     HsaAttachDeviceDomainInternal @ 0x1405A8F88 (HsaAttachDeviceDomainInternal.c)
 *     HsaFreePasidTables @ 0x1405A9840 (HsaFreePasidTables.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405AAF8C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcUpdateTimeOnLogHandles @ 0x1405B14E4 (CcUpdateTimeOnLogHandles.c)
 *     CcIsThereDirtyDataEx @ 0x1405B1BE0 (CcIsThereDirtyDataEx.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1405FD774 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper @ 0x140662F10 (DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper.c)
 *     ExpReleaseSvmAgentsLock @ 0x1406D19E4 (ExpReleaseSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140BF1F18 (PnprMirrorMarkedPages.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v1; // rdx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  unsigned __int64 v5; // r8
  char v6; // bl
  __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v12; // eax
  __int64 v13; // rdx
  unsigned __int32 v14; // ett
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v20; // [rsp+20h] [rbp-128h] BYREF
  _QWORD v21[33]; // [rsp+28h] [rbp-120h] BYREF
  void *retaddr; // [rsp+148h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
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
    _InterlockedOr(v19, 0);
    v6 = KeDisableInterrupts(Lock, v1, &Next->Lock);
    v7 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v5 >> 5) & 0x7F], 0LL);
    memset_0(v21, 0, 0x100uLL);
    v9 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v9 )
    {
LABEL_7:
      if ( v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v12 = *SchedulerAssist;
          do
          {
            v13 = v12;
            LODWORD(v13) = v12 & 0xFFDFFFFF;
            v14 = v12;
            v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
          }
          while ( v14 != v12 );
          if ( (v12 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v13, SchedulerAssist, v8);
        }
        _enable();
      }
      return;
    }
    v20 = 2097153LL;
    memset_0(v21, 0, 0x100uLL);
    while ( 1 )
    {
      v15 = *(_QWORD *)(v9 + 8);
      v16 = *(_QWORD *)(v9 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v9 + 24), 1) )
      {
        v17 = *(_QWORD *)(v15 + 200);
        v18 = *(unsigned __int8 *)(v15 + 208);
        if ( (unsigned __int16)v20 > (unsigned __int16)v18 )
          goto LABEL_25;
        if ( WORD1(v20) > (unsigned __int16)v18 )
          break;
      }
LABEL_26:
      v9 = v16;
      if ( !v16 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors(&v20);
        else
          HalRequestIpi(0LL, &v20);
        goto LABEL_7;
      }
    }
    LOWORD(v20) = v18 + 1;
LABEL_25:
    v21[v18] |= v17;
    goto LABEL_26;
  }
}
