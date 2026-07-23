/*
 * XREFs of InitBootProcessor @ 0x140CB07CC
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeAdjustInterruptTime @ 0x1403E8B1C (KeAdjustInterruptTime.c)
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     RtlStringCopyWorkerA @ 0x14046BFE0 (RtlStringCopyWorkerA.c)
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140536DB0 (DbgBreakPointWithStatus.c)
 *     _strupr @ 0x1405377E0 (_strupr.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     atol @ 0x140538200 (atol.c)
 *     RtlStringCbCatExA @ 0x140578A3C (RtlStringCbCatExA.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     RtlStringExValidateDestA @ 0x140578DD0 (RtlStringExValidateDestA.c)
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 *     PsInitializeWin32kKernelExports @ 0x140617310 (PsInitializeWin32kKernelExports.c)
 *     WheaSelLogCheckPoint @ 0x1406D8424 (WheaSelLogCheckPoint.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x1406D8638 (WheaSelLogSetNtSchedulerAvailability.c)
 *     IpmiHwInitializeContext @ 0x140721B84 (IpmiHwInitializeContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1408073B0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlNlsInitState @ 0x1408078C8 (RtlNlsInitState.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14080832C (RtlpInitializeStackTraceDatabase.c)
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 *     ExpInitLicensing @ 0x14083EB70 (ExpInitLicensing.c)
 *     ExPreInitializeNls @ 0x140840ACC (ExPreInitializeNls.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     LdrAccessResource @ 0x140A8DDE0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140A8DE00 (LdrFindResource_U.c)
 *     RtlFindMessage @ 0x140A8DE20 (RtlFindMessage.c)
 *     HalInitSystem @ 0x140BEF970 (HalInitSystem.c)
 *     KeInitializeXSaveStructures @ 0x140BFA294 (KeInitializeXSaveStructures.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PsInitSystem @ 0x140C85D24 (PsInitSystem.c)
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 *     VmInitSystem @ 0x140C86258 (VmInitSystem.c)
 *     ExBurnMemory @ 0x140CB037C (ExBurnMemory.c)
 *     ExpInitializeBootEnvironment @ 0x140CB04D0 (ExpInitializeBootEnvironment.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140CB0540 (ExpRevokeBootLoaderPagePrivileges.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140CB18F4 (InitializeDynamicPartitioningPolicy.c)
 *     DbgkInitialize @ 0x140CBBBC0 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140CC0070 (InbvDriverInitialize.c)
 *     PpInitSystem @ 0x140CC9AC4 (PpInitSystem.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     KeNumaInitialize @ 0x140CCEAB4 (KeNumaInitialize.c)
 *     PsInitializeWin32kServiceTable @ 0x140CDDD28 (PsInitializeWin32kServiceTable.c)
 *     PsInitializeQuotaSystem @ 0x140CDF1C0 (PsInitializeQuotaSystem.c)
 *     SeInitSystem @ 0x140CE34F0 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140CE4C2C (VerifierInitSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x140CE9E48 (BootApplicationPersistentDataInitialize.c)
 *     ExInitSystem @ 0x140CEA21C (ExInitSystem.c)
 *     HeadlessInit @ 0x140CEBD48 (HeadlessInit.c)
 *     WheaInitializeServices @ 0x140CEE330 (WheaInitializeServices.c)
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 *     CmFcInitSystem1 @ 0x140CF3E50 (CmFcInitSystem1.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 */

__int64 __fastcall InitBootProcessor(unsigned int *a1)
{
  __int16 v2; // r15
  ULONG_PTR v3; // r10
  unsigned int *v4; // rcx
  unsigned int *v5; // rdx
  unsigned int *v6; // r8
  ULONG_PTR v7; // rax
  char *v8; // rdi
  char *v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // rax
  unsigned int *v13; // rdx
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 ***v18; // rax
  __int64 **v19; // rdi
  int v20; // r9d
  __int64 v21; // r10
  ULONG v22; // r8d
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rax
  int inited; // eax
  size_t v35; // r14
  void *Pool2; // rax
  void *v37; // rsi
  char v38; // dl
  char v39; // al
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  size_t v45; // r8
  NTSTATUS Message; // eax
  NTSTATUS v47; // eax
  size_t v48; // rdx
  const char *v49; // r8
  NTSTATUS v50; // eax
  NTSTATUS v51; // eax
  NTSTATUS v52; // r8d
  NTSTATUS v53; // eax
  NTSTATUS v54; // eax
  ULONG_PTR v55; // rax
  void *v56; // rdi
  void *v57; // rax
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  ULONG_PTR BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int dwFlags; // [rsp+30h] [rbp-D8h]
  ULONG ResourceLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+40h] [rbp-C8h] BYREF
  size_t DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  PVOID ResourceBuffer; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v67[2]; // [rsp+70h] [rbp-98h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+80h] [rbp-88h] BYREF
  CHAR SourceString[64]; // [rsp+98h] [rbp-70h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  dword_140FC9E3C = 259;
  dword_140FCAEB4 = -1;
  qword_140FC9E08 = (__int64)&PspTimeZoneStateBuffer;
  dword_140FC9E38 = 1;
  word_140FC9D48 = -535;
  v2 = 0;
  word_140FC9D88 = -535;
  dword_140FC9E78 = (unsigned __int16)NtBuildNumber;
  v3 = *a1;
  MessageEntry = 0LL;
  ResourceDataEntry = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  if ( (_DWORD)v3 != 10 || (v4 = a1 + 1, a1[1]) || (v5 = a1 + 2, a1[2] != 368) )
  {
    v7 = 0LL;
    v5 = a1 + 2;
    v4 = a1 + 1;
    goto LABEL_124;
  }
  v6 = (unsigned int *)*((_QWORD *)a1 + 30);
  v7 = *v6;
  if ( (_DWORD)v7 != 4432 || v6[746] != 167772178 )
