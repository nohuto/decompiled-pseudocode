/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1402C4710
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     IopGetDevicePDO @ 0x14026E760 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14026E7D0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402F9EB0 (IopVerifyDeviceObjectOnStack.c)
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
 *     FsRtlCancelNotify @ 0x1403FB5E0 (FsRtlCancelNotify.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403FB9D0 (FsRtlNotifySetCancelRoutine.c)
 *     WmipNotificationIrpCancel @ 0x1403FBA80 (WmipNotificationIrpCancel.c)
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
 *     RawInitiateDeleteVolume @ 0x1404B6C14 (RawInitiateDeleteVolume.c)
 *     IoReleaseVpbSpinLock @ 0x1404B80D0 (IoReleaseVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x1404C6930 (IoGetDriverObjectExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1404C961C (IopQueryVpbFlagsSafe.c)
 *     IoGetDiskDeviceObject @ 0x1404C9730 (IoGetDiskDeviceObject.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404CBC6C (PnpRemoveLockedDeviceNode.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D1580 (FsRtlpCancelOplockRHIrp.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D2B1C (CcAllocateInitializeVacbArray.c)
 *     IopCsqCancelRoutine @ 0x1404D6580 (IopCsqCancelRoutine.c)
 *     PnpIsChainDereferenced @ 0x1404DC41C (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404DCA0C (PpMarkDeviceStackExtensionFlag.c)
 *     PnpFindMountableDevice @ 0x1404DEC20 (PnpFindMountableDevice.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E0328 (IopInterlockedRemoveHeadList.c)
 *     IopResurrectDriver @ 0x1404E0EB8 (IopResurrectDriver.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404E5E38 (FsRtlpCancelWaitingIrp.c)
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
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404FF000 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140509BE4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     IopInterlockedInsertHeadList @ 0x14050A914 (IopInterlockedInsertHeadList.c)
 *     FsRtlpOplockBreakToII @ 0x14050E330 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     IopCheckDeviceAndDriver @ 0x140516280 (IopCheckDeviceAndDriver.c)
 *     IopDisassociateThreadIrp @ 0x140522674 (IopDisassociateThreadIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
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
 *     PiDqIrpCancel @ 0x1405DD910 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1405DF340 (PiSwIrpCancelStartCreate.c)
 *     RawVerifyVolume @ 0x14061A588 (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x1406670C0 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140C0FA50 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140C31C6C (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140C36ED8 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140C36F3C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140C36F98 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C37040 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140C37150 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  volatile signed __int64 **v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  char v7; // bl
  __int64 v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v13; // eax
  __int64 v14; // rdx
  unsigned __int32 v15; // ett
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v21; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v22[33]; // [rsp+28h] [rbp-130h] BYREF
  void *retaddr; // [rsp+158h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  v3 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
    goto LABEL_8;
  }
  _m_prefetchw(v2);
  v4 = (__int64)*v2;
  if ( !*v2 )
  {
    if ( v2 == (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
      goto LABEL_8;
    v4 = KxWaitForLockChainValid(v2);
  }
  *v2 = 0LL;
  v5 = (__int64)v2[1];
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v4 + 8), v5)) & 4) != 0 )
  {
    _InterlockedOr(v20, 0);
    v7 = KeDisableInterrupts(v5, OldIrql, v4 + 8);
    v8 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v6 >> 5) & 0x7F], 0LL);
    memset_0(v22, 0, 0x100uLL);
    v10 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v10 )
    {
LABEL_7:
      if ( v7 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v13 = *SchedulerAssist;
          do
          {
            v14 = v13;
            LODWORD(v14) = v13 & 0xFFDFFFFF;
            v15 = v13;
            v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
          }
          while ( v15 != v13 );
          if ( (v13 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, v9);
        }
        _enable();
      }
      goto LABEL_8;
    }
    v21 = 2097153LL;
    memset_0(v22, 0, 0x100uLL);
    while ( 1 )
    {
      v16 = *(_QWORD *)(v10 + 8);
      v17 = *(_QWORD *)(v10 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v10 + 24), 1) )
      {
        v18 = *(_QWORD *)(v16 + 200);
        v19 = *(unsigned __int8 *)(v16 + 208);
        if ( (unsigned __int16)v21 > (unsigned __int16)v19 )
          goto LABEL_27;
        if ( WORD1(v21) > (unsigned __int16)v19 )
          break;
      }
LABEL_28:
      v10 = v17;
      if ( !v17 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors(&v21);
        else
          HalRequestIpi(0LL, &v21);
        goto LABEL_7;
      }
    }
    LOWORD(v21) = v19 + 1;
LABEL_27:
    v22[v19] |= v18;
    goto LABEL_28;
  }
LABEL_8:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  __writecr8(v3);
}
