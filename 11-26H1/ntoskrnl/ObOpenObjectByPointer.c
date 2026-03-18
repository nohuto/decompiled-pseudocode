/*
 * XREFs of ObOpenObjectByPointer @ 0x14092AFF0
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     ObInitServerSilo @ 0x1407C22F0 (ObInitServerSilo.c)
 *     PfTStart @ 0x1407C67E4 (PfTStart.c)
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1407DC454 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     TtmiOpenDefaultTerminal @ 0x1407EBF0C (TtmiOpenDefaultTerminal.c)
 *     NtCreateCpuPartition @ 0x1407F18E0 (NtCreateCpuPartition.c)
 *     SmGetRegistrationInfo @ 0x140818E2C (SmGetRegistrationInfo.c)
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 *     MiOpenSpecialPurposeMemory @ 0x14087E770 (MiOpenSpecialPurposeMemory.c)
 *     PsOpenProcess @ 0x1408EFC40 (PsOpenProcess.c)
 *     NtGetNextThread @ 0x140956360 (NtGetNextThread.c)
 *     ExGetNextProcess @ 0x140969F30 (ExGetNextProcess.c)
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14097CB84 (CmConvertHandleToKernelHandle.c)
 *     DbgkOpenProcessDebugPort @ 0x140987150 (DbgkOpenProcessDebugPort.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1409FE890 (PspOneDirectionSecurityDomainCombine.c)
 *     PiCMOpenObjectKey @ 0x1409FFA20 (PiCMOpenObjectKey.c)
 *     PspCombineSecurityDomains @ 0x140A0021C (PspCombineSecurityDomains.c)
 *     PiCMDuplicateRegistryHandle @ 0x140A007EC (PiCMDuplicateRegistryHandle.c)
 *     PspCreateObjectHandle @ 0x140A0406C (PspCreateObjectHandle.c)
 *     WmipIoControl @ 0x140A0D940 (WmipIoControl.c)
 *     PsOpenThread @ 0x140A10530 (PsOpenThread.c)
 *     ObpSetDeviceMap @ 0x140A18D3C (ObpSetDeviceMap.c)
 *     sub_140A19B9C @ 0x140A19B9C (sub_140A19B9C.c)
 *     EtwpCapturePreviousRegistryData @ 0x140A24B9C (EtwpCapturePreviousRegistryData.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     NtOpenProcessTokenEx @ 0x140A81910 (NtOpenProcessTokenEx.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140AAD7E4 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     NtOpenPrivateNamespace @ 0x140ADE430 (NtOpenPrivateNamespace.c)
 *     ObOpenObjectByPointerWithTag @ 0x140AE2EE0 (ObOpenObjectByPointerWithTag.c)
 *     DbgkpOpenHandles @ 0x140AE97C4 (DbgkpOpenHandles.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B05090 (KiAvailableCpusProcessWorkItemCallback.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     EtwpOpenConsumer @ 0x140B29A24 (EtwpOpenConsumer.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140B4F824 (MmManagePartitionGetMemoryEvents.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140B6D478 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 * Callees:
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
 *     SepDeleteAccessState @ 0x140418680 (SepDeleteAccessState.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14043DAF0 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
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
  _KTRAP_FRAME *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  _KTRAP_FRAME *v23; // rax
  NTSTATUS v24; // ebx
  NTSTATUS v25; // edi
  signed __int64 v26; // r8
  _KPROCESS *v27; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v29; // rtt
  PACCESS_TOKEN v30; // rcx
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  struct _KTHREAD *v34; // [rsp+68h] [rbp-200h]
  __int128 v35; // [rsp+78h] [rbp-1F0h] BYREF
  _KTRAP_FRAME *v36; // [rsp+88h] [rbp-1E0h]
  __int64 v37; // [rsp+90h] [rbp-1D8h]
  _QWORD v38[20]; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD v39[28]; // [rsp+140h] [rbp-128h] BYREF

  memset_0(v39, 0, sizeof(v39));
  memset_0(v38, 0, sizeof(v38));
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
      ++*(_DWORD *)&stru_140F132C8.SavedApcStateFill[24];
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    if ( !PassedAccessState )
    {
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)&v35 + 1) = 0LL;
      Process = (__int64)CurrentThread->ApcState.Process;
      v37 = *(_QWORD *)(Process + 464);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
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
          v20 = (_KTRAP_FRAME *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(v20, 0x75536553u);
          DWORD2(v35) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        else
        {
          v20 = 0LL;
        }
        if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_WaitBlockList);
        KeAbPostRelease((unsigned __int64)p_WaitBlockList);
        KeLeaveCriticalRegionThread((__int64)v34, v21, v22);
        v10 = AccessMode;
      }
      else
      {
        v20 = 0LL;
      }
      *(_QWORD *)&v35 = v20;
      v23 = (_KTRAP_FRAME *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v13, v14);
      v36 = v23;
      if ( SeTokenLeakTracking )
      {
        if ( v23 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v23[2].Rbp + 284));
          if ( v23 == RtlpBootStatHandleLock.TrapFrame )
            __debugbreak();
        }
        if ( v20 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20[2].Rbp + 284));
          if ( v20 == RtlpBootStatHandleLock.TrapFrame )
            __debugbreak();
        }
      }
      v24 = SepCreateAccessStateFromSubjectContext(
              &v35,
              v38,
              v39,
              DesiredAccess,
              &v11->TypeInfo.GenericMapping.GenericRead);
      if ( v24 < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        return v24;
      }
      PassedAccessState = (PACCESS_STATE)v38;
    }
    v25 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, v10, 0LL, 0, 0LL, Handle);
    if ( v25 < 0 )
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    if ( PassedAccessState == (PACCESS_STATE)v38 )
    {
      SepDeleteAccessState((__int64)PassedAccessState);
      if ( SeTokenLeakTracking )
      {
        PrimaryToken = PassedAccessState->SubjectSecurityContext.PrimaryToken;
        if ( PrimaryToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
          if ( PassedAccessState->SubjectSecurityContext.PrimaryToken == RtlpBootStatHandleLock.TrapFrame )
            __debugbreak();
        }
        ClientToken = PassedAccessState->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
          if ( PassedAccessState->SubjectSecurityContext.ClientToken == RtlpBootStatHandleLock.TrapFrame )
            __debugbreak();
        }
      }
      v26 = (signed __int64)PassedAccessState->SubjectSecurityContext.PrimaryToken;
      v27 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v27[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v27[1].ActiveProcessors;
      do
      {
        if ( (v26 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v26, 0x75536553u);
          goto LABEL_30;
        }
        v29 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v27[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v29 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v26 - 48, -1, 0x75536553u);
LABEL_30:
      v30 = PassedAccessState->SubjectSecurityContext.ClientToken;
      PassedAccessState->SubjectSecurityContext.PrimaryToken = 0LL;
      if ( v30 )
        ObfDereferenceObjectWithTag(v30, 0x75536553u);
      PassedAccessState->SubjectSecurityContext.ClientToken = 0LL;
    }
    return v25;
  }
  return result;
}
