/*
 * XREFs of SeSinglePrivilegeCheck @ 0x14090DE50
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140459608 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x1404C6488 (EtwpUpdateSelectedGroupMasks.c)
 *     SepLinkLogonSessions @ 0x1404DA5DC (SepLinkLogonSessions.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     ExPoolQueryLimits @ 0x1405127B0 (ExPoolQueryLimits.c)
 *     IopLoadDriverImage @ 0x14052C948 (IopLoadDriverImage.c)
 *     PsQueryCpuQuotaInformation @ 0x14052D4BC (PsQueryCpuQuotaInformation.c)
 *     PsSetCpuQuotaInformation @ 0x1406178F8 (PsSetCpuQuotaInformation.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063E288 (SepOneWayLinkLogonSessionsEx.c)
 *     EtwpGetPmcOwnership @ 0x1406C7694 (EtwpGetPmcOwnership.c)
 *     NtDrawText @ 0x1406CF650 (NtDrawText.c)
 *     NtShutdownSystem @ 0x1406CF7D0 (NtShutdownSystem.c)
 *     ExPoolSetLimit @ 0x1406CFD68 (ExPoolSetLimit.c)
 *     NtReplacePartitionUnit @ 0x140723890 (NtReplacePartitionUnit.c)
 *     EtwpSetMark @ 0x140778508 (EtwpSetMark.c)
 *     PspApplyIFEOPerfOptions @ 0x14077BC3C (PspApplyIFEOPerfOptions.c)
 *     MmManagePartitionCreateLargePages @ 0x1407809E4 (MmManagePartitionCreateLargePages.c)
 *     NtSetInformationSymbolicLink @ 0x1407C64E0 (NtSetInformationSymbolicLink.c)
 *     ObSetRefTraceInformation @ 0x1407C7574 (ObSetRefTraceInformation.c)
 *     ObSetRefTraceInformationEx @ 0x1407C7628 (ObSetRefTraceInformationEx.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PsCreatePartition @ 0x14080347C (PsCreatePartition.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtFilterBootOption @ 0x14081BCA0 (NtFilterBootOption.c)
 *     SmProcessConfigRequest @ 0x14081F7D0 (SmProcessConfigRequest.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140839448 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     NtDisplayString @ 0x14083D5A0 (NtDisplayString.c)
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x140843330 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408434D0 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x140843670 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140843AF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x140843DB0 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140844330 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1408444F0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140844740 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408448F0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140844CE0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1408468E0 (NtSetDefaultHardErrorPort.c)
 *     NtFlushInstallUILanguage @ 0x140849A20 (NtFlushInstallUILanguage.c)
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 *     NtSetIntervalProfile @ 0x14084B880 (NtSetIntervalProfile.c)
 *     NtCompactKeys @ 0x140854C00 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1408550B0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x140855170 (NtInitializeRegistry.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     NtReplaceKey @ 0x140856030 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x1408564A0 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140856750 (NtThawRegistry.c)
 *     MmCreateMirror @ 0x14086EB30 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x140871100 (MmIssueMemoryListCommand.c)
 *     MiValidatePageFileCreationParameters @ 0x140872C3C (MiValidatePageFileCreationParameters.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmManagePartitionCharges @ 0x140883238 (MmManagePartitionCharges.c)
 *     MmManagePartitionMoveMemory @ 0x1408834C8 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionUpdateAttributes @ 0x140883948 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x140884B70 (MiOpenSpecialPurposeMemory.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408AB974 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408ABCD4 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     NtDisableLastKnownGood @ 0x1408ACF10 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     NtSerializeBoot @ 0x1408AD310 (NtSerializeBoot.c)
 *     NtSetDebugFilterState @ 0x1408AD360 (NtSetDebugFilterState.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14093AE58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     NtGetNextThread @ 0x140949FE0 (NtGetNextThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     NtPlugPlayControl @ 0x1409672B0 (NtPlugPlayControl.c)
 *     MiCreatePagingFileMapPrepare @ 0x1409895D4 (MiCreatePagingFileMapPrepare.c)
 *     MiMapViewOfSection @ 0x1409941C8 (MiMapViewOfSection.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     NtSetInformationObject @ 0x1409BA9F0 (NtSetInformationObject.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     NtCreateWnfStateName @ 0x1409CAAE0 (NtCreateWnfStateName.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 *     NtCreateTokenEx @ 0x1409E2210 (NtCreateTokenEx.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     MiLockUnlockCommon @ 0x140A068FC (MiLockUnlockCommon.c)
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 *     NtTranslateFilePath @ 0x140A2D4D0 (NtTranslateFilePath.c)
 *     NtQueryBootEntryOrder @ 0x140A2E370 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140A2E7B0 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140A2F580 (NtQuerySystemEnvironmentValueEx.c)
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 *     NtSaveKeyEx @ 0x140A7E1F0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A7FCE0 (NtRestoreKey.c)
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 *     PfSnSetPrefetcherInformation @ 0x140ACC2CC (PfSnSetPrefetcherInformation.c)
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 *     PfSnQueryPrefetcherInformation @ 0x140AFA21C (PfSnQueryPrefetcherInformation.c)
 *     PspSetProcessPriorityClass @ 0x140B11C80 (PspSetProcessPriorityClass.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     NtMakePermanentObject @ 0x140B1F8D0 (NtMakePermanentObject.c)
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     SmSetStoreInformation @ 0x140B307BC (SmSetStoreInformation.c)
 *     ExpRaiseHardError @ 0x140B3635C (ExpRaiseHardError.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 *     VslTransformDumpKey @ 0x140B6CDB4 (VslTransformDumpKey.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

BOOLEAN __stdcall SeSinglePrivilegeCheck(LUID PrivilegeValue, KPROCESSOR_MODE PreviousMode)
{
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  struct _KTHREAD *v8; // r13
  void *v9; // rdx
  LegacyAutoBoost *v10; // r14
  void *v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rsi
  unsigned int v15; // r14d
  char v16; // r12
  _QWORD *v17; // rcx
  void *v18; // rbx
  _KPROCESS *v19; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v21; // rtt
  PSE_EXPORTS v23; // r15
  int v24; // r10d
  LUID *v25; // rdx
  __int64 v26; // r9
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax
  LUID *v29; // rcx
  __int64 v30; // r8
  _UNKNOWN **v31; // rdx
  _DWORD *v32; // rax
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  __int64 v34; // [rsp+50h] [rbp-11h]
  PVOID v35; // [rsp+58h] [rbp-9h]
  __int64 v36; // [rsp+60h] [rbp-1h]
  _DWORD v37[2]; // [rsp+70h] [rbp+Fh] BYREF
  LUID v38; // [rsp+78h] [rbp+17h] BYREF
  int v39; // [rsp+80h] [rbp+1Fh]

  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v36 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v10,
        (struct _KTHREAD *)((char *)CurrentThread + 1424));
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v11 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v11, 0x75536553u);
      LODWORD(v34) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v11 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v8);
  }
  else
  {
    v11 = 0LL;
  }
  Object = v11;
  v12 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v2, v3);
  v13 = (__int64)v12;
  v35 = v12;
  if ( SeTokenLeakTracking )
  {
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12[143] + 284LL));
      v13 = (__int64)v35;
      if ( v35 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    v14 = Object;
    if ( Object )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      v14 = Object;
      if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
      v13 = (__int64)v35;
    }
  }
  else
  {
    v14 = Object;
  }
  v38 = PrivilegeValue;
  v15 = 1;
  v37[0] = 1;
  v37[1] = 1;
  v39 = 0;
  if ( !PreviousMode )
  {
    v16 = 1;
    goto LABEL_21;
  }
  if ( v14 )
  {
    if ( (int)v34 < 2 )
    {
      v16 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v14 = (_QWORD *)v13;
  }
  v13 = (__int64)v35;
  v16 = SepPrivilegeCheck((__int64)v14, (__int64)&v38, 1u, 1, PreviousMode);
  v14 = Object;
  v15 = v37[0];
LABEL_18:
  v17 = (_QWORD *)v13;
  if ( v14 )
    v17 = v14;
  v18 = *(void **)v17[19];
  if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v18) )
  {
    v23 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v18) && !RtlEqualSid(v23->SeLocalServiceSid, v18) )
      goto LABEL_33;
    v24 = 0;
    v25 = &v38;
    v26 = v15;
    do
    {
      Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
      Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
      while ( v25->LowPart != LODWORD(Flink->Flink) || v25->HighPart != HIDWORD(Flink->Flink) )
      {
        Flink = Blink->Blink;
        Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
        if ( !Flink )
          goto LABEL_43;
      }
      ++v24;
LABEL_43:
      v25 = (LUID *)((char *)v25 + 12);
      --v26;
    }
    while ( v26 );
    v29 = &v38;
    v30 = v15;
    do
    {
      v31 = &SepServicesFilterPrivileges;
      v32 = SepServicesFilterPrivileges;
      while ( v29->LowPart != *v32 || v29->HighPart != v32[1] )
      {
        v32 = v31[1];
        ++v31;
        if ( !v32 )
          goto LABEL_48;
      }
      ++v24;
LABEL_48:
      v29 = (LUID *)((char *)v29 + 12);
      --v30;
    }
    while ( v30 );
    if ( v24 != v15 )
    {
LABEL_33:
      SepAdtPrivilegedServiceAuditAlarm(
        (unsigned int)&Object,
        (unsigned int)&SeSubsystemName,
        0,
        (_DWORD)v14,
        v13,
        (__int64)v37,
        v16);
      v13 = (__int64)v35;
      v14 = Object;
    }
  }
LABEL_21:
  if ( SeTokenLeakTracking )
  {
    if ( v13 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 1144) + 284LL));
      v13 = (__int64)v35;
      if ( v35 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
      v14 = Object;
    }
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v14[143] + 284LL));
      if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
      v13 = (__int64)v35;
    }
  }
  v19 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v19[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)v19[1].ActiveProcessors;
  do
  {
    if ( (v13 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v13, 0x75536553u);
      goto LABEL_27;
    }
    v21 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&v19[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v21 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v13 - 48, -1, 0x75536553u);
LABEL_27:
  v35 = 0LL;
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x75536553u);
  return v16;
}
