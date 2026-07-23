/*
 * XREFs of EtwpInitialize @ 0x140CE6C94
 * Callers:
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14049D58C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1406C759C (EtwpGetCurrentSiloMaxLoggers.c)
 *     UcInitialize @ 0x14071752C (UcInitialize.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     TlgRegisterAggregateProvider @ 0x14077E5F0 (TlgRegisterAggregateProvider.c)
 *     WdipSemInitialize @ 0x140824DA8 (WdipSemInitialize.c)
 *     EtwInitializeProcessor @ 0x14082AAD4 (EtwInitializeProcessor.c)
 *     EtwInitializeProcessorActivityId @ 0x14082AC9C (EtwInitializeProcessorActivityId.c)
 *     EtwpInitializeSiloState @ 0x14082C390 (EtwpInitializeSiloState.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14082C6B8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpPreInitializeSiloState @ 0x14082D040 (EtwpPreInitializeSiloState.c)
 *     EtwpInitializeCoverage @ 0x1408305C0 (EtwpInitializeCoverage.c)
 *     EtwpInitializeStackLookasideList @ 0x140830604 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x140832FF0 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x1408363C4 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeProcessorTrace @ 0x1408365F8 (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeProviderTraits @ 0x1408367C0 (EtwpInitializeProviderTraits.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwpMapEnableFlags @ 0x140ABB070 (EtwpMapEnableFlags.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B13914 (EtwpUpdateFileInfoDriverState.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B7192C (TlgRegisterAggregateProviderEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     PerfDiagInitialize @ 0x140CE60F0 (PerfDiagInitialize.c)
 *     EtwpFixBootSystemTime @ 0x140CE6BB0 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE72F0 (EtwpInitializeBootTimeStamps.c)
 *     EtwpReadConfigParameters @ 0x140CE73E8 (EtwpReadConfigParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140CE77E0 (EtwpTraceSystemInitialization.c)
 *     EtwpInitializeRegistration @ 0x140CE7DAC (EtwpInitializeRegistration.c)
 *     EtwpInitializeSecurity @ 0x140CE7E98 (EtwpInitializeSecurity.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 *     EtwpStartBootLogger @ 0x140CE8324 (EtwpStartBootLogger.c)
 *     EtwpInitializeKsrSupport @ 0x140CE850C (EtwpInitializeKsrSupport.c)
 *     EtwpInitializeRealTimeConnection @ 0x140CE85B4 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140CE8670 (EtwpInitializeCoverageSampler.c)
 */