LABEL_124:
    KeBugCheckEx(0x100u, v3, *v4, *v5, v7);
  *(_DWORD *)(MmWriteableSharedUserData + 708) = v6[725];
  ExpInitLicensing(PspHostSiloGlobals);
  RtlNlsInitState((__int64)PspHostSiloGlobals);
  if ( (VslGetNestedPageProtectionFlags(0LL) & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges((__int64)a1);
  v8 = (char *)*((_QWORD *)a1 + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v8 )
  {
    strupr(v8);
    v9 = strstr(v8, "BURNMEMORY");
    if ( v9 )
    {
      v10 = strstr(v9, "=");
      if ( v10 )
      {
        v11 = (__int64)atol(v10 + 1) << 8;
        if ( v11 )
          ExBurnMemory((__int64)a1, v11);
      }
    }
    if ( strstr(v8, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v12 = 0LL;
  v13 = (unsigned int *)*((_QWORD *)a1 + 4);
  while ( v13 != a1 + 8 )
  {
    v14 = *((_QWORD *)v13 + 4);
    v15 = *((_QWORD *)v13 + 5);
    if ( v14 < v12 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v13, v14, v15, v12);
    v13 = *(unsigned int **)v13;
    v12 = v14 + v15;
  }
  v16 = *((_QWORD *)a1 + 28);
  if ( v16 )
  {
    InitNlsTableBase = *(_QWORD *)(v16 + 16);
    ExPreInitializeNls();
  }
  ExpSysDbgLock.WaitBlockList = *(_KWAIT_BLOCK **)(*((_QWORD *)a1 + 30) + 2976LL);
  WheaInitializeServices();
  guard_dispatch_icall_no_overrides(HalIommuDispatch, v17);
  qword_140FFC938 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, (__int64)a1) )
    KeBugCheck(0x5Cu);
  qword_140FFC940 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmpGetSystemControlValues(*((_QWORD *)a1 + 21));
  v18 = (__int64 ***)(*((_QWORD *)a1 + 30) + 312LL);
  v19 = *v18;
  while ( v19 != (__int64 **)v18 )
  {
    if ( ((_DWORD)v19[3] & 0x40) != 0 )
      CmpGetSystemControlValues((__int64)v19[4]);
    v19 = (__int64 **)*v19;
    v18 = (__int64 ***)(*((_QWORD *)a1 + 30) + 312LL);
  }
  CmFcInitSystem1();
  if ( !BYTE4(stru_140F12EA0.SystemAffinityTokenListHead.Next) )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  v20 = 0;
  v21 = 24LL;
  v22 = KeMaximumIncrement % 0x2710;
  do
  {
    v23 = 2 * v20;
    v24 = 2 * v22;
    v20 = (2 * v20) | 1;
    v22 = 2 * v22 - 10000;
    if ( v24 < 0x2710 )
    {
      v20 = v23;
      v22 = v24;
    }
    --v21;
  }
  while ( v21 );
  ResourceBuffer = 0LL;
  HIDWORD(ExpSysDbgLock.SListFaultAddress) = v20 | ((KeMaximumIncrement / 0x2710) << 24);
  *(_DWORD *)(MmWriteableSharedUserData + 4) = HIDWORD(ExpSysDbgLock.SListFaultAddress);
  ResourceLength[0] = 0;
  *(_DWORD *)(MmWriteableSharedUserData + 572) = 0;
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &ResourceBuffer, ResourceLength) >= 0 )
  {
    KiBugCodeMessages = ResourceBuffer;
  }
  CmNtGlobalFlag2 &= 0x201Fu;
  *(_DWORD *)(MmWriteableSharedUserData + 600) = CmGlobalValidationRunlevel;
  *(_BYTE *)(MmWriteableSharedUserData + 651) = 1;
  v25 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v25;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v25 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = KeQueryPerformanceCounter(0LL);
    KiSystemTimeErrorAccumulator = 0LL;
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  *(_DWORD *)(MmWriteableSharedUserData + 960) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 964) = 1;
  *(_WORD *)(MmWriteableSharedUserData + 874) = 1;
  if ( !(unsigned __int8)ExInitSystem(0LL) )
