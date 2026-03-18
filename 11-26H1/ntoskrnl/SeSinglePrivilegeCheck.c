/*
 * XREFs of SeSinglePrivilegeCheck @ 0x140932280
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14045FC94 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x1404CCCE8 (EtwpUpdateSelectedGroupMasks.c)
 *     SepLinkLogonSessions @ 0x1404E0EFC (SepLinkLogonSessions.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E7FA4 (ExCpuSetResourceManagerAccessCheck.c)
 *     ExPoolQueryLimits @ 0x140518D40 (ExPoolQueryLimits.c)
 *     IopLoadDriverImage @ 0x14052A428 (IopLoadDriverImage.c)
 *     PsQueryCpuQuotaInformation @ 0x14052AF9C (PsQueryCpuQuotaInformation.c)
 *     PsSetCpuQuotaInformation @ 0x140614AB8 (PsSetCpuQuotaInformation.c)
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063B1C0 (SepOneWayLinkLogonSessionsEx.c)
 *     EtwpGetPmcOwnership @ 0x1406C3A54 (EtwpGetPmcOwnership.c)
 *     NtDrawText @ 0x1406CB620 (NtDrawText.c)
 *     NtShutdownSystem @ 0x1406CB7A0 (NtShutdownSystem.c)
 *     ExPoolSetLimit @ 0x1406CBD38 (ExPoolSetLimit.c)
 *     NtReplacePartitionUnit @ 0x14071EC70 (NtReplacePartitionUnit.c)
 *     EtwpSetMark @ 0x140775508 (EtwpSetMark.c)
 *     PspApplyIFEOPerfOptions @ 0x140778D9C (PspApplyIFEOPerfOptions.c)
 *     MmManagePartitionCreateLargePages @ 0x14077E0A0 (MmManagePartitionCreateLargePages.c)
 *     NtSetInformationSymbolicLink @ 0x1407C3480 (NtSetInformationSymbolicLink.c)
 *     ObSetRefTraceInformation @ 0x1407C4514 (ObSetRefTraceInformation.c)
 *     ObSetRefTraceInformationEx @ 0x1407C45C8 (ObSetRefTraceInformationEx.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PsCreatePartition @ 0x1407FDA4C (PsCreatePartition.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     NtFilterBootOption @ 0x140815AF0 (NtFilterBootOption.c)
 *     SmProcessConfigRequest @ 0x1408195C0 (SmProcessConfigRequest.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140833208 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     NtDisplayString @ 0x140837360 (NtDisplayString.c)
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x14083D0F0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14083D290 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x14083D430 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14083D8B0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x14083DB70 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x14083DE30 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x14083E0F0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14083E2B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x14083E500 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x14083E6B0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14083EAA0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1408406A0 (NtSetDefaultHardErrorPort.c)
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 *     NtSetIntervalProfile @ 0x1408427E0 (NtSetIntervalProfile.c)
 *     NtFlushInstallUILanguage @ 0x140844590 (NtFlushInstallUILanguage.c)
 *     NtSystemDebugControl @ 0x1408459A0 (NtSystemDebugControl.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x14084EDA0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x14084EE60 (NtInitializeRegistry.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140850440 (NtThawRegistry.c)
 *     MmCreateMirror @ 0x140868750 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x14086AD20 (MmIssueMemoryListCommand.c)
 *     MiValidatePageFileCreationParameters @ 0x14086C85C (MiValidatePageFileCreationParameters.c)
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MmManagePartitionCharges @ 0x14087CE38 (MmManagePartitionCharges.c)
 *     MmManagePartitionMoveMemory @ 0x14087D0C8 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionUpdateAttributes @ 0x14087D548 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x14087E770 (MiOpenSpecialPurposeMemory.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408A5504 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408A5864 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     NtDisableLastKnownGood @ 0x1408A6AA0 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     NtSerializeBoot @ 0x1408A6EA0 (NtSerializeBoot.c)
 *     NtSetDebugFilterState @ 0x1408A6EF0 (NtSetDebugFilterState.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     PsOpenProcess @ 0x1408EFC40 (PsOpenProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     NtQueryBootOptions @ 0x140906480 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409490DC (ExpWnfCheckCrossScopeAccess.c)
 *     NtCreateWnfStateName @ 0x14094F1A0 (NtCreateWnfStateName.c)
 *     NtGetNextThread @ 0x140956360 (NtGetNextThread.c)
 *     MiLockUnlockCommon @ 0x140961048 (MiLockUnlockCommon.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     SmProcessCreateRequest @ 0x140967230 (SmProcessCreateRequest.c)
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 *     NtSetInformationObject @ 0x140970880 (NtSetInformationObject.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140978E48 (VrpHandleIoctlLoadDifferencingHive.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtPlugPlayControl @ 0x1409A6850 (NtPlugPlayControl.c)
 *     MiCreatePagingFileMapPrepare @ 0x1409B85F4 (MiCreatePagingFileMapPrepare.c)
 *     MiMapViewOfSection @ 0x1409C31E8 (MiMapViewOfSection.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     PsOpenThread @ 0x140A10530 (PsOpenThread.c)
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 *     NtCreateTokenEx @ 0x140A44080 (NtCreateTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 *     NtEnumerateBootEntries @ 0x140A94460 (NtEnumerateBootEntries.c)
 *     NtTranslateFilePath @ 0x140A94C80 (NtTranslateFilePath.c)
 *     NtManageHotPatch @ 0x140A993D0 (NtManageHotPatch.c)
 *     PfSnSetPrefetcherInformation @ 0x140ACA1BC (PfSnSetPrefetcherInformation.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 *     PfSnQueryPrefetcherInformation @ 0x140AF7B7C (PfSnQueryPrefetcherInformation.c)
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 *     PspSetProcessPriorityClass @ 0x140B10240 (PspSetProcessPriorityClass.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     NtMakePermanentObject @ 0x140B1D750 (NtMakePermanentObject.c)
 *     SmQueryStoreInformation @ 0x140B26304 (SmQueryStoreInformation.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     SmSetStoreInformation @ 0x140B2E9E0 (SmSetStoreInformation.c)
 *     ExpRaiseHardError @ 0x140B33F0C (ExpRaiseHardError.c)
 *     NtQueryBootEntryOrder @ 0x140B34660 (NtQueryBootEntryOrder.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 *     VslTransformDumpKey @ 0x140B69E24 (VslTransformDumpKey.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 *     NtSetSystemPowerState @ 0x140BFD2E0 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rsi
  unsigned int v17; // r14d
  char v18; // r12
  _QWORD *v19; // rcx
  void *v20; // rbx
  _KPROCESS *v21; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v23; // rtt
  PSE_EXPORTS v25; // r15
  int v26; // r11d
  LUID *v27; // r8
  __int64 v28; // r10
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  LUID *v31; // rdx
  __int64 v32; // r9
  _DWORD *v33; // rax
  _UNKNOWN **v34; // r8
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  __int64 v36; // [rsp+50h] [rbp-11h]
  PVOID v37; // [rsp+58h] [rbp-9h]
  __int64 v38; // [rsp+60h] [rbp-1h]
  _DWORD v39[2]; // [rsp+70h] [rbp+Fh] BYREF
  LUID v40; // [rsp+78h] [rbp+17h] BYREF
  int v41; // [rsp+80h] [rbp+1Fh]

  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v38 = *(_QWORD *)(Process + 464);
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
      LODWORD(v36) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v11 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v8, v12, v13);
  }
  else
  {
    v11 = 0LL;
  }
  Object = v11;
  v14 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v2, v3);
  v15 = (__int64)v14;
  v37 = v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14[143] + 284LL));
      v15 = (__int64)v37;
      if ( v37 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    v16 = Object;
    if ( Object )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      v16 = Object;
      if ( Object == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
      v15 = (__int64)v37;
    }
  }
  else
  {
    v16 = Object;
  }
  v40 = PrivilegeValue;
  v17 = 1;
  v39[0] = 1;
  v39[1] = 1;
  v41 = 0;
  if ( !PreviousMode )
  {
    v18 = 1;
    goto LABEL_21;
  }
  if ( v16 )
  {
    if ( (int)v36 < 2 )
    {
      v18 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v16 = (_QWORD *)v15;
  }
  v15 = (__int64)v37;
  v18 = SepPrivilegeCheck((__int64)v16, (__int64)&v40, 1u, 1, PreviousMode);
  v16 = Object;
  v17 = v39[0];
LABEL_18:
  v19 = (_QWORD *)v15;
  if ( v16 )
    v19 = v16;
  v20 = *(void **)v19[19];
  if ( !RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v20) )
  {
    v25 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v20) && !RtlEqualSid(v25->SeLocalServiceSid, v20) )
      goto LABEL_33;
    v26 = 0;
    v27 = &v40;
    v28 = v17;
    do
    {
      Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
      Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
      while ( v27->LowPart != LODWORD(Flink->Flink) || v27->HighPart != HIDWORD(Blink->Flink->Flink) )
      {
        Flink = Blink->Blink;
        Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
        if ( !Flink )
          goto LABEL_43;
      }
      ++v26;
LABEL_43:
      v27 = (LUID *)((char *)v27 + 12);
      --v28;
    }
    while ( v28 );
    v31 = &v40;
    v32 = v17;
    do
    {
      v33 = SepServicesFilterPrivileges;
      v34 = &SepServicesFilterPrivileges;
      while ( v31->LowPart != *v33 || v31->HighPart != *((_DWORD *)*v34 + 1) )
      {
        v33 = v34[1];
        ++v34;
        if ( !v33 )
          goto LABEL_48;
      }
      ++v26;
LABEL_48:
      v31 = (LUID *)((char *)v31 + 12);
      --v32;
    }
    while ( v32 );
    if ( v26 != v17 )
    {
LABEL_33:
      SepAdtPrivilegedServiceAuditAlarm(
        (unsigned int)&Object,
        (unsigned int)&SeSubsystemName,
        0,
        (_DWORD)v16,
        v15,
        (__int64)v39,
        v18);
      v15 = (__int64)v37;
      v16 = Object;
    }
  }
LABEL_21:
  if ( SeTokenLeakTracking )
  {
    if ( v15 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
      v15 = (__int64)v37;
      if ( v37 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
      v16 = Object;
    }
    if ( v16 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v16[143] + 284LL));
      if ( Object == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
      v15 = (__int64)v37;
    }
  }
  v21 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v21[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)v21[1].ActiveProcessors;
  do
  {
    if ( (v15 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v15, 0x75536553u);
      goto LABEL_27;
    }
    v23 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&v21[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v23 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v15 - 48, -1, 0x75536553u);
LABEL_27:
  v37 = 0LL;
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x75536553u);
  return v18;
}
