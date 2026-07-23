/*
 * XREFs of ObOpenObjectByPointer @ 0x140906B20
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     ObInitServerSilo @ 0x1407C5350 (ObInitServerSilo.c)
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1407E0674 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     TtmiOpenDefaultTerminal @ 0x1407F1A70 (TtmiOpenDefaultTerminal.c)
 *     NtCreateCpuPartition @ 0x1407F7440 (NtCreateCpuPartition.c)
 *     SmGetRegistrationInfo @ 0x14081F03C (SmGetRegistrationInfo.c)
 *     CmpInitializeRegistryProcess @ 0x14085D3B4 (CmpInitializeRegistryProcess.c)
 *     MiOpenSpecialPurposeMemory @ 0x140884B70 (MiOpenSpecialPurposeMemory.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     PiCMOpenObjectKey @ 0x14091C7BC (PiCMOpenObjectKey.c)
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     PiCMDuplicateRegistryHandle @ 0x14091D314 (PiCMDuplicateRegistryHandle.c)
 *     ExGetNextProcess @ 0x14091E590 (ExGetNextProcess.c)
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14093EB94 (CmConvertHandleToKernelHandle.c)
 *     DbgkOpenProcessDebugPort @ 0x140948E50 (DbgkOpenProcessDebugPort.c)
 *     NtGetNextThread @ 0x140949FE0 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 *     ObpSetDeviceMap @ 0x140A2236C (ObpSetDeviceMap.c)
 *     sub_140A231CC @ 0x140A231CC (sub_140A231CC.c)
 *     EtwpCapturePreviousRegistryData @ 0x140A376AC (EtwpCapturePreviousRegistryData.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PspCreateObjectHandle @ 0x140A7BDE4 (PspCreateObjectHandle.c)
 *     NtOpenProcessTokenEx @ 0x140A87780 (NtOpenProcessTokenEx.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140AAB8A4 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     EtwpOpenConsumer @ 0x140AB3A1C (EtwpOpenConsumer.c)
 *     NtOpenPrivateNamespace @ 0x140ADB620 (NtOpenPrivateNamespace.c)
 *     ObOpenObjectByPointerWithTag @ 0x140AE0A60 (ObOpenObjectByPointerWithTag.c)
 *     DbgkpOpenHandles @ 0x140AEC2B4 (DbgkpOpenHandles.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B06CA0 (KiAvailableCpusProcessWorkItemCallback.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140B520B4 (MmManagePartitionGetMemoryEvents.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140B70848 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
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
 *     SepDeleteAccessState @ 0x14040CC90 (SepDeleteAccessState.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140436600 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  KPROCESSOR_MODE v10; // r12
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r15
  signed __int64 *p_WaitBlockList; // r12
  void *v18; // rdx
  LegacyAutoBoost *v19; // rbx
  struct _LIST_ENTRY *v20; // rbx
  struct _LIST_ENTRY *v21; // rax
  NTSTATUS v22; // ebx
  NTSTATUS v23; // edi
  signed __int64 v24; // r8
  _KPROCESS *v25; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v27; // rtt
  PACCESS_TOKEN v28; // rcx
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  struct _KTHREAD *v32; // [rsp+68h] [rbp-200h]
  __int128 v33; // [rsp+78h] [rbp-1F0h] BYREF
  struct _LIST_ENTRY *v34; // [rsp+88h] [rbp-1E0h]
  __int64 v35; // [rsp+90h] [rbp-1D8h]
  _QWORD v36[20]; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD v37[28]; // [rsp+140h] [rbp-128h] BYREF

  memset_0(v37, 0, sizeof(v37));
  memset_0(v36, 0, sizeof(v36));
  v10 = AccessMode;
  v11 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v11 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v11->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpStackTraceLock.AbCompletedIoQoSBoostCount;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    if ( !PassedAccessState )
    {
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)&v33 + 1) = 0LL;
      Process = (__int64)CurrentThread->ApcState.Process;
      v35 = *(_QWORD *)(Process + 464);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        v19 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v14);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&CurrentThread[1].WaitBlockList,
            0,
            v19,
            (struct _KTHREAD *)((char *)CurrentThread + 1424));
        if ( v19 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v19, v18);
          else
            *((_BYTE *)v19 + 10) = 1;
        }
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v20 = (struct _LIST_ENTRY *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(v20, 0x75536553u);
          DWORD2(v33) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        else
        {
          v20 = 0LL;
        }
        if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_WaitBlockList);
        KeAbPostRelease((unsigned __int64)p_WaitBlockList);
        KeLeaveCriticalRegionThread((__int64)v32);
        v10 = AccessMode;
      }
      else
      {
        v20 = 0LL;
      }
      *(_QWORD *)&v33 = v20;
      v21 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v13, v14);
      v34 = v21;
      if ( SeTokenLeakTracking )
      {
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v21[71].Blink[17].Blink + 1);
          if ( v21 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
        }
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v20[71].Blink[17].Blink + 1);
          if ( v20 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
        }
      }
      v22 = SepCreateAccessStateFromSubjectContext(
              &v33,
              v36,
              v37,
              DesiredAccess,
              &v11->TypeInfo.GenericMapping.GenericRead);
      if ( v22 < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        return v22;
      }
      PassedAccessState = (PACCESS_STATE)v36;
    }
    v23 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, v10, 0LL, 0, 0LL, Handle);
    if ( v23 < 0 )
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    if ( PassedAccessState == (PACCESS_STATE)v36 )
    {
      SepDeleteAccessState((__int64)PassedAccessState);
      if ( SeTokenLeakTracking )
      {
        PrimaryToken = PassedAccessState->SubjectSecurityContext.PrimaryToken;
        if ( PrimaryToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
          if ( PassedAccessState->SubjectSecurityContext.PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
        }
        ClientToken = PassedAccessState->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
          if ( PassedAccessState->SubjectSecurityContext.ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
            __debugbreak();
        }
      }
      v24 = (signed __int64)PassedAccessState->SubjectSecurityContext.PrimaryToken;
      v25 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v25[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v25[1].ActiveProcessors;
      do
      {
        if ( (v24 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v24, 0x75536553u);
          goto LABEL_30;
        }
        v27 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v25[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v27 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v24 - 48, -1, 0x75536553u);
LABEL_30:
      v28 = PassedAccessState->SubjectSecurityContext.ClientToken;
      PassedAccessState->SubjectSecurityContext.PrimaryToken = 0LL;
      if ( v28 )
        ObfDereferenceObjectWithTag(v28, 0x75536553u);
      PassedAccessState->SubjectSecurityContext.ClientToken = 0LL;
    }
    return v23;
  }
  return result;
}
