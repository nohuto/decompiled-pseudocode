/*
 * XREFs of ExAcquireResourceSharedLite @ 0x1402B3C80
 * Callers:
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x1402AC1C0 (SepTrustLevelCheck.c)
 *     SepAcquireOrderedReadLocks @ 0x1402B2790 (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x1402C5B28 (SepRmAcquireGlobalSaclReadLock.c)
 *     KeCapturePersistentThreadState @ 0x14034F2C0 (KeCapturePersistentThreadState.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1404859EC (SeTokenGetNoChildProcessRestricted.c)
 *     IopCreateSecurityCheck @ 0x1404A387C (IopCreateSecurityCheck.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404AA440 (IoCheckRedirectionTrustLevel.c)
 *     MiAcquireLoadLock @ 0x1404AB9EC (MiAcquireLoadLock.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1404BADAC (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1404C2360 (SeTokenGetRedirectionTrustPolicy.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x1405B7860 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x1405B7D80 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1405C6994 (IoFillTriageDumpBuffer.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14063B910 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x14064F0D0 (DifExAcquireResourceSharedLiteWrapper.c)
 *     ExpQueryLegacyDriverInformation @ 0x14077038C (ExpQueryLegacyDriverInformation.c)
 *     FsRtlMdlReadDev @ 0x14078D8F0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14078DB20 (FsRtlPrepareMdlWriteDev.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140812090 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x140813B88 (SepIdAssignableAsGroup.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     CmpGetVirtualizationID @ 0x1408B1274 (CmpGetVirtualizationID.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408E8E84 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     SeLockSubjectContext @ 0x1408EE720 (SeLockSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1408F55B0 (NtQuerySecurityAttributesToken.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140907730 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140908BF0 (PiUpdateDevicePanel.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x14090D0F0 (PnpCheckForActiveDependencies.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14090ECD0 (PnpAcquireDependencyRelationsLock.c)
 *     IopSortRelationListForRemove @ 0x14090F5A8 (IopSortRelationListForRemove.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140910630 (PnpGetDeviceDependencyList.c)
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDelayedRemoveWorker @ 0x140913AC0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessDependencyRelations @ 0x1409141F8 (PnpProcessDependencyRelations.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     IoGetLegacyVetoList @ 0x140944C40 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     SeQueryUserSidToken @ 0x14094E160 (SeQueryUserSidToken.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140998C60 (PiCMGetRelatedDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1409A6390 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1409A6BD0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1409A7BF0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1409A7EC4 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiGetRelatedDevice @ 0x1409A8A10 (PiGetRelatedDevice.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409D5658 (ExpGetSystemFirmwareTableInformation.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409D911C (PiDmObjectManagerAcquireSharedLock.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineGlobalSacl @ 0x1409F8758 (SeExamineGlobalSacl.c)
 *     IoOpenDeviceRegistryKey @ 0x140A12550 (IoOpenDeviceRegistryKey.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A36CC0 (EtwpGetSidExtendedHeaderItem.c)
 *     SeQueryServerSiloToken @ 0x140A3B0D0 (SeQueryServerSiloToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A5D320 (FsRtlAcquireFileForCcFlushEx.c)
 *     SeGetTokenControlInformation @ 0x140A5F5F0 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x140A661C0 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x140A7CEC0 (SeQuerySecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x140A820F0 (SeQuerySessionIdToken.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x140A864B0 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PpDevNodeLockTree @ 0x140A88424 (PpDevNodeLockTree.c)
 *     IopReleaseDeviceResources @ 0x140A8AE94 (IopReleaseDeviceResources.c)
 *     PiControlGetPropertyData @ 0x140A8E690 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140A8F0D4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A97440 (SepGetLogonSessionAccountInfo.c)
 *     AlpcpQuerySidToken @ 0x140AA1FCC (AlpcpQuerySidToken.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA5534 (PiQueryAndAllocateBootResources.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     IopQueryInterfaceRecurseUp @ 0x140AA8A08 (IopQueryInterfaceRecurseUp.c)
 *     FsRtlCopyRead @ 0x140AAF910 (FsRtlCopyRead.c)
 *     SepValidOwnerSubjectContext @ 0x140AB05C8 (SepValidOwnerSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB7984 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140AB8F60 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 *     WmipAcquireSmbiosLockShared @ 0x140AC4E34 (WmipAcquireSmbiosLockShared.c)
 *     PnpDiagRundownRegisterCallback @ 0x140AC6A00 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140AC6C80 (PipForDeviceNodeSubtree.c)
 *     PiQueryDeviceRelations @ 0x140AC9E30 (PiQueryDeviceRelations.c)
 *     PiGetDeviceDepth @ 0x140AD6F94 (PiGetDeviceDepth.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AF80D4 (IopSetDeviceSecurityDescriptor.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B33BE4 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryPowerRelations @ 0x140B35658 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140B35BCC (PiQueryPowerDependencyRelations.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140B479D4 (IoLockUnlockPnpDeviceTree.c)
 *     PnpShutdownDevices @ 0x140B6BDA8 (PnpShutdownDevices.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 *     ExpPrmInitialization @ 0x140CE4674 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140D054B4 (VslRegisterBootDrivers.c)
 * Callees:
 *     ExpSaveAbHandle @ 0x140276630 (ExpSaveAbHandle.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x1402766A0 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402B2710 (ExIsFastResourceHeldExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140529B94 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall ExAcquireResourceSharedLite(PERESOURCE Resource, BOOLEAN Wait)
{
  UCHAR ReservedLowFlags; // cl
  unsigned __int8 v5; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  __int64 Pool2; // rax
  struct _ERESOURCE *v10; // r9
  ULONG_PTR v11; // rsi
  char v12; // r15
  USHORT Flag; // r8
  int v14; // r12d
  unsigned __int8 v15; // al
  unsigned __int8 v16; // dl
  struct _KTHREAD *v17; // rcx
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rbp
  unsigned __int32 *v21; // r14
  signed __int64 Flink; // rax
  BOOLEAN v23; // di
  struct _LIST_ENTRY *v24; // rtt
  char v25; // r15
  int v26; // r13d
  int v27; // r12d
  int v28; // r15d
  __int64 v29; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v32; // eax
  __int64 v33; // rdx
  unsigned __int32 v34; // ett

  ReservedLowFlags = Resource->ReservedLowFlags;
  v5 = (Wait == 0) + 1;
  if ( (ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > v5 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v5, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      goto LABEL_26;
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_18;
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      goto LABEL_22;
  }
  if ( (Resource->ReservedLowFlags & 1) == 0 )
    return ExpAcquireResourceSharedLite(Resource, Wait);
  do
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v11 = Pool2;
  }
  while ( !Pool2 );
  *(_OWORD *)Pool2 = 0LL;
  v12 = 2;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 16) = KeGetCurrentThread();
  *(_BYTE *)(Pool2 + 37) |= 1u;
  Flag = Resource->Flag;
  if ( Wait )
    v12 = 10;
  v14 = v12 & 0x10;
  v15 = ((v12 & 8) == 0) + 1;
  if ( (Flag & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v16 = KeGetCurrentIrql();
  v17 = KeGetCurrentThread();
  if ( v16 > v15 )
    KeBugCheckEx(0x1C6u, 0LL, v16, v15, 0LL);
  if ( v16 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
LABEL_26:
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (Flag & 8) == 0 && (v17->ApcState.InProgressFlags & 2) != 0 )
LABEL_18:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v16 && (v17->MiscFlags & 0x400) == 0 && !v17->WaitBlock[3].SpareLong )
LABEL_22:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v17 )
    KeBugCheckEx(0x1C6u, 9uLL, v11, *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(v11 + 37) & 2) == 0 )
  {
    v10 = *(struct _ERESOURCE **)(v11 + 24);
    if ( v10 )
    {
      if ( v10 != Resource )
        KeBugCheckEx(0x1C6u, 2uLL, v11, (ULONG_PTR)v10, 0LL);
      if ( (struct _KTHREAD *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != v17 )
        KeBugCheckEx(0x1C6u, 2uLL, v11, *(_QWORD *)(v11 + 24), 0LL);
    }
  }
  v18 = *(_DWORD *)(v11 + 32);
  if ( !v18 || (*(_BYTE *)(v11 + 37) & 4) != 0 )
  {
    v19 = 0LL;
    v20 = (__int64)KeGetCurrentThread();
    v21 = 0LL;
    if ( !*(_BYTE *)(v11 + 36) )
      v21 = (unsigned __int32 *)KeAbPreAcquire((__int64)Resource, 0LL, (v12 & 8) == 0, (struct _KLOCK_ENTRIES *)v10);
    do
    {
      _m_prefetchw(Resource);
      Flink = (signed __int64)Resource->SystemResourcesList.Flink;
      if ( ((__int64)Resource->SystemResourcesList.Flink & 1) != 0 || (Flink & 2) != 0 )
      {
        v23 = ExpAcquireFastResourceSharedSlow((struct _KTHREAD *)Resource, v11, v21, v20, v12);
        goto LABEL_35;
      }
      v24 = Resource->SystemResourcesList.Flink;
    }
    while ( v24 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)Resource,
                                           Flink ^ (Flink ^ (Flink + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                                           Flink) );
    v25 = 3;
    if ( v14 )
      v25 = 15;
    v26 = v25 & 2;
    v27 = v25 & 4;
    v28 = v25 & 8;
    if ( (ULONG *)v11 != &Resource->ActiveEntries )
      *(_QWORD *)(v11 + 24) = Resource;
    LOBYTE(v19) = v27 != 0;
    *(_QWORD *)(v11 + 16) = v20 | v19;
    *(_DWORD *)(v11 + 32) = 1;
    ExpSaveAbHandle(v11, v21, 1);
    if ( v26 )
      _disable();
    if ( v27 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v20 + 1736));
      ExpAddFastOwnerEntryToThreadList(v20, (__int64)Resource, 1, (_QWORD *)v11);
      KxReleaseSpinLock((PKSPIN_LOCK)(v20 + 1736));
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList(v20, (__int64)Resource, 0, (_QWORD *)v11);
    }
    if ( v26 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v32 = *SchedulerAssist;
        do
        {
          v33 = v32;
          LODWORD(v33) = v32 & 0xFFDFFFFF;
          v34 = v32;
          v32 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v32 & 0xFFDFFFFF, v32);
        }
        while ( v34 != v32 );
        if ( (v32 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v33, SchedulerAssist, v29);
      }
      _enable();
    }
    if ( v27 )
    {
      if ( v28 && v21 )
        KeAbMarkCrossThreadReleasable(Resource, v21);
      ObfReferenceObjectWithTag((PVOID)v20, 0x746C6644u);
    }
    v23 = 1;
  }
  else
  {
    v23 = 1;
    *(_DWORD *)(v11 + 32) = v18 + 1;
  }
LABEL_35:
  if ( !v23 || ExIsFastResourceHeldExclusive((ULONG_PTR)Resource) )
    ExFreePoolWithTag((PVOID)v11, 0);
  return v23;
}
