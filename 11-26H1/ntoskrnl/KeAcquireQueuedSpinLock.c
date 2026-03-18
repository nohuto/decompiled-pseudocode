/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x1402B4690
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140205ACC (IoBoostThreadIoPriority.c)
 *     IopGetDevicePDO @ 0x14026F1F0 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026F260 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402BFAE8 (FsRtlPrivateCheckWaitingLocks.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     PopQueueQuerySetIrp @ 0x1403B2B18 (PopQueueQuerySetIrp.c)
 *     FsRtlUninitializeFileLock @ 0x1403B49B0 (FsRtlUninitializeFileLock.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403B5AC4 (FsRtlPrivateFastUnlockAll.c)
 *     CcExtendVacbArray @ 0x1403B68EC (CcExtendVacbArray.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F7FB8 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F81F0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F8A0C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FE7A0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     IopCopyCompleteReadIrp @ 0x14040FA00 (IopCopyCompleteReadIrp.c)
 *     CcGetRandomVacbArrayWithReference @ 0x140414840 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceVacbArray @ 0x140415100 (CcDereferenceVacbArray.c)
 *     IoDetachDevice @ 0x140437B10 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x1404380FC (IopInsertRemoveDevice.c)
 *     IopMountInitializeVpb @ 0x14044A814 (IopMountInitializeVpb.c)
 *     IopCheckVpbMounted @ 0x14044A8C8 (IopCheckVpbMounted.c)
 *     IopIncrementVpbRefCount @ 0x14044AA10 (IopIncrementVpbRefCount.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14044EEC4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopStartNextPacket @ 0x1404790D0 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140479198 (IopStartNextPacketByKey.c)
 *     IoStartPacket @ 0x1404794E0 (IoStartPacket.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14049675C (IoGetLowerDeviceObjectWithTag.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 *     PnpGetRelatedTargetDevice @ 0x1404A15E4 (PnpGetRelatedTargetDevice.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1404A3ED0 (FsRtlNotifySetCancelRoutine.c)
 *     IopGetMountFlag @ 0x1404AA2B0 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x1404B0C50 (IoEnumerateDeviceObjectList.c)
 *     IoAcquireVpbSpinLock @ 0x1404BD3B0 (IoAcquireVpbSpinLock.c)
 *     RawInitiateDeleteVolume @ 0x1404BD434 (RawInitiateDeleteVolume.c)
 *     IoGetDriverObjectExtension @ 0x1404CD190 (IoGetDriverObjectExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1404CFBEC (IopQueryVpbFlagsSafe.c)
 *     IoGetDiskDeviceObject @ 0x1404CFD00 (IoGetDiskDeviceObject.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D943C (CcAllocateInitializeVacbArray.c)
 *     PnpIsChainDereferenced @ 0x1404E2DA8 (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404E3478 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpFindMountableDevice @ 0x1404E5680 (PnpFindMountableDevice.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E6F6C (IopInterlockedRemoveHeadList.c)
 *     IopResurrectDriver @ 0x1404E7AF8 (IopResurrectDriver.c)
 *     FsRtlpWaitOnIrp @ 0x1404EC254 (FsRtlpWaitOnIrp.c)
 *     IoAllocateDriverObjectExtension @ 0x1404ED930 (IoAllocateDriverObjectExtension.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404F24B0 (IoAdjustStackSizeForRedirection.c)
 *     IopCheckStackForTransactionSupport @ 0x1404F312C (IopCheckStackForTransactionSupport.c)
 *     IopCheckUnloadDriver @ 0x1404F3900 (IopCheckUnloadDriver.c)
 *     RawCheckForDeleteVolume @ 0x1404FDAA8 (RawCheckForDeleteVolume.c)
 *     IopReferenceVerifyVpb @ 0x1404FE4D0 (IopReferenceVerifyVpb.c)
 *     PnpMarkDeviceForRemove @ 0x1404FEBC8 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1404FEF2C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x1404FEFC4 (PnpUnlockMountableDevice.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404FF8CC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopInterlockedInsertHeadList @ 0x140510EA4 (IopInterlockedInsertHeadList.c)
 *     FsRtlpOplockBreakToII @ 0x1405148C0 (FsRtlpOplockBreakToII.c)
 *     IopCheckDeviceAndDriver @ 0x14051BCF0 (IopCheckDeviceAndDriver.c)
 *     IopDisassociateThreadIrp @ 0x14051FFD0 (IopDisassociateThreadIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x140527130 (FsRtlpOplockBreakToNone.c)
 *     IopGetFsRegistrationInProgress @ 0x140531684 (IopGetFsRegistrationInProgress.c)
 *     CcInitializePartitionVacbs @ 0x1405B2EE8 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x1405B2FF8 (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B6114 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B7138 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x1405B7BE0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopGetDriverPathInformation @ 0x1405CA8E4 (IopGetDriverPathInformation.c)
 *     IopInterlockedInsertTailList @ 0x1405CA9EC (IopInterlockedInsertTailList.c)
 *     IoGetStackSizeWithoutRedirectionBias @ 0x1405CAFC0 (IoGetStackSizeWithoutRedirectionBias.c)
 *     IopSetFsRegistrationInProgress @ 0x1405CB750 (IopSetFsRegistrationInProgress.c)
 *     IopSetLegacyResourcesFlag @ 0x1405DAED4 (IopSetLegacyResourcesFlag.c)
 *     RawVerifyVolume @ 0x14061753C (RawVerifyVolume.c)
 *     DifKeAcquireQueuedSpinLockWrapper @ 0x140660250 (DifKeAcquireQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140C09840 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140C2BC5C (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140C30EC8 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140C30F2C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140C30F88 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C31030 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140C31140 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
