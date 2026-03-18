/*
 * XREFs of EtwpInitialize @ 0x140CE08F4
 * Callers:
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x1404A3A7C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1406C395C (EtwpGetCurrentSiloMaxLoggers.c)
 *     UcInitialize @ 0x140712834 (UcInitialize.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     TlgRegisterAggregateProvider @ 0x14077B9B0 (TlgRegisterAggregateProvider.c)
 *     WdipSemInitialize @ 0x14081EB98 (WdipSemInitialize.c)
 *     EtwInitializeProcessor @ 0x140824894 (EtwInitializeProcessor.c)
 *     EtwInitializeProcessorActivityId @ 0x140824A5C (EtwInitializeProcessorActivityId.c)
 *     EtwpInitializeSiloState @ 0x140826150 (EtwpInitializeSiloState.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140826478 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpPreInitializeSiloState @ 0x140826E00 (EtwpPreInitializeSiloState.c)
 *     EtwpInitializeCoverage @ 0x14082A380 (EtwpInitializeCoverage.c)
 *     EtwpInitializeStackLookasideList @ 0x14082A3C4 (EtwpInitializeStackLookasideList.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x14082CDB0 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeLastBranchTracing @ 0x140830184 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeProcessorTrace @ 0x1408303B8 (EtwpInitializeProcessorTrace.c)
 *     EtwpInitializeProviderTraits @ 0x140830580 (EtwpInitializeProviderTraits.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwpMapEnableFlags @ 0x140AB9BAC (EtwpMapEnableFlags.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B11B94 (EtwpUpdateFileInfoDriverState.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B6E47C (TlgRegisterAggregateProviderEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     PerfDiagInitialize @ 0x140CDFD58 (PerfDiagInitialize.c)
 *     EtwpFixBootSystemTime @ 0x140CE0810 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE0F50 (EtwpInitializeBootTimeStamps.c)
 *     EtwpReadConfigParameters @ 0x140CE1048 (EtwpReadConfigParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140CE1440 (EtwpTraceSystemInitialization.c)
 *     EtwpInitializeRegistration @ 0x140CE1A0C (EtwpInitializeRegistration.c)
 *     EtwpInitializeSecurity @ 0x140CE1AF8 (EtwpInitializeSecurity.c)
 *     EtwpFixBootLoggers @ 0x140CE1DAC (EtwpFixBootLoggers.c)
 *     EtwpStartBootLogger @ 0x140CE1F84 (EtwpStartBootLogger.c)
 *     EtwpInitializeKsrSupport @ 0x140CE216C (EtwpInitializeKsrSupport.c)
 *     EtwpInitializeRealTimeConnection @ 0x140CE2214 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140CE22D0 (EtwpInitializeCoverageSampler.c)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8

  if ( !a3 || (v5 = 1, *(_QWORD *)(a3 + 8) == a3 + 8) )
    v5 = 0;
  if ( !a1 )
  {
    KiInitializeMutant((struct _KMUTANT *)&EtwpSecurityLock.SchedulerApcFill5[72], 0LL, 1u, 0LL);
    KiInitializeMutant((struct _KMUTANT *)&EtwpSecurityLock.Header.WaitListHead.Blink, 0LL, 1u, 0LL);
    *(_QWORD *)&EtwpSecurityLock.Header.Lock = 0LL;
    EtwpInitializeStackLookasideList();
    HIDWORD(stru_140FC01F0.Padding[4]) |= 0x880000u;
    LOBYTE(v6) = v5;
    LODWORD(stru_140FC01F0.Padding[4]) |= 0x10000u;
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
    qword_140E0EC38 = *(_QWORD *)(EtwpHostSiloState + 712);
    qword_140E0EC40 = EtwpHostSiloState;
    if ( a3 )
    {
      v8 = (_QWORD *)(a3 + 8);
      for ( i = *(_QWORD **)(a3 + 8); i != v8; i = (_QWORD *)*i )
        EtwpStartBootLogger(i);
    }
LABEL_42:
    ++EtwpBootPhase;
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
  EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
  EtwpInitializeLastBranchTracing();
  EtwpInitializeProcessorTrace(v20, v19);
  LODWORD(ExpSysDbgLock.UserWaitTime) = 0;
  EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
  ExpSysDbgLock.ReservedPreviousReadyTimeValue = 0;
  ExpSysDbgLock.KernelWaitTime = 0LL;
  EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
  *(&ExpSysDbgLock.ReservedPreviousReadyTimeValue + 1) = 12;
  EtwpBufferAdjustmentCount = 8;
  EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
  word_140F037E2 = 0;
  KiInitializeTimer2((unsigned __int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
  EtwpInitializeProviderTraits();
  if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
    goto LABEL_39;
  EtwpInitializeKsrSupport();
  EtwpLoadMicroarchitecturalPmcs();
  EtwpSiloAllowedGroupMask[0] |= 0x1600370Fu;
  dword_140FC0024 |= 0x8206u;
  dword_140FC0028 |= 0x10040u;
  dword_140FC0038 |= 0x1FFFFFFFu;
  EtwpMapEnableFlags((__int64)EtwpSiloAllowedGroupMask, 0);
  EtwpFixBootLoggers();
  if ( (int)EtwpInitializeSiloState(0LL, a3) < 0 )
LABEL_39:
    KeBugCheck(0x11Du);
  BYTE4(ExpSysDbgLock.Spare35[1]) = 0;
  KeRegisterBugCheckReasonCallback(
    (PKBUGCHECK_REASON_CALLBACK_RECORD)&ExpSysDbgLock.KernelShadowStackBase,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
    KbCallbackSecondaryMultiPartDumpData,
    (PUCHAR)&EtwpComponentName);
  EtwRegister(
    &EventTracingProvGuid,
    (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
    0LL,
    &EtwpEventTracingProvRegHandle);
  WdipSemInitialize();
  PerfDiagInitialize();
  EtwpInitializeCoverage();
  EtwpInitializeCoverageSampler();
  Pool2 = ExAllocatePool2(64LL, 0x1000uLL, 0x6E734954u);
  if ( !Pool2 )
    KeBugCheckEx(0x11Du, 3uLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
  LODWORD(ExpSysDbgLock.SchedulerSharedSwappablePage) = -849937013;
  LODWORD(ExpSysDbgLock.IptSaveArea) = 0x8000;
  *(_QWORD *)&ExpSysDbgLock.ResourceIndex = Pool2;
  EtwRegister(
    &KernelProvGuid,
    (PETWENABLECALLBACK)EtwpKernelProvEnableCallback,
    0LL,
    (PREGHANDLE)&EtwpSecurityLock.MutantListHead.Blink);
  TlgRegisterAggregateProvider((__int64)&dword_140E08F48);
  EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
  TlgRegisterAggregateProviderEx(
    (__int64)&dword_140E08F80,
    (__int64)EtwpTraceLoggingProvEnableCallback,
    (__int64)PsProvTraceLoggingGuid);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06E00, 0LL, 0LL);
  EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
  EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
  EtwRegister(
    &FileProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x2000000,
    &EtwpFileProvRegHandle);
  EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
  EtwRegister(
    &MemoryProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x20000001,
    &EtwpMemoryProvRegHandle);
  EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
  EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, (PREGHANDLE)&EtwpSecurityLock.MutantListHead);
  EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
  EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, (PREGHANDLE)&EtwpSecurityLock.AbWaitEntryCount);
  EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
  EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
  EtwRegister(&CpuStarvationProvGuid, (PETWENABLECALLBACK)EtwpCpuStarvationProvEnableCallback, 0LL, &qword_140F03598);
  EtwRegister(&CpuPartitionProvGuid, 0LL, 0LL, &qword_140F03590);
  EtwRegister(&WorkQueueProvGuid, (PETWENABLECALLBACK)EtwpWorkQueueProvEnableCallback, 0LL, &qword_140F035A0);
  ++EtwpBootPhase;
  ZwUpdateWnfStateData((__int64)&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL);
  EtwpTraceSystemInitialization(v23, v22, v24);
  if ( (int)guard_dispatch_icall_no_overrides(45LL, 4LL) < 0 )
    EtwpMaxPmcCounter = 8;
  ExpPlatformBinaryLock.ExpectedRunTime = EtwpMaxPmcCounter;
  UcInitialize(1);
}