LABEL_122:
    KeBugCheck(0x31u);
  *(_QWORD *)&WheapConfigTableLock.ApcStateFill[40] = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 30) + 3704LL) )
  {
    if ( (int)IpmiHwInitializeContext() >= 0 )
    {
      WheaSelLogSetNtSchedulerAvailability(v27, v26, v28, v29);
      v30 = *((_QWORD *)a1 + 30);
      if ( (*(_DWORD *)(v30 + 132) & 0x80000) != 0 )
        WheaSelLogCheckPoint(5u, (*(_BYTE *)(v30 + 2648) & 4) != 0 ? 3 : 0);
    }
  }
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  KeInitializeXSaveStructures();
  KiSupervisorXStateFeaturesLock.WaitBlock[0].WaitListEntry.Flink = 0LL;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64] = 2097153LL;
  *(_OWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[16] = 0LL;
  memset_0(&KiSupervisorXStateFeaturesLock.WaitBlockFill11[72], 0, 0x100uLL);
  KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Flink = 0LL;
  KiSupervisorXStateFeaturesLock.WaitBlock[0].SparePtr = &KiSupervisorXStateFeaturesLock.WaitBlockFill11[32];
  KiSupervisorXStateFeaturesLock.WaitBlock[0].Object = &KiSupervisorXStateFeaturesLock.WaitBlockFill11[32];
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(0, (ULONG_PTR)a1);
  qword_140FFC8E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  v31 = 0LL;
  v32 = *((_QWORD *)a1 + 30);
  if ( v32 )
  {
    v33 = *(_DWORD **)(v32 + 2904);
    if ( v33 )
    {
      if ( (*v33 & 8) != 0 )
        v31 = *(_QWORD *)(v32 + 4376);
    }
  }
  SymCryptEntropyAccumulatorInit1(KiProcessorBlock[0] + 37376, v31);
  EtwInitialize(0, (__int64)a1);
  KiHwPolicyDriverImageBase = 0LL;
  inited = VmInitSystem(0);
  if ( inited < 0 )
    KeBugCheckEx(0x31u, inited, 0x13uLL, 0LL, 0LL);
  HalInitializeBios(0, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v35 = ResourceLength[0];
    Pool2 = (void *)ExAllocatePool2(64LL, ResourceLength[0], 0x6342694Bu);
    v37 = Pool2;
    if ( !Pool2 )
      KeBugCheck(0x7Du);
    memmove(Pool2, KiBugCodeMessages, v35);
    KiBugCodeMessages = v37;
  }
  if ( a1[3] < 2 )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, a1[3], 2uLL, 0LL, 0LL);
  }
  v67[1] = 0LL;
  v67[0] = a1;
  MiEnumerateSystemImages((__int64)InitLoadDebuggerSymbols, (__int64)v67, 0);
  if ( BYTE1(KdDebuggerEnabled) )
    DbgBreakPointWithStatus(1u);
  v38 = KiHaltOnAddressFlags & 0xFD | (KeGetCurrentPrcb()->SchedulerAssist != 0LL ? 2 : 0);
  if ( (KiVelocityFlags & 0x80000) == 0 || (v39 = 5, (HvlEnlightenments & 0x40000000) == 0) )
    v39 = 1;
  KiHaltOnAddressFlags = v39 | v38 & 0xFB;
  ExpInitializeBootEnvironment((__int64)a1, 1);
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v42 = KeKernelCetWrssEnabledScenarios;
    if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 && (_BYTE)KdDebuggerNotPresent && !KdDebuggerWasEverPresent )
    {
      v42 = KeKernelCetWrssEnabledScenarios & 0xFD;
      KeKernelCetWrssDebuggerRevoked = 1;
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFD;
    }
    v41 = 1698LL;
    v43 = __readmsr(0x6A2u);
    if ( v42 )
      v44 = v43 | 2;
    else
      v44 = v43 & 0xFFFFFFFFFFFFFFFDuLL;
    v40 = HIDWORD(v44);
    __writemsr(0x6A2u, v44);
  }
  PsInitializeWin32kServiceTable(v41, v40);
  PsInitializeWin32kKernelExports();
  if ( (MiFlags & 0x100000) != 0 )
    MiEnumerateSystemImages((__int64)MiProtectKernelCfgData, 0LL, 0);
  HvlPhase1Initialize((__int64)a1);
  if ( **((_DWORD **)a1 + 30) >= 0x1150u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  *(_DWORD *)(MmWriteableSharedUserData + 692) = 2147418111;
  *(_DWORD *)(MmWriteableSharedUserData + 696) = 0x80000000;
  if ( !CmNtCSDVersion )
  {
    v52 = RtlStringExValidateDestA(pszDest, 0x100uLL, v45, 0);
    if ( v52 < 0 )
    {
      pszDest[0] = 0;
    }
    else
    {
      DestinationString[0] = 0LL;
      v52 = RtlStringCopyWorkerA(pszDest, 0x100uLL, DestinationString, &byte_140D12170, BugCheckParameter4);
      if ( ((v52 + 0x80000000) & 0x80000000) != 0 || v52 == -2147483643 )
        v2 = 256 - LOWORD(DestinationString[0]);
      if ( v52 >= 0 )
      {
        CmCSDVersionString.MaximumLength = 256 - v2;
        goto LABEL_98;
      }
    }
    KeBugCheckEx(0x31u, v52, 8uLL, 0LL, 0LL);
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &MessageEntry);
  if ( Message < 0 )
    KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
  RtlInitAnsiString((PSTRING)&DestinationString[1], (PCSZ)MessageEntry->Text);
  LOWORD(DestinationString[1]) -= 2;
  dwFlags = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
  LODWORD(BugCheckParameter4a) = BYTE1(CmNtCSDVersion);
  v47 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString[1], BugCheckParameter4a);
  if ( v47 < 0 )
    KeBugCheckEx(0x31u, v47, 5uLL, 0LL, 0LL);
  if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
  {
    MessageEntry = 0LL;
    v50 = RtlStringCbCatExA(pszDest, v48, v49, (NTSTRSAFE_PSTR *)&MessageEntry, DestinationString, dwFlags);
    if ( v50 < 0 )
      KeBugCheckEx(0x31u, v50, 6uLL, 0LL, 0LL);
    v51 = RtlStringCbPrintfA((NTSTRSAFE_PSTR)MessageEntry, DestinationString[0], "v.%u", HIWORD(CmNtCSDVersion));
    if ( v51 < 0 )
      KeBugCheckEx(0x31u, v51, 7uLL, 0LL, 0LL);
  }
