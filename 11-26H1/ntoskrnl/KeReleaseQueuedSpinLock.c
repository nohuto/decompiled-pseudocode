/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1402E2650
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
 *     IopVerifyDeviceObjectOnStack @ 0x1403EB2A0 (IopVerifyDeviceObjectOnStack.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F7FB8 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F81F0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F8A0C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FE7A0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     WmipNotificationIrpCancel @ 0x1403FFCE0 (WmipNotificationIrpCancel.c)
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
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     IopGetMountFlag @ 0x1404AA2B0 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x1404B0C50 (IoEnumerateDeviceObjectList.c)
 *     RawInitiateDeleteVolume @ 0x1404BD434 (RawInitiateDeleteVolume.c)
 *     IoReleaseVpbSpinLock @ 0x1404BE880 (IoReleaseVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x1404CD190 (IoGetDriverObjectExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x1404CFBEC (IopQueryVpbFlagsSafe.c)
 *     IoGetDiskDeviceObject @ 0x1404CFD00 (IoGetDiskDeviceObject.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404D23F4 (PnpRemoveLockedDeviceNode.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D7DB0 (FsRtlpCancelOplockRHIrp.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D943C (CcAllocateInitializeVacbArray.c)
 *     IopCsqCancelRoutine @ 0x1404DCEA0 (IopCsqCancelRoutine.c)
 *     PnpIsChainDereferenced @ 0x1404E2DA8 (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404E3478 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpFindMountableDevice @ 0x1404E5680 (PnpFindMountableDevice.c)
 *     IopInterlockedRemoveHeadList @ 0x1404E6F6C (IopInterlockedRemoveHeadList.c)
 *     IopResurrectDriver @ 0x1404E7AF8 (IopResurrectDriver.c)
 *     FsRtlpWaitOnIrp @ 0x1404EC254 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EC858 (FsRtlpCancelWaitingIrp.c)
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
 *     FsRtlPrivateCancelFileLockIrp @ 0x140505750 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140510174 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     IopInterlockedInsertHeadList @ 0x140510EA4 (IopInterlockedInsertHeadList.c)
 *     FsRtlpOplockBreakToII @ 0x1405148C0 (FsRtlpOplockBreakToII.c)
 *     IopCheckDeviceAndDriver @ 0x14051BCF0 (IopCheckDeviceAndDriver.c)
 *     IopDisassociateThreadIrp @ 0x14051FFD0 (IopDisassociateThreadIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x140527130 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052A77C (FsRtlpCancelExclusiveIrp.c)
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
 *     PiDqIrpCancel @ 0x1405DB110 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1405DCA90 (PiSwIrpCancelStartCreate.c)
 *     RawVerifyVolume @ 0x14061753C (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x1406634E0 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140C09840 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140C2BC5C (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140C30EC8 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140C30F2C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140C30F88 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C31030 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140C31140 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  __int64 v2; // r8
  volatile signed __int64 **v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  bool v8; // bl
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v14; // eax
  __int64 v15; // rdx
  unsigned __int32 v16; // ett
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v22; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v23[33]; // [rsp+28h] [rbp-130h] BYREF
  void *retaddr; // [rsp+158h] [rbp+0h]

  v3 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  v4 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
  {
    KiReleaseQueuedSpinLockInstrumented(v3, retaddr);
    goto LABEL_8;
  }
  _m_prefetchw(v3);
  v5 = (__int64)*v3;
  if ( !*v3 )
  {
    if ( v3 == (volatile signed __int64 **)_InterlockedCompareExchange64(v3[1], 0LL, (signed __int64)v3) )
      goto LABEL_8;
    v5 = KxWaitForLockChainValid((__int64 *)v3, OldIrql, v2);
  }
  *v3 = 0LL;
  v6 = (__int64)v3[1];
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v5 + 8), v6)) & 4) != 0 )
  {
    _InterlockedOr(v21, 0);
    v8 = KeDisableInterrupts();
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
      goto LABEL_8;
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
          goto LABEL_27;
        if ( WORD1(v22) > (unsigned __int16)v20 )
          break;
      }
LABEL_28:
      v11 = v18;
      if ( !v18 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors(&v22);
        else
          HalRequestIpi(0LL, &v22);
        goto LABEL_7;
      }
    }
    LOWORD(v22) = v20 + 1;
LABEL_27:
    v23[v20] |= v19;
    goto LABEL_28;
  }
LABEL_8:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
}
