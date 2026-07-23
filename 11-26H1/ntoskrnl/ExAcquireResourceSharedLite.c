/*
 * XREFs of ExAcquireResourceSharedLite @ 0x1402FE950
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x1402FD460 (SepAcquireOrderedReadLocks.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SepRmAcquireGlobalSaclReadLock @ 0x1403107C4 (SepRmAcquireGlobalSaclReadLock.c)
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 *     SepTrustLevelCheck @ 0x1403AB8E0 (SepTrustLevelCheck.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1403B2198 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14047F35C (SeTokenGetNoChildProcessRestricted.c)
 *     IopCreateSecurityCheck @ 0x14049D38C (IopCreateSecurityCheck.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404A3AD0 (IoCheckRedirectionTrustLevel.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1404BBBB0 (SeTokenGetRedirectionTrustPolicy.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x1405BA0D0 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x1405BA5F0 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14063EA80 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     DifExAcquireResourceSharedLiteWrapper @ 0x140652CB0 (DifExAcquireResourceSharedLiteWrapper.c)
 *     ExpQueryLegacyDriverInformation @ 0x14077338C (ExpQueryLegacyDriverInformation.c)
 *     FsRtlMdlReadDev @ 0x140790420 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140817E20 (SeSetSessionIdTokenWithLinked.c)
 *     SepIdAssignableAsGroup @ 0x1408199E8 (SepIdAssignableAsGroup.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 *     CmpGetVirtualizationID @ 0x1408B7880 (CmpGetVirtualizationID.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408EF444 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     NtQuerySecurityAttributesToken @ 0x140925540 (NtQuerySecurityAttributesToken.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1409349E0 (ObCheckObjectAccess.c)
 *     PiGetDeviceDepth @ 0x14094CF54 (PiGetDeviceDepth.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140966DF0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140967630 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140968650 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x140968918 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiGetRelatedDevice @ 0x140969420 (PiGetRelatedDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096EA80 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C (PiDmObjectManagerAcquireSharedLock.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1409ABC40 (PiUpdateDevicePanel.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409AD3F8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1409AF220 (PnpCheckForActiveDependencies.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     IopSortRelationListForRemove @ 0x1409B16D8 (IopSortRelationListForRemove.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409B247C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     PiQueryResourceRequirements @ 0x1409B2FCC (PiQueryResourceRequirements.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessDependencyRelations @ 0x1409B6868 (PnpProcessDependencyRelations.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     IoGetLegacyVetoList @ 0x1409C05B0 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     SeQueryUserSidToken @ 0x1409C9AA0 (SeQueryUserSidToken.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409DBF3C (IopQueryInterfaceRecurseUp.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SeQueryServerSiloToken @ 0x1409F6C30 (SeQueryServerSiloToken.c)
 *     IoOpenDeviceRegistryKey @ 0x140A11740 (IoOpenDeviceRegistryKey.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A4FC60 (EtwpGetSidExtendedHeaderItem.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineGlobalSacl @ 0x140A61298 (SeExamineGlobalSacl.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     SeGetTokenControlInformation @ 0x140A6C5B0 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x140A73190 (SeQuerySessionIdTokenEx.c)
 *     SeQuerySecurityAttributesToken @ 0x140A82D30 (SeQuerySecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x140A87F60 (SeQuerySessionIdToken.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x140A8B0B0 (PiPnpRtlOperationListAcquireSharedLock.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PiControlGetPropertyData @ 0x140A93360 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140A93DA4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A9B5C0 (SepGetLogonSessionAccountInfo.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA072C (PiQueryAndAllocateBootResources.c)
 *     AlpcpQuerySidToken @ 0x140AA3A9C (AlpcpQuerySidToken.c)
 *     FsRtlCopyRead @ 0x140AAD560 (FsRtlCopyRead.c)
 *     SepValidOwnerSubjectContext @ 0x140AAE5AC (SepValidOwnerSubjectContext.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 *     WmipAcquireSmbiosLockShared @ 0x140AC6AA4 (WmipAcquireSmbiosLockShared.c)
 *     PnpDiagRundownRegisterCallback @ 0x140AC85F0 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 *     PiQueryDeviceRelations @ 0x140ACBF40 (PiQueryDeviceRelations.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AFA774 (IopSetDeviceSecurityDescriptor.c)
 *     PipGenerateContainerID @ 0x140B10C0C (PipGenerateContainerID.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B36034 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryPowerRelations @ 0x140B37868 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140B37DDC (PiQueryPowerDependencyRelations.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140B49768 (IoLockUnlockPnpDeviceTree.c)
 *     PnpShutdownDevices @ 0x140B6EEA4 (PnpShutdownDevices.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 *     ExpPrmInitialization @ 0x140CEAA14 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140D0B784 (VslRegisterBootDrivers.c)
 * Callees:
 *     ExpSaveAbHandle @ 0x140275BA0 (ExpSaveAbHandle.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140275C10 (ExpAddFastOwnerEntryToThreadList.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402FD3E0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
