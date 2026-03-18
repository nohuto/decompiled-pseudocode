/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035C1E8 (HalpDmaAcquireBufferMappings.c)
 *     CcIncrementWriteBehindPriority @ 0x1403896A4 (CcIncrementWriteBehindPriority.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x140414FE4 (CcReferenceSharedCacheMapByVacb.c)
 *     IvtIommuSendCommand @ 0x14042795C (IvtIommuSendCommand.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1404310D8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14043120C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x140431B94 (ExpConvertFastResourceExclusiveToShared.c)
 *     ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140450ADC (-KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_L.c)
 *     CcWaitForUninitializeCacheMap @ 0x14048B908 (CcWaitForUninitializeCacheMap.c)
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
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x14065FB20 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406D13DC (ExpAcquireSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406D1A1C (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140BF1F18 (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v2; // r8
  __int64 v4; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
