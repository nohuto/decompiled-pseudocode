/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     CcIncrementWriteBehindPriority @ 0x14038B454 (CcIncrementWriteBehindPriority.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x140409614 (CcReferenceSharedCacheMapByVacb.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14041E108 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14041E23C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14041EBC4 (ExpConvertFastResourceExclusiveToShared.c)
 *     IvtIommuSendCommand @ 0x140434A6C (IvtIommuSendCommand.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 *     CcWaitForUninitializeCacheMap @ 0x140485448 (CcWaitForUninitializeCacheMap.c)
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
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x140663700 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406D540C (ExpAcquireSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406D5A4C (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140BF7F18 (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v2; // r8
  __int64 v4; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v4 )
      KxWaitForLockOwnerShip((volatile signed __int64)LockHandle, v4, v2);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
}
