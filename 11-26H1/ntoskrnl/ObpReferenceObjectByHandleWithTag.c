/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x1408FA680
 * Callers:
 *     PspAssignPrimaryToken @ 0x140773B18 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x140776964 (PsIumEnableOnDemandDebugWithResponse.c)
 *     HalpAcquirePccInterface @ 0x140787144 (HalpAcquirePccInterface.c)
 *     DbgkpCreateNotificationEvent @ 0x14078A2D0 (DbgkpCreateNotificationEvent.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407C72C0 (PfSnAppLaunchScenarioControl.c)
 *     PopCreateHiberFile @ 0x1407CFB0C (PopCreateHiberFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407D7628 (PopGetPolicyDeviceObject.c)
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     NtChangeProcessState @ 0x1407F1690 (NtChangeProcessState.c)
 *     NtCreateProcessStateChange @ 0x1407F1C10 (NtCreateProcessStateChange.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F2CB4 (PspReferenceCpuPartitionByHandle.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspCreatePicoProcess @ 0x1407FC8C0 (PspCreatePicoProcess.c)
 *     NtAlertResumeThread @ 0x1407FCE80 (NtAlertResumeThread.c)
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 *     NtQueryTimer @ 0x14083AB60 (NtQueryTimer.c)
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     MiGetPagingFileHandle @ 0x14086B908 (MiGetPagingFileHandle.c)
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 *     MiInjectThreadForHotPatch @ 0x1408706B4 (MiInjectThreadForHotPatch.c)
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MiQueryProcessActivePatches @ 0x140874330 (MiQueryProcessActivePatches.c)
 *     NtCreateEnclave @ 0x140876D00 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140877100 (NtInitializeEnclave.c)
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 *     MmScrubMemory @ 0x14087DFD4 (MmScrubMemory.c)
 *     MiCreateMemoryEvent @ 0x14087F398 (MiCreateMemoryEvent.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408A5754 (VrpHandleIoctlModifyFlags.c)
 *     NtQuerySection @ 0x1408E55F0 (NtQuerySection.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 *     ObWaitForSingleObject @ 0x1408FA300 (ObWaitForSingleObject.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     MmQueryVirtualMemory @ 0x14091F870 (MmQueryVirtualMemory.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14094A070 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 *     NtGetNextThread @ 0x140956360 (NtGetNextThread.c)
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x1409574F0 (NtTerminateThread.c)
 *     NtProtectVirtualMemory @ 0x14095E180 (NtProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14095F3F0 (MmFreeVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x140961048 (MiLockUnlockCommon.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1409783B8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14097854C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140978E48 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140979150 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     NtDebugActiveProcess @ 0x140985620 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140985870 (NtRemoveProcessDebug.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 *     MiMapViewOfSectionCommon @ 0x1409C2EC0 (MiMapViewOfSectionCommon.c)
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409F2C94 (MiAllocateVirtualMemoryPrepare.c)
 *     NtCreateThreadEx @ 0x140A008A0 (NtCreateThreadEx.c)
 *     PspCreateThread @ 0x140A0175C (PspCreateThread.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     PspCreatePicoThread @ 0x140A041C0 (PspCreatePicoThread.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x140A21D00 (MiReadWriteVirtualMemory.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     PfpSourceGetPrefetchSupport @ 0x140A4E874 (PfpSourceGetPrefetchSupport.c)
 *     MmPrefetchVirtualMemory @ 0x140A4EAA4 (MmPrefetchVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x140A53F9C (PsReferencePartitionByHandle.c)
 *     NtExtendSection @ 0x140A58770 (NtExtendSection.c)
 *     NtFlushVirtualMemory @ 0x140A5CD70 (NtFlushVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x140A6B5B0 (PspQueryQuotaLimits.c)
 *     NtOpenProcessTokenEx @ 0x140A81910 (NtOpenProcessTokenEx.c)
 *     NtDuplicateObject @ 0x140A828E0 (NtDuplicateObject.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PspQueryWorkingSetWatch @ 0x140A8C1D4 (PspQueryWorkingSetWatch.c)
 *     MiPrepareWriteWatchPacket @ 0x140A8DCD0 (MiPrepareWriteWatchPacket.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 *     NtIsProcessInJob @ 0x140A9C530 (NtIsProcessInJob.c)
 *     NtResetWriteWatch @ 0x140AB72D0 (NtResetWriteWatch.c)
 *     NtResumeThread @ 0x140AB9500 (NtResumeThread.c)
 *     NtAssignProcessToJobObject @ 0x140AC5B90 (NtAssignProcessToJobObject.c)
 *     NtChangeThreadState @ 0x140AD4B20 (NtChangeThreadState.c)
 *     NtSuspendThread @ 0x140AD4F10 (NtSuspendThread.c)
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 *     NtLoadEnclaveData @ 0x140AEE740 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x140AEF1A0 (PfpDeprioritizeOldPagesInWs.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 *     PopPowerRequestActionInfo @ 0x140AF1B4C (PopPowerRequestActionInfo.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF1C64 (PopPowerRequestSpecialRequestSet.c)
 *     MiResolveMemoryEvent @ 0x140AF2F20 (MiResolveMemoryEvent.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140AFF5E4 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140B0ADD8 (PsIumGetOnDemandDebugChallenge.c)
 *     NtAlertThread @ 0x140B1B8F0 (NtAlertThread.c)
 *     NtAcquireProcessActivityReference @ 0x140B272F0 (NtAcquireProcessActivityReference.c)
 *     NtCreateThreadStateChange @ 0x140B2A0C0 (NtCreateThreadStateChange.c)
 *     NtSuspendProcess @ 0x140B3BF80 (NtSuspendProcess.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140B3F65C (DbgkpWerInitializeDeferredLiveDump.c)
 *     NtResumeProcess @ 0x140B417B0 (NtResumeProcess.c)
 *     MiCombineIdenticalPages @ 0x140B49E94 (MiCombineIdenticalPages.c)
 *     MmGetSectionStrongImageReference @ 0x140B54148 (MmGetSectionStrongImageReference.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 *     PspQueryPooledQuotaLimits @ 0x140B6DF2C (PspQueryPooledQuotaLimits.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x1404461F0 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14044D280 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14046C9F0 (ExHandleLogBadReference.c)
 *     ExFastReplenishHandleTableEntry @ 0x1404ACB20 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        POBJECT_TYPE *a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rdi
  POBJECT_TYPE *v10; // r13
  ULONG_PTR v12; // r15
  struct _EX_RUNDOWN_REF *Process; // rbx
  ULONG_PTR Count; // r9
  POBJECT_TYPE **v15; // rax
  POBJECT_TYPE **v16; // r14
  __int64 v17; // rsi
  signed __int64 v18; // rcx
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  volatile signed __int64 *v21; // rbx
  __int64 v22; // rax
  ULONG_PTR v23; // rbx
  __int64 v24; // rdx
  PVOID v25; // r8
  unsigned __int8 v26; // al
  unsigned __int64 v28; // rtt
  ULONG_PTR v29; // r14
  signed __int64 BugCheckParameter4; // rbx
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
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 *v49; // rax
  int v50; // ecx
  int v51; // r8d
  ULONG_PTR v52; // rcx
  __int64 v53; // rax
  signed __int32 v54[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v55; // [rsp+28h] [rbp-80h]
  unsigned __int64 v56; // [rsp+40h] [rbp-68h]
  ULONG_PTR BugCheckParameter1a; // [rsp+48h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v58; // [rsp+50h] [rbp-58h]
  unsigned __int64 v59[10]; // [rsp+58h] [rbp-50h] BYREF
  char v60; // [rsp+B0h] [rbp+8h]
  int v61; // [rsp+B8h] [rbp+10h]
  __int64 v63; // [rsp+E8h] [rbp+40h]
  int v64; // [rsp+E8h] [rbp+40h]

  v61 = a2;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = a3;
  v12 = BugCheckParameter1;
  v60 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v58 = Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( a3 != PsProcessType && a3 )
      {
LABEL_7:
        LODWORD(v9) = -1073741788;
        return (unsigned int)v9;
      }
      v29 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (a2 & 0xFFE00000) == 0 || !a4 )
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        ObpTraceObjectReferenceIfActive(v29 - 48, 1, Tag);
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v29 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v29, 0x10uLL, BugCheckParameter4);
        *a6 = v29;
        return (unsigned int)v9;
      }
LABEL_111:
      LODWORD(v9) = -1073741790;
      return (unsigned int)v9;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( a3 != PsThreadType && a3 )
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
    v63 = Count;
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, (__int64)a3);
      return (unsigned int)v9;
    }
    Count = Process[96].Count;
    v63 = Count;
  }
  else
  {
    v63 = 0LL;
    _m_prefetchw(&Process[61]);
    v28 = Process[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v28 == _InterlockedCompareExchange64((volatile signed __int64 *)&Process[61], v28 + 2, v28)
      || ExfAcquireRundownProtection(Process + 61) )
    {
      Count = Process[96].Count;
      v63 = Count;
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
    v60 = 1;
  }
  if ( !Count )
    goto LABEL_70;
  if ( Count == ObpKernelHandleTable )
  {
LABEL_62:
    LODWORD(v9) = -1073741816;
LABEL_38:
    if ( v60 )
      ExReleaseRundownProtection_0(Process + 61);
    goto LABEL_40;
  }
LABEL_14:
  if ( (v12 & 0x3FC) == 0 || (v15 = (POBJECT_TYPE **)ExpLookupHandleTableEntry(Count, v12), (v16 = v15) == 0LL) )
  {
LABEL_60:
    if ( v12 )
      ExHandleLogBadReference(Count, v12, KeGetCurrentThread()->PreviousMode);
    goto LABEL_62;
  }
  _m_prefetchw(v15);
  v17 = (__int64)*v15;
  v18 = (signed __int64)v15[1];
LABEL_17:
  v59[1] = v18;
  v59[0] = v17;
  do
  {
    if ( (v17 & 0x1FFFE) == 0 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v16);
          a3 = *v16;
          if ( ((unsigned __int8)*v16 & 1) != 0 )
            break;
          if ( !a3 )
          {
            Process = v58;
            goto LABEL_60;
          }
          ExpBlockOnLockedHandleEntry(Count, v16, a3);
          Count = v63;
        }
      }
      while ( a3 != (POBJECT_TYPE *)_InterlockedCompareExchange64(
                                      (volatile signed __int64 *)v16,
                                      (signed __int64)a3 - 1,
                                      (signed __int64)a3) );
      HandlePointer = ExGetHandlePointer((__int64 *)v16);
      v32 = *(_OWORD *)v16;
      BugCheckParameter1a = HandlePointer;
      v33 = (volatile signed __int64 *)HandlePointer;
      *(_OWORD *)v59 = v32;
      v34 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v16) + 1);
      v35 = _InterlockedExchangeAdd64(v33, v34);
      if ( v35 <= 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v33 + 6), 0x10uLL, v34 + v35);
      _InterlockedIncrement64((volatile signed __int64 *)v16);
      _InterlockedOr(v54, 0);
      if ( *(_QWORD *)(v63 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v63 + 48), 0LL);
      goto LABEL_30;
    }
    if ( (v17 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(Count, v16, v17);
      _m_prefetchw(v16);
      v17 = (__int64)*v16;
      v18 = (signed __int64)v16[1];
      Count = v63;
      goto LABEL_17;
    }
    *(_QWORD *)&v19 = v17;
    *((_QWORD *)&v19 + 1) = v18;
    v20 = _InterlockedCompareExchange128((volatile signed __int64 *)v16, v18, v17 - 2, (signed __int64 *)&v19);
    a2 = *((_QWORD *)&v19 + 1);
    v17 = v19;
    *(_OWORD *)v59 = v19;
    v56 = *((_QWORD *)&v19 + 1);
    v18 = *((_QWORD *)&v19 + 1);
  }
  while ( !v20 );
  if ( (unsigned __int16)((unsigned __int64)v17 >> 1) == 16 )
  {
    v59[0] = v17 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)(((unsigned __int64)v17 >> 1) - 1));
    v21 = (volatile signed __int64 *)ExGetHandlePointer((__int64 *)v59);
    BugCheckParameter1a = (ULONG_PTR)v21;
    v22 = _InterlockedExchangeAdd64(v21, 0x7FF0uLL);
    if ( v22 <= 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v21 + 6), 0x10uLL, v22 + 32752);
    v37 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v16, v59, 32752);
    if ( v37 )
      _InterlockedAdd64(v21, -v37);
LABEL_30:
    v56 = v59[1];
    v17 = v59[0];
    goto LABEL_31;
  }
  BugCheckParameter1a = ExGetHandlePointer((__int64 *)v59);
LABEL_31:
  v23 = BugCheckParameter1a;
  ObpTraceObjectReferenceIfActive(BugCheckParameter1a, 1, Tag);
  v59[0] = v23 >> 8;
  v26 = ObHeaderCookie ^ *(_BYTE *)(v23 + 24) ^ BYTE1(v23);
  if ( !v10 || *((_BYTE *)v10 + 40) != v26 )
  {
    v25 = (PVOID)ObTypeIndexTable[v26];
    if ( !v25 || v25 == MmBadPointer )
      KeBugCheckEx(0x189u, v23, (ULONG_PTR)v25, 0LL, 0LL);
    if ( v10 )
    {
      LODWORD(v9) = -1073741788;
LABEL_37:
      ObfDereferenceObjectWithTag((PVOID)(v23 + 48), Tag);
      Process = v58;
      goto LABEL_38;
    }
  }
  v38 = v61;
  v39 = v56 & 0x1FFFFFF;
  v56 &= 0x1FFFFFFu;
  if ( a4 )
  {
    if ( (~v39 & v61) != 0 )
    {
      LODWORD(v9) = -1073741790;
      goto LABEL_37;
    }
    if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 )
    {
      v52 = v23 - ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 0x7F];
      v53 = *(_QWORD *)v52;
      if ( *(_BYTE *)(*(_QWORD *)v52 + 24LL) )
      {
        if ( v53 && *(_QWORD *)(v53 + 16) == 1LL )
        {
          LODWORD(v9) = -1073700858;
          goto LABEL_37;
        }
      }
    }
    v39 = v56;
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
  v42 = v63;
  v43 = v40 & 1;
  if ( a8 )
  {
    if ( *(_DWORD *)(v63 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v63, v12);
      if ( HandleExtraInfo )
        *a8 = *HandleExtraInfo;
    }
  }
  if ( v43 )
  {
    if ( v38 )
    {
      if ( *(_DWORD *)(v63 + 4) )
      {
        v45 = (int *)ExpGetHandleExtraInfo(v63, v12);
        if ( v45 )
        {
          BugCheckParameter1a = (ULONG_PTR)KeGetCurrentThread();
          --*(_WORD *)(BugCheckParameter1a + 484);
          do
          {
            while ( 1 )
            {
              _m_prefetchw(v16);
              v46 = (signed __int64)*v16;
              if ( ((unsigned __int8)*v16 & 1) != 0 )
                break;
              if ( !v46 )
              {
                KeLeaveCriticalRegionThread(BugCheckParameter1a, v24, 0LL);
                LODWORD(v9) = -1073741816;
                goto LABEL_37;
              }
              ExpBlockOnLockedHandleEntry(v63, v16, v46);
            }
          }
          while ( v46 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v46 - 1, v46) );
          _m_prefetchw(v45);
          v64 = *v45;
          if ( v23 == ExGetHandlePointer((__int64 *)v16) )
          {
            v48 = v61 & (unsigned int)v64;
            if ( (v61 & v64) != 0 )
            {
              *v45 = v64 & ~v61;
              v49 = (__int64 *)OBJECT_HEADER_TO_AUDIT_INFO(v23);
              if ( v49 )
                v9 = *v49;
              SeOperationAuditAlarm(
                v50,
                v23 + 48,
                v12,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v59[0]) ^ (unsigned __int64)*(unsigned __int8 *)(v23 + 24)]
              + 16,
                v51,
                v55,
                v9);
            }
            LOBYTE(v9) = 1;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v16);
          _InterlockedOr(v54, 0);
          if ( *(_QWORD *)(v42 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v42 + 48), 0LL);
          KeLeaveCriticalRegionThread(BugCheckParameter1a, v47, v48);
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
  if ( v60 )
    ExReleaseRundownProtection_0(v58 + 61);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v24, (__int64)v25);
  return 0LL;
}
