/*
 * XREFs of InitBootProcessor @ 0x140CAA7CC
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeAdjustInterruptTime @ 0x1403E592C (KeAdjustInterruptTime.c)
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlStringCopyWorkerA @ 0x140472860 (RtlStringCopyWorkerA.c)
 *     MiEnumerateSystemImages @ 0x1404E5184 (MiEnumerateSystemImages.c)
 *     HalQueryMaximumProcessorCount @ 0x1404FB520 (HalQueryMaximumProcessorCount.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x140534930 (DbgBreakPointWithStatus.c)
 *     _strupr @ 0x140535360 (_strupr.c)
 *     strstr @ 0x140535B20 (strstr.c)
 *     atol @ 0x140535D80 (atol.c)
 *     RtlStringCbCatExA @ 0x14057658C (RtlStringCbCatExA.c)
 *     RtlStringCbPrintfA @ 0x140576648 (RtlStringCbPrintfA.c)
 *     RtlStringExValidateDestA @ 0x140576920 (RtlStringExValidateDestA.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 *     PsInitializeWin32kKernelExports @ 0x1406144D0 (PsInitializeWin32kKernelExports.c)
 *     WheaSelLogCheckPoint @ 0x1406D43A4 (WheaSelLogCheckPoint.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x1406D45B8 (WheaSelLogSetNtSchedulerAvailability.c)
 *     IpmiHwInitializeContext @ 0x14071CEF4 (IpmiHwInitializeContext.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140801910 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlNlsInitState @ 0x140801E28 (RtlNlsInitState.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14080288C (RtlpInitializeStackTraceDatabase.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     ExpInitLicensing @ 0x140838930 (ExpInitLicensing.c)
 *     ExPreInitializeNls @ 0x14083A88C (ExPreInitializeNls.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     LdrAccessResource @ 0x140A86CB0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140A86CD0 (LdrFindResource_U.c)
 *     RtlFindMessage @ 0x140A86CF0 (RtlFindMessage.c)
 *     HalInitSystem @ 0x140BE9970 (HalInitSystem.c)
 *     KeInitializeXSaveStructures @ 0x140BF4294 (KeInitializeXSaveStructures.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     PsInitSystem @ 0x140C7FD24 (PsInitSystem.c)
 *     MmInitSystem @ 0x140C7FD84 (MmInitSystem.c)
 *     VmInitSystem @ 0x140C80258 (VmInitSystem.c)
 *     ExBurnMemory @ 0x140CAA37C (ExBurnMemory.c)
 *     ExpInitializeBootEnvironment @ 0x140CAA4D0 (ExpInitializeBootEnvironment.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140CAA540 (ExpRevokeBootLoaderPagePrivileges.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140CAB8B4 (InitializeDynamicPartitioningPolicy.c)
 *     DbgkInitialize @ 0x140CB5B80 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140CBA030 (InbvDriverInitialize.c)
 *     PpInitSystem @ 0x140CC39F0 (PpInitSystem.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 *     KeNumaInitialize @ 0x140CC89C4 (KeNumaInitialize.c)
 *     PsInitializeWin32kServiceTable @ 0x140CD79A8 (PsInitializeWin32kServiceTable.c)
 *     PsInitializeQuotaSystem @ 0x140CD8E40 (PsInitializeQuotaSystem.c)
 *     SeInitSystem @ 0x140CDD158 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140CDE894 (VerifierInitSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x140CE3AA8 (BootApplicationPersistentDataInitialize.c)
 *     ExInitSystem @ 0x140CE3E7C (ExInitSystem.c)
 *     HeadlessInit @ 0x140CE59A8 (HeadlessInit.c)
 *     WheaInitializeServices @ 0x140CE7F90 (WheaInitializeServices.c)
 *     CmInitSystem0 @ 0x140CEBD08 (CmInitSystem0.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
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
  int v18; // r9d
  __int64 v19; // r10
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rax
  int inited; // eax
  size_t v33; // r14
  void *Pool2; // rax
  void *v35; // rsi
  char v36; // dl
  char v37; // al
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // r8
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  size_t v43; // r8
  int Message; // eax
  NTSTATUS v45; // eax
  size_t v46; // rdx
  const char *v47; // r8
  NTSTATUS v48; // eax
  NTSTATUS v49; // eax
  NTSTATUS v50; // r8d
  NTSTATUS v51; // eax
  NTSTATUS v52; // eax
  ULONG_PTR v53; // rax
  void *v54; // rdi
  void *v55; // rax
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  ULONG_PTR BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int dwFlags; // [rsp+30h] [rbp-D8h]
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+40h] [rbp-C8h] BYREF
  size_t DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A8h] BYREF
  void *v64; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v65[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v66[3]; // [rsp+80h] [rbp-88h] BYREF
  char v67[64]; // [rsp+98h] [rbp-70h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  dword_140FC8E3C = 259;
  dword_140FC9EB4 = -1;
  qword_140FC8E08 = (__int64)&PspTimeZoneStateBuffer;
  dword_140FC8E38 = 1;
  word_140FC8D48 = -535;
  v2 = 0;
  word_140FC8D88 = -535;
  dword_140FC8E78 = (unsigned __int16)NtBuildNumber;
  v3 = *a1;
  ppszDestEnd = 0LL;
  v63 = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  if ( (_DWORD)v3 != 10 || (v4 = a1 + 1, a1[1]) || (v5 = a1 + 2, a1[2] != 368) )
  {
    v7 = 0LL;
    v5 = a1 + 2;
    v4 = a1 + 1;
    goto LABEL_119;
  }
  v6 = (unsigned int *)*((_QWORD *)a1 + 30);
  v7 = *v6;
  if ( (_DWORD)v7 != 4432 || v6[746] != 167772178 )
LABEL_119:
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
    v12 = v15 + v14;
  }
  v16 = *((_QWORD *)a1 + 28);
  if ( v16 )
  {
    InitNlsTableBase = *(_QWORD *)(v16 + 16);
    ExPreInitializeNls();
  }
  ExpSysDbgLock.ApcState.Process = *(_KPROCESS **)(*((_QWORD *)a1 + 30) + 2976LL);
  WheaInitializeServices();
  guard_dispatch_icall_no_overrides(HalIommuDispatch, v17);
  qword_140FFB938 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, (__int64)a1) )
    KeBugCheck(0x5Cu);
  qword_140FFB940 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  if ( !stru_140F12D20.SchedulerApcFill3[40] )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  v18 = 0;
  v19 = 24LL;
  v20 = KeMaximumIncrement % 0x2710u;
  do
  {
    v21 = 2 * v18;
    v22 = 2 * v20;
    v18 = (2 * v18) | 1;
    v20 = 2 * v20 - 10000;
    if ( v22 < 0x2710 )
    {
      v18 = v21;
      v20 = v22;
    }
    --v19;
  }
  while ( v19 );
  v64 = 0LL;
  HIDWORD(ExpSysDbgLock.QuantumTarget) = v18 | ((KeMaximumIncrement / 0x2710u) << 24);
  *(_DWORD *)(MmWriteableSharedUserData + 4) = HIDWORD(ExpSysDbgLock.QuantumTarget);
  LODWORD(Size) = 0;
  *(_DWORD *)(MmWriteableSharedUserData + 572) = 0;
  v66[0] = 11LL;
  v66[1] = 1LL;
  v66[2] = 0LL;
  if ( (int)LdrFindResource_U(0x40000000, (int)v66, 3, (__int64)&v63) >= 0
    && (int)LdrAccessResource(0x140000000LL, v63, (__int64)&v64, (__int64)&Size) >= 0 )
  {
    KiBugCodeMessages = v64;
  }
  CmNtGlobalFlag2 &= 0x201Fu;
  *(_DWORD *)(MmWriteableSharedUserData + 600) = CmGlobalValidationRunlevel;
  *(_BYTE *)(MmWriteableSharedUserData + 651) = 1;
  v23 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v23;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v23 << 16;
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
LABEL_117:
    KeBugCheck(0x31u);
  *(_QWORD *)&WheapConfigTableLock.ApcStateFill[40] = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 30) + 3704LL) )
  {
    if ( (int)IpmiHwInitializeContext() >= 0 )
    {
      WheaSelLogSetNtSchedulerAvailability(v25, v24, v26, v27);
      v28 = *((_QWORD *)a1 + 30);
      if ( (*(_DWORD *)(v28 + 132) & 0x80000) != 0 )
        WheaSelLogCheckPoint(5u, (*(_BYTE *)(v28 + 2648) & 4) != 0 ? 3 : 0);
    }
  }
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  KeInitializeXSaveStructures();
  KiSupervisorXStateFeaturesLock.WaitBlock[0].Object = 0LL;
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.CurrentRunTime = 2097153LL;
  *(_OWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[48] = 0LL;
  memset_0(&KiSupervisorXStateFeaturesLock.KernelStack, 0, 0x100uLL);
  *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64] = 0LL;
  KiSupervisorXStateFeaturesLock.WaitBlock[1].SparePtr = &KiSupervisorXStateFeaturesLock.WaitBlockFill11[80];
  KiSupervisorXStateFeaturesLock.WaitBlock[1].Object = &KiSupervisorXStateFeaturesLock.WaitBlockFill11[80];
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(0, (ULONG_PTR)a1);
  qword_140FFB8E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  v29 = 0LL;
  v30 = *((_QWORD *)a1 + 30);
  if ( v30 )
  {
    v31 = *(_DWORD **)(v30 + 2904);
    if ( v31 )
    {
      if ( (*v31 & 8) != 0 )
        v29 = *(_QWORD *)(v30 + 4376);
    }
  }
  SymCryptEntropyAccumulatorInit1(KiProcessorBlock[0] + 37376, v29);
  EtwInitialize(0, (__int64)a1);
  KiHwPolicyDriverImageBase = 0LL;
  inited = VmInitSystem(0);
  if ( inited < 0 )
    KeBugCheckEx(0x31u, inited, 0x13uLL, 0LL, 0LL);
  HalInitializeBios(0, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v33 = (unsigned int)Size;
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)Size, 0x6342694Bu);
    v35 = Pool2;
    if ( !Pool2 )
      KeBugCheck(0x7Du);
    memmove(Pool2, KiBugCodeMessages, v33);
    KiBugCodeMessages = v35;
  }
  if ( a1[3] < 2 )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, a1[3], 2uLL, 0LL, 0LL);
  }
  v65[1] = 0LL;
  v65[0] = a1;
  MiEnumerateSystemImages((__int64)InitLoadDebuggerSymbols, (__int64)v65, 0);
  if ( BYTE1(KdDebuggerEnabled) )
    DbgBreakPointWithStatus(1u);
  v36 = KiHaltOnAddressFlags & 0xFD | (KeGetCurrentPrcb()->SchedulerAssist != 0LL ? 2 : 0);
  if ( (KiVelocityFlags & 0x80000) == 0 || (v37 = 5, (HvlEnlightenments & 0x40000000) == 0) )
    v37 = 1;
  KiHaltOnAddressFlags = v37 | v36 & 0xFB;
  ExpInitializeBootEnvironment((__int64)a1, 1);
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v40 = KeKernelCetWrssEnabledScenarios;
    if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 && (_BYTE)KdDebuggerNotPresent && !KdDebuggerWasEverPresent )
    {
      v40 = KeKernelCetWrssEnabledScenarios & 0xFD;
      KeKernelCetWrssDebuggerRevoked = 1;
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFD;
    }
    v39 = 1698LL;
    v41 = __readmsr(0x6A2u);
    if ( v40 )
      v42 = v41 | 2;
    else
      v42 = v41 & 0xFFFFFFFFFFFFFFFDuLL;
    v38 = HIDWORD(v42);
    __writemsr(0x6A2u, v42);
  }
  PsInitializeWin32kServiceTable(v39, v38);
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
    v50 = RtlStringExValidateDestA(pszDest, 0x100uLL, v43, 0);
    if ( v50 < 0 )
    {
      pszDest[0] = 0;
    }
    else
    {
      DestinationString[0] = 0LL;
      v50 = RtlStringCopyWorkerA(pszDest, 0x100uLL, DestinationString, &byte_140D0BEC0, BugCheckParameter4);
      if ( ((v50 + 0x80000000) & 0x80000000) != 0 || v50 == -2147483643 )
        v2 = 256 - LOWORD(DestinationString[0]);
      if ( v50 >= 0 )
      {
        CmCSDVersionString.MaximumLength = 256 - v2;
        goto LABEL_93;
      }
    }
    KeBugCheckEx(0x31u, v50, 8uLL, 0LL, 0LL);
  }
  Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000087u, (unsigned __int16 **)&ppszDestEnd);
  if ( Message < 0 )
    KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
  RtlInitAnsiString((PSTRING)&DestinationString[1], ppszDestEnd + 4);
  LOWORD(DestinationString[1]) -= 2;
  dwFlags = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
  LODWORD(BugCheckParameter4a) = BYTE1(CmNtCSDVersion);
  v45 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString[1], BugCheckParameter4a);
  if ( v45 < 0 )
    KeBugCheckEx(0x31u, v45, 5uLL, 0LL, 0LL);
  if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
  {
    ppszDestEnd = 0LL;
    v48 = RtlStringCbCatExA(pszDest, v46, v47, &ppszDestEnd, DestinationString, dwFlags);
    if ( v48 < 0 )
      KeBugCheckEx(0x31u, v48, 6uLL, 0LL, 0LL);
    v49 = RtlStringCbPrintfA(ppszDestEnd, DestinationString[0], "v.%u", HIWORD(CmNtCSDVersion));
    if ( v49 < 0 )
      KeBugCheckEx(0x31u, v49, 7uLL, 0LL, 0LL);
  }
LABEL_93:
  RtlInitAnsiString((PSTRING)&DestinationString[1], pszDest);
  v51 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, (PCANSI_STRING)&DestinationString[1], 1u);
  if ( v51 < 0 )
    KeBugCheckEx(0x31u, v51, 9uLL, 0LL, 0LL);
  v52 = RtlStringCbPrintfA(v67, 0x40uLL, "%u.%u", 6, 3);
  if ( v52 < 0 )
    KeBugCheckEx(0x31u, v52, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, v67) )
    goto LABEL_117;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v53 = ExAllocatePool2(64LL, 0x800000uLL, 0x63617453u);
    v54 = (void *)v53;
    if ( v53 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase(v53, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v54, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v55 = (void *)ExAllocatePool2(64LL, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v55;
    if ( v55 )
    {
      memset_0(v55, 0, 0x11620uLL);
      *(_DWORD *)&NormalizationListLock.ApcStateFill[40] = 50;
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