void __fastcall EtwpInitialize(int a1, int a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // rcx
  unsigned int CurrentSiloMaxLoggers; // eax
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int j; // edi
  __int64 Prcb; // rax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR Pool2; // rax

  if ( !a3 || (v5 = 1, *(_QWORD *)(a3 + 8) == a3 + 8) )
    v5 = 0;
  if ( !a1 )
  {
    KiInitializeMutant((struct _KMUTANT *)&stru_140F03830.880, 0LL, 1u, 0LL);
    KiInitializeMutant((struct _KMUTANT *)&stru_140F03830.QueuedScb, 0LL, 1u, 0LL);
    stru_140F03830.UserWaitTime = 0LL;
    EtwpInitializeStackLookasideList();
    HIDWORD(stru_140FC11F0.Padding[4]) |= 0x880000u;
    LOBYTE(v6) = v5;
    LODWORD(stru_140FC11F0.Padding[4]) |= 0x10000u;
    EtwpInitializeBootTimeStamps(v6);
    if ( !a3 || (CurrentSiloMaxLoggers = *(_DWORD *)a3) == 0 )
    {
      if ( a2 )
        CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
      else
        CurrentSiloMaxLoggers = 128;
    }
    if ( (int)EtwpPreInitializeSiloState(0LL, CurrentSiloMaxLoggers) < 0 )
      KeBugCheck(0x11Du);
    EtwpHostSiloState = *((_QWORD *)PsGetServerSiloGlobals(0LL) + 104);
    EtwInitializeProcessor((__int64)KeGetCurrentPrcb());
    qword_140E0ECA8 = *(_QWORD *)(EtwpHostSiloState + 712);
    qword_140E0ECB0 = EtwpHostSiloState;
    if ( a3 )
    {
      v8 = (_QWORD *)(a3 + 8);
      for ( i = *(_QWORD **)(a3 + 8); i != v8; i = (_QWORD *)*i )
        EtwpStartBootLogger(i);
    }
LABEL_42:
    ++LOBYTE(stru_140F03830.CycleTime);
    return;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
    EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (__int64 *)EtwpHostSiloState, 0);
    goto LABEL_42;
  }
  v10 = KeNumberProcessors_0;
  if ( v5 )
    EtwpFixBootSystemTime();
  v11 = EtwpInitializeSecurity();
  if ( v11 < 0 )
    KeBugCheckEx(0x11Du, 1uLL, v11, 0LL, 0LL);
  v12 = 896LL;
  v13 = 9LL;
  do
  {
    *(_WORD *)(v12 + MmWriteableSharedUserData) = 0;
    v12 += 2LL;
    --v13;
  }
  while ( v13 );
  for ( j = 0; j < v10; ++j )
  {
    Prcb = KeGetPrcb(j);
    v16 = Prcb;
    if ( !*(_QWORD *)(Prcb + 35816) )
    {
      v17 = EtwInitializeProcessor(Prcb);
      if ( v17 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v17, j, 0LL);
    }
    v18 = EtwInitializeProcessorActivityId(v16);
    if ( v18 < 0 )
      KeBugCheckEx(0x11Du, 2uLL, v18, j, 0LL);
  }
  EtwpReadConfigParameters(v12);
  EtwpInitializeRegistration();
  EtwpInitializePrivateSessionDemuxObject();
  EtwpInitializeRealTimeConnection();
  HIDWORD(stru_140F03830.CycleTime) = *(_DWORD *)(KeGetPrcb(0) + 68);
  EtwpInitializeLastBranchTracing();
  EtwpInitializeProcessorTrace(v20, v19);
  LODWORD(ExpSysDbgLock.KernelShadowStackLimit.AllFields) = 0;
  *(_QWORD *)&stru_140F03830.SystemCallNumber = EtwpAdjustTraceBuffers;
  ExpSysDbgLock.KernelShadowStackInitial = (void *)0xC00000000LL;
  ExpSysDbgLock.KernelShadowStackBase = 0LL;
  stru_140F03830.FirstArgument = &stru_140F03830.TrapFrame;
  LODWORD(stru_140F03830.QueueListEntry.Blink) = 8;
  *(_QWORD *)&stru_140F03830.WaitRegister.Flags = 0LL;
  word_140F03EC2 = 0;
  KiInitializeTimer2((unsigned __int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
  EtwpInitializeProviderTraits();
  if ( !ExRegisterCallback(
          (PCALLBACK_OBJECT)ExpSysDbgLock.Header.WaitListHead.Flink,
          (PCALLBACK_FUNCTION)EtwpPowerStateCallback,
          0LL) )
    goto LABEL_39;
  EtwpInitializeKsrSupport();
  EtwpLoadMicroarchitecturalPmcs();
  EtwpSiloAllowedGroupMask[0] |= 0x1600370Fu;
  dword_140FC102C |= 0x8206u;
  dword_140FC1030 |= 0x10040u;
  dword_140FC1040 |= 0x1FFFFFFFu;
  EtwpMapEnableFlags((__int64)EtwpSiloAllowedGroupMask, 0);
  EtwpFixBootLoggers();
  if ( (int)EtwpInitializeSiloState(0LL, a3) < 0 )
LABEL_39:
    KeBugCheck(0x11Du);
  BYTE4(ExpSysDbgLock.UserAbEntries) = 0;
  KeRegisterBugCheckReasonCallback(
    (PKBUGCHECK_REASON_CALLBACK_RECORD)&ExpSysDbgLock.SystemAffinityTokenListHead,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
    KbCallbackSecondaryMultiPartDumpData,
    (PUCHAR)&EtwpComponentName);
  EtwRegister(
    &EventTracingProvGuid,
    (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
    0LL,
    (PREGHANDLE)&stru_140F03830.SavedApcState.ApcListHead[0].Blink);
  WdipSemInitialize();
  PerfDiagInitialize();
  EtwpInitializeCoverage();
  EtwpInitializeCoverageSampler();
  Pool2 = ExAllocatePool2(64LL, 0x1000uLL, 0x6E734954u);
  if ( !Pool2 )
    KeBugCheckEx(0x11Du, 3uLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
  LODWORD(ExpSysDbgLock.Padding[1]) = -849937013;
  LODWORD(ExpSysDbgLock.SchedulerAssistLastYieldBoostTime) = 0x8000;
  ExpSysDbgLock.Padding[0] = Pool2;
  EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
  TlgRegisterAggregateProvider((__int64)&dword_140E08F78);
  EtwRegister(
    &PsProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)1,
    (PREGHANDLE)&stru_140F03830.Affinity);
  TlgRegisterAggregateProviderEx(
    (__int64)&dword_140E08F40,
    (__int64)EtwpTraceLoggingProvEnableCallback,
    (__int64)PsProvTraceLoggingGuid);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06E00, 0LL, 0LL);
  EtwRegister(
    &NetProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x10000,
    (PREGHANDLE)&stru_140F03830.AffinityPrimaryGroup);
  EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &stru_140F03830.NpxState);
  EtwRegister(
    &FileProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x2000000,
    (PREGHANDLE)&stru_140F03830.600);
  EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
  EtwRegister(
    &MemoryProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x20000001,
    (PREGHANDLE)&stru_140F03830.SavedApcState.ApcListHead[1]);
  EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
  EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
  EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, (PREGHANDLE)&stru_140F03830.SavedApcState.ApcListHead[1].Blink);
  EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
  EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, (PREGHANDLE)&stru_140F03830.SavedApcState.Process);
  EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, (PREGHANDLE)&stru_140F03830.SavedApcStateFill[40]);
  EtwRegister(
    &CpuStarvationProvGuid,
    (PETWENABLECALLBACK)EtwpCpuStarvationProvEnableCallback,
    0LL,
    (PREGHANDLE)&stru_140F03830.SchedulerApc.Type);
  EtwRegister(&CpuPartitionProvGuid, 0LL, 0LL, (PREGHANDLE)&stru_140F03830.SchedulerApc.Thread);
  EtwRegister(
    &WorkQueueProvGuid,
    (PETWENABLECALLBACK)EtwpWorkQueueProvEnableCallback,
    0LL,
    (PREGHANDLE)&stru_140F03830.SchedulerApc.ApcListEntry);
  ++LOBYTE(stru_140F03830.CycleTime);
  ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
  EtwpTraceSystemInitialization();
  if ( (int)guard_dispatch_icall_no_overrides(45LL, 4LL) < 0 )
    EtwpMaxPmcCounter = 8;
  ExpPlatformBinaryLock.ExpectedRunTime = EtwpMaxPmcCounter;
  UcInitialize(1);
}