LABEL_98:
  RtlInitAnsiString((PSTRING)&DestinationString[1], pszDest);
  v53 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, (PCANSI_STRING)&DestinationString[1], 1u);
  if ( v53 < 0 )
    KeBugCheckEx(0x31u, v53, 9uLL, 0LL, 0LL);
  v54 = RtlStringCbPrintfA(SourceString, 0x40uLL, "%u.%u", 6, 3);
  if ( v54 < 0 )
    KeBugCheckEx(0x31u, v54, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, SourceString) )
    goto LABEL_122;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v55 = ExAllocatePool2(64LL, 0x800000uLL, 0x63617453u);
    v56 = (void *)v55;
    if ( v55 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase(v55, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v56, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v57 = (void *)ExAllocatePool2(64LL, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v57;
    if ( v57 )
    {
      memset_0(v57, 0, 0x11620uLL);
      LODWORD(NormalizationListLock.WaitListEntry.Flink) = 50;
    }
  }
  PspSiloMonitorLock.StackBase = 0LL;
  PspSiloMonitorLock.AutoBoostThreadState = &PspSiloMonitorLock.SchedulerSharedSwappablePage;
  PspSiloMonitorLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)&PspSiloMonitorLock.SchedulerSharedSwappablePage;
  ExpFreeListCount = HalQueryMaximumProcessorCount();
  if ( !(unsigned __int8)ObInitSystem(0LL) )
    KeBugCheck(0x5Eu);
  SymCryptModuleInit(103LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)PsInitSystem(0, a1) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  *(_DWORD *)(MmWriteableSharedUserData + 620) = 10;
  *(_DWORD *)(MmWriteableSharedUserData + 624) = 0;
  *(_DWORD *)(MmWriteableSharedUserData + 608) = 28000;
  *(_WORD *)(MmWriteableSharedUserData + 618) = KeProcessorArchitecture;
  *(_WORD *)(MmWriteableSharedUserData + 44) = -31132;
  *(_WORD *)(MmWriteableSharedUserData + 46) = -31132;
  *(_DWORD *)(MmWriteableSharedUserData + 932) = 0;
  return 0LL;
}
