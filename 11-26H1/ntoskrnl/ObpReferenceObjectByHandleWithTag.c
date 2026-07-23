/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x14092A610
 * Callers:
 *     PspAssignPrimaryToken @ 0x140776B18 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077980C (PsIumEnableOnDemandDebugWithResponse.c)
 *     HalpAcquirePccInterface @ 0x140789C74 (HalpAcquirePccInterface.c)
 *     DbgkpCreateNotificationEvent @ 0x14078CE00 (DbgkpCreateNotificationEvent.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407CA320 (PfSnAppLaunchScenarioControl.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407DAC48 (PopGetPolicyDeviceObject.c)
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     NtChangeProcessState @ 0x1407F71F0 (NtChangeProcessState.c)
 *     NtCreateProcessStateChange @ 0x1407F7770 (NtCreateProcessStateChange.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspCreatePicoProcess @ 0x1408022F0 (PspCreatePicoProcess.c)
 *     NtAlertResumeThread @ 0x1408028B0 (NtAlertResumeThread.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 *     NtQueryTimer @ 0x140840DA0 (NtQueryTimer.c)
 *     ExpProfileCreate @ 0x14084B100 (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     MiGetPagingFileHandle @ 0x140871CE8 (MiGetPagingFileHandle.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     MiInjectThreadForHotPatch @ 0x140876A14 (MiInjectThreadForHotPatch.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 *     NtCreateEnclave @ 0x14087D0E0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14087D4E0 (NtInitializeEnclave.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     MmScrubMemory @ 0x1408843D4 (MmScrubMemory.c)
 *     MiCreateMemoryEvent @ 0x140885798 (MiCreateMemoryEvent.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408ABBC4 (VrpHandleIoctlModifyFlags.c)
 *     NtQuerySection @ 0x1408EBBB0 (NtQuerySection.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 *     ObWaitForSingleObject @ 0x14092A290 (ObWaitForSingleObject.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14093A3C8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14093A55C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14093AE58 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14093B160 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     NtDebugActiveProcess @ 0x140947620 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140947870 (NtRemoveProcessDebug.c)
 *     NtChangeThreadState @ 0x140949110 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x140949500 (NtSuspendThread.c)
 *     NtGetNextThread @ 0x140949FE0 (NtGetNextThread.c)
 *     NtTerminateThread @ 0x14094AF20 (NtTerminateThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MiMapViewOfSectionCommon @ 0x140993EA0 (MiMapViewOfSectionCommon.c)
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409C59E0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     PspQueryWorkingSetWatch @ 0x1409DDA3C (PspQueryWorkingSetWatch.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409EF464 (MiAllocateVirtualMemoryPrepare.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x140A068FC (MiLockUnlockCommon.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x140A2B320 (MiReadWriteVirtualMemory.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PfpSourceGetPrefetchSupport @ 0x140A57B64 (PfpSourceGetPrefetchSupport.c)
 *     MmPrefetchVirtualMemory @ 0x140A57D94 (MmPrefetchVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 *     NtExtendSection @ 0x140A65CF0 (NtExtendSection.c)
 *     NtFlushVirtualMemory @ 0x140A69D30 (NtFlushVirtualMemory.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     NtCreateThreadEx @ 0x140A79100 (NtCreateThreadEx.c)
 *     PspCreateThread @ 0x140A7A214 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140A7C010 (PspCreatePicoThread.c)
 *     PspQueryQuotaLimits @ 0x140A7CBE0 (PspQueryQuotaLimits.c)
 *     NtOpenProcessTokenEx @ 0x140A87780 (NtOpenProcessTokenEx.c)
 *     NtDuplicateObject @ 0x140A88750 (NtDuplicateObject.c)
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 *     NtIsProcessInJob @ 0x140A9F330 (NtIsProcessInJob.c)
 *     NtResetWriteWatch @ 0x140AB8910 (NtResetWriteWatch.c)
 *     NtResumeThread @ 0x140ABA920 (NtResumeThread.c)
 *     NtAssignProcessToJobObject @ 0x140AC7800 (NtAssignProcessToJobObject.c)
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 *     NtLoadEnclaveData @ 0x140AF16E0 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140AF2140 (PfpDeprioritizeOldPagesInWs.c)
 *     PopPowerRequestActionInfo @ 0x140AF441C (PopPowerRequestActionInfo.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF4534 (PopPowerRequestSpecialRequestSet.c)
 *     MiResolveMemoryEvent @ 0x140AF5710 (MiResolveMemoryEvent.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140B01274 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140B0C524 (PsIumGetOnDemandDebugChallenge.c)
 *     NtAlertThread @ 0x140B1DB00 (NtAlertThread.c)
 *     NtAcquireProcessActivityReference @ 0x140B293A0 (NtAcquireProcessActivityReference.c)
 *     NtCreateThreadStateChange @ 0x140B2C140 (NtCreateThreadStateChange.c)
 *     NtSuspendProcess @ 0x140B3E200 (NtSuspendProcess.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140B4168C (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtResumeProcess @ 0x140B437C0 (NtResumeProcess.c)
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140B569E8 (MmGetSectionStrongImageReference.c)
 *     MiMapImageForEnclaveUse @ 0x140B61ED8 (MiMapImageForEnclaveUse.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 *     PspQueryPooledQuotaLimits @ 0x140B713DC (PspQueryPooledQuotaLimits.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14043ECF0 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1404453A0 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExFastReplenishHandleTableEntry @ 0x1404A61B0 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     VfCheckUserHandle @ 0x140C4DC48 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v9; // rdi
  ULONG_PTR v12; // r15
  struct _EX_RUNDOWN_REF *Process; // rbx
  ULONG_PTR Count; // r9
  signed __int64 *v15; // rax
  signed __int64 *v16; // r14
  __int64 v17; // rsi
  signed __int64 v18; // rcx
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  volatile signed __int64 *v21; // rbx
  __int64 v22; // rax
  ULONG_PTR v23; // rbx
  unsigned __int8 v24; // al
  PVOID v25; // r8
  unsigned __int64 v27; // rtt
  ULONG_PTR v28; // r14
  signed __int64 BugCheckParameter4; // rbx
  signed __int64 v30; // r8
  ULONG_PTR HandlePointer; // rax
  __int128 v32; // xmm0
  volatile signed __int64 *v33; // rbx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  signed __int64 v36; // rbx
  int v37; // eax
  int v38; // r10d
  unsigned int v39; // eax
  __int64 v40; // rsi
  unsigned int v41; // esi
  __int64 v42; // r13
  char v43; // si
  _QWORD *HandleExtraInfo; // rax
  int *v45; // r12
  signed __int64 v46; // r8
  void **v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // r8d
  ULONG_PTR v50; // rcx
  __int64 v51; // rax
  signed __int32 v52[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v53; // [rsp+28h] [rbp-80h]
  unsigned __int64 v54; // [rsp+40h] [rbp-68h]
  ULONG_PTR BugCheckParameter1a; // [rsp+48h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v56; // [rsp+50h] [rbp-58h]
  unsigned __int64 v57[10]; // [rsp+58h] [rbp-50h] BYREF
  char v58; // [rsp+B0h] [rbp+8h]
  __int64 v61; // [rsp+E8h] [rbp+40h]
  int v62; // [rsp+E8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v12 = BugCheckParameter1;
  v58 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v56 = Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
      {
LABEL_7:
        LODWORD(v9) = -1073741788;
        return (unsigned int)v9;
      }
      v28 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (a2 & 0xFFE00000) == 0 || !a4 )
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        ObpTraceObjectReferenceIfActive(v28 - 48, 1, Tag);
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v28 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v28, 0x10uLL, BugCheckParameter4);
        *a6 = v28;
        return (unsigned int)v9;
      }
LABEL_111:
      LODWORD(v9) = -1073741790;
      return (unsigned int)v9;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsThreadType && a3 )
        goto LABEL_7;
      if ( (a2 & 0xFFE00000) == 0 || !a4 )
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        ObpTraceObjectReferenceIfActive((__int64)&CurrentThread[-1].SchedulerAssistLastYieldBoostTime, 1, Tag);
        v36 = _InterlockedIncrement64(&CurrentThread[-1].SchedulerAssistLastYieldBoostTime);
        if ( v36 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v36);
        *a6 = CurrentThread;
        return (unsigned int)v9;
      }
      goto LABEL_111;
    }
    if ( a4 )
      return 3221225480LL;
    Count = ObpKernelHandleTable;
    v12 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v61 = Count;
    goto LABEL_14;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    if ( (HIDWORD(Process[62].Ptr) & 0x4000000) == 0 )
    {
LABEL_70:
      LODWORD(v9) = -1073741816;
LABEL_40:
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return (unsigned int)v9;
    }
    Count = Process[96].Count;
    v61 = Count;
  }
  else
  {
    v61 = 0LL;
    _m_prefetchw(&Process[61]);
    v27 = Process[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 == _InterlockedCompareExchange64((volatile signed __int64 *)&Process[61], v27 + 2, v27)
      || ExfAcquireRundownProtection(Process + 61) )
    {
      Count = Process[96].Count;
      v61 = Count;
      if ( !Count )
      {
        ExReleaseRundownProtection_0(Process + 61);
        Count = 0LL;
      }
    }
    else
    {
      Count = 0LL;
    }
    v58 = 1;
  }
  if ( !Count )
    goto LABEL_70;
  if ( Count == ObpKernelHandleTable )
  {
LABEL_62:
    LODWORD(v9) = -1073741816;
LABEL_38:
    if ( v58 )
      ExReleaseRundownProtection_0(Process + 61);
    goto LABEL_40;
  }
LABEL_14:
  if ( (v12 & 0x3FC) == 0 || (v15 = (signed __int64 *)ExpLookupHandleTableEntry(Count, v12), (v16 = v15) == 0LL) )
  {
LABEL_60:
    if ( v12 )
      ExHandleLogBadReference(Count, v12, KeGetCurrentThread()->PreviousMode);
    goto LABEL_62;
  }
  _m_prefetchw(v15);
  v17 = *v15;
  v18 = v15[1];
LABEL_17:
  v57[1] = v18;
  v57[0] = v17;
  do
  {
    if ( (v17 & 0x1FFFE) == 0 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v16);
          v30 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v30 )
          {
            Process = v56;
            goto LABEL_60;
          }
          ExpBlockOnLockedHandleEntry(Count, v16, v30);
          Count = v61;
        }
      }
      while ( v30 != _InterlockedCompareExchange64(v16, v30 - 1, v30) );
      HandlePointer = ExGetHandlePointer(v16);
      v32 = *(_OWORD *)v16;
      BugCheckParameter1a = HandlePointer;
      v33 = (volatile signed __int64 *)HandlePointer;
      *(_OWORD *)v57 = v32;
      v34 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v16) + 1);
      v35 = _InterlockedExchangeAdd64(v33, v34);
      if ( v35 <= 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v33 + 6), 0x10uLL, v34 + v35);
      _InterlockedIncrement64(v16);
      _InterlockedOr(v52, 0);
      if ( *(_QWORD *)(v61 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v61 + 48), 0LL);
      goto LABEL_30;
    }
    if ( (v17 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(Count, v16, v17);
      _m_prefetchw(v16);
      v17 = *v16;
      v18 = v16[1];
      Count = v61;
      goto LABEL_17;
    }
    *(_QWORD *)&v19 = v17;
    *((_QWORD *)&v19 + 1) = v18;
    v20 = _InterlockedCompareExchange128(v16, v18, v17 - 2, (signed __int64 *)&v19);
    v17 = v19;
    *(_OWORD *)v57 = v19;
    v54 = *((_QWORD *)&v19 + 1);
    v18 = *((_QWORD *)&v19 + 1);
  }
  while ( !v20 );
  if ( (unsigned __int16)((unsigned __int64)v17 >> 1) == 16 )
  {
    v57[0] = v17 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)(((unsigned __int64)v17 >> 1) - 1));
    v21 = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)v57);
    BugCheckParameter1a = (ULONG_PTR)v21;
    v22 = _InterlockedExchangeAdd64(v21, 0x7FF0uLL);
    if ( v22 <= 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v21 + 6), 0x10uLL, v22 + 32752);
    v37 = ExFastReplenishHandleTableEntry(v16, v57, 32752);
    if ( v37 )
      _InterlockedAdd64(v21, -v37);
LABEL_30:
    v54 = v57[1];
    v17 = v57[0];
    goto LABEL_31;
  }
  BugCheckParameter1a = ExGetHandlePointer((__int64 *)v57);
LABEL_31:
  v23 = BugCheckParameter1a;
  ObpTraceObjectReferenceIfActive(BugCheckParameter1a, 1, Tag);
  v57[0] = v23 >> 8;
  v24 = ObHeaderCookie ^ *(_BYTE *)(v23 + 24) ^ BYTE1(v23);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v24 )
  {
    v25 = (PVOID)ObTypeIndexTable[v24];
    if ( !v25 || v25 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v25, 0LL, 0LL);
    if ( a3 )
    {
      LODWORD(v9) = -1073741788;
LABEL_37:
      ObfDereferenceObjectWithTag((PVOID)(v23 + 48), Tag);
      Process = v56;
      goto LABEL_38;
    }
  }
  v38 = a2;
  v39 = v54 & 0x1FFFFFF;
  v54 &= 0x1FFFFFFu;
  if ( a4 )
  {
    if ( (~v39 & a2) != 0 )
    {
      LODWORD(v9) = -1073741790;
      goto LABEL_37;
    }
    if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 )
    {
      v50 = v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F];
      v51 = *(_QWORD *)v50;
      if ( *(_BYTE *)(*(_QWORD *)v50 + 24LL) )
      {
        if ( v51 && *(_QWORD *)(v51 + 16) == 1LL )
        {
          LODWORD(v9) = -1073700858;
          goto LABEL_37;
        }
      }
    }
    v39 = v54;
  }
  v40 = v17 >> 17;
  if ( a7 )
  {
    v41 = v40 & 7;
    a7[1] = v39;
    *a7 = v41;
    LODWORD(v40) = v41 >> 2;
  }
  else
  {
    LOBYTE(v40) = (unsigned __int8)v40 >> 2;
  }
  v42 = v61;
  v43 = v40 & 1;
  if ( a8 )
  {
    if ( *(_DWORD *)(v61 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo((unsigned int *)v61, v12);
      if ( HandleExtraInfo )
        *a8 = *HandleExtraInfo;
    }
  }
  if ( v43 )
  {
    if ( v38 )
    {
      if ( *(_DWORD *)(v61 + 4) )
      {
        v45 = (int *)ExpGetHandleExtraInfo((unsigned int *)v61, v12);
        if ( v45 )
        {
          BugCheckParameter1a = (ULONG_PTR)KeGetCurrentThread();
          --*(_WORD *)(BugCheckParameter1a + 484);
          do
          {
            while ( 1 )
            {
              _m_prefetchw(v16);
              v46 = *v16;
              if ( (*v16 & 1) != 0 )
                break;
              if ( !v46 )
              {
                KeLeaveCriticalRegionThread(BugCheckParameter1a);
                LODWORD(v9) = -1073741816;
                goto LABEL_37;
              }
              ExpBlockOnLockedHandleEntry(v61, v16, v46);
            }
          }
          while ( v46 != _InterlockedCompareExchange64(v16, v46 - 1, v46) );
          _m_prefetchw(v45);
          v62 = *v45;
          if ( v23 == ExGetHandlePointer(v16) )
          {
            if ( (a2 & v62) != 0 )
            {
              *v45 = v62 & ~a2;
              v47 = (void **)OBJECT_HEADER_TO_AUDIT_INFO(v23);
              if ( v47 )
                v9 = *v47;
              SeOperationAuditAlarm(
                v48,
                v23 + 48,
                v12,
                (unsigned __int16 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v57[0]) ^ (unsigned __int64)*(unsigned __int8 *)(v23 + 24)]
                                   + 16),
                v49,
                v53,
                v9);
            }
            LOBYTE(v9) = 1;
          }
          _InterlockedIncrement64(v16);
          _InterlockedOr(v52, 0);
          if ( *(_QWORD *)(v42 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v42 + 48), 0LL);
          KeLeaveCriticalRegionThread(BugCheckParameter1a);
          if ( !(_BYTE)v9 )
          {
            LODWORD(v9) = -1073741816;
            goto LABEL_37;
          }
        }
      }
    }
  }
  *a6 = v23 + 48;
  if ( v58 )
    ExReleaseRundownProtection_0(v56 + 61);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0LL;
}
