/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x1402FF360
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     IopGetDevicePDO @ 0x14026E760 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     PopQueueQuerySetIrp @ 0x1403BC828 (PopQueueQuerySetIrp.c)
 *     FsRtlUninitializeFileLock @ 0x1403BE8B0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403BF9C4 (FsRtlPrivateFastUnlockAll.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     FsRtlUninitializeOplock @ 0x1403FAC10 (FsRtlUninitializeOplock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403FB9D0 (FsRtlNotifySetCancelRoutine.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140408E70 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceVacbArray @ 0x140409730 (CcDereferenceVacbArray.c)
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     IoDetachDevice @ 0x140426A30 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x14042701C (IopInsertRemoveDevice.c)
 *     IopMountInitializeVpb @ 0x140442944 (IopMountInitializeVpb.c)
 *     IopCheckVpbMounted @ 0x1404429F8 (IopCheckVpbMounted.c)
 *     IopIncrementVpbRefCount @ 0x140442B40 (IopIncrementVpbRefCount.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopStartNextPacket @ 0x140472A30 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140472AF8 (IopStartNextPacketByKey.c)
 *     IoStartPacket @ 0x140472E40 (IoStartPacket.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1404902AC (IoGetLowerDeviceObjectWithTag.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     IopGetMountFlag @ 0x1404A3940 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x1404AA2E0 (IoEnumerateDeviceObjectList.c)
 *     IoAcquireVpbSpinLock @ 0x1404B6B90 (IoAcquireVpbSpinLock.c)
 *     RawInitiateDeleteVolume @ 0x1404B6C14 (RawInitiateDeleteVolume.c)
 *     IoGetDriverObjectExtension @ 0x1404C6930 (IoGetDriverObjectExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1404C961C (IopQueryVpbFlagsSafe.c)
 *     IoGetDiskDeviceObject @ 0x1404C9730 (IoGetDiskDeviceObject.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D2B1C (CcAllocateInitializeVacbArray.c)
 *     PnpIsChainDereferenced @ 0x1404DC41C (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404DCA0C (PpMarkDeviceStackExtensionFlag.c)
 *     PnpFindMountableDevice @ 0x1404DEC20 (PnpFindMountableDevice.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E0328 (IopInterlockedRemoveHeadList.c)
 *     IopResurrectDriver @ 0x1404E0EB8 (IopResurrectDriver.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     IoAllocateDriverObjectExtension @ 0x1404E6F10 (IoAllocateDriverObjectExtension.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404EBA90 (IoAdjustStackSizeForRedirection.c)
 *     IopCheckStackForTransactionSupport @ 0x1404EC70C (IopCheckStackForTransactionSupport.c)
 *     IopCheckUnloadDriver @ 0x1404ECEE0 (IopCheckUnloadDriver.c)
 *     RawCheckForDeleteVolume @ 0x1404F6FE8 (RawCheckForDeleteVolume.c)
 *     IopReferenceVerifyVpb @ 0x1404F7A80 (IopReferenceVerifyVpb.c)
 *     PnpMarkDeviceForRemove @ 0x1404F83B0 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1404F871C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1404F87B4 (PnpUnlockMountableDevice.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404F90BC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopInterlockedInsertHeadList @ 0x14050A914 (IopInterlockedInsertHeadList.c)
 *     FsRtlpOplockBreakToII @ 0x14050E330 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     IopCheckDeviceAndDriver @ 0x140516280 (IopCheckDeviceAndDriver.c)
 *     IopDisassociateThreadIrp @ 0x140522674 (IopDisassociateThreadIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     IopGetFsRegistrationInProgress @ 0x140533B84 (IopGetFsRegistrationInProgress.c)
 *     CcInitializePartitionVacbs @ 0x1405B56F8 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x1405B5808 (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B8984 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x1405BA450 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopGetDriverPathInformation @ 0x1405CD1B4 (IopGetDriverPathInformation.c)
 *     IopInterlockedInsertTailList @ 0x1405CD2BC (IopInterlockedInsertTailList.c)
 *     IoGetStackSizeWithoutRedirectionBias @ 0x1405CD890 (IoGetStackSizeWithoutRedirectionBias.c)
 *     IopSetFsRegistrationInProgress @ 0x1405CE020 (IopSetFsRegistrationInProgress.c)
 *     IopSetLegacyResourcesFlag @ 0x1405DD6D4 (IopSetLegacyResourcesFlag.c)
 *     RawVerifyVolume @ 0x14061A588 (RawVerifyVolume.c)
 *     DifKeAcquireQueuedSpinLockWrapper @ 0x140663E30 (DifKeAcquireQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140C0FA50 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140C31C6C (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140C36ED8 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140C36F3C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140C36F98 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C37040 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140C37150 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall KeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  __int64 v1; // r8
  KIRQL CurrentIrql; // bl
  _QWORD *ArbitraryUserPointer; // rax
  KSPIN_LOCK_QUEUE_NUMBER v5; // rdi
  volatile __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v5 = 2 * Number;
  v6 = (volatile __int64 *)ArbitraryUserPointer[v5 + 1];
  v7 = (__int64)&ArbitraryUserPointer[v5];
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = _InterlockedExchange64(v6, v7);
    if ( v8 )
      KxWaitForLockOwnerShip(v7, v8, v1);
    return CurrentIrql;
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v6);
    return CurrentIrql;
  }
}
