/*
 * XREFs of Phase1InitializationDiscard @ 0x140CB1D40
 * Callers:
 *     Phase1Initialization @ 0x1407829A0 (Phase1Initialization.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetSystemTime @ 0x1403CBB20 (KeSetSystemTime.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PoNotifySystemTimeSet @ 0x140427DFC (PoNotifySystemTimeSet.c)
 *     RtlpTimeToTimeFields @ 0x140449E70 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     RtlStringCbCopyA @ 0x140475C38 (RtlStringCbCopyA.c)
 *     FsRtlSendModernAppTermination @ 0x1404CE6C0 (FsRtlSendModernAppTermination.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _strupr @ 0x1405377E0 (_strupr.c)
 *     strtoul @ 0x140537CD8 (strtoul.c)
 *     _strtoui64 @ 0x140537F70 (_strtoui64.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     atol @ 0x140538200 (atol.c)
 *     DisplayBootBitmap @ 0x1405786DC (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x14057897C (MakeGdtReadOnly.c)
 *     RtlStringCbPrintfA @ 0x140578AF8 (RtlStringCbPrintfA.c)
 *     RtlStringCbPrintfExA @ 0x140578B4C (RtlStringCbPrintfExA.c)
 *     HvlDebuggerSupportInitialize @ 0x1405BAC20 (HvlDebuggerSupportInitialize.c)
 *     InbvDisplayString @ 0x1405C7460 (InbvDisplayString.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1405F1F20 (KiCommitGroupSubNodeAssignments.c)
 *     RtlInitializeCompression @ 0x14061AE20 (RtlInitializeCompression.c)
 *     UcInitialize @ 0x14071752C (UcInitialize.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x14072B7A0 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopInitializeBootLogging @ 0x1407977F0 (IopInitializeBootLogging.c)
 *     AlpcpInitSystem @ 0x1407C3E88 (AlpcpInitSystem.c)
 *     RtlInitFunctionalityCache @ 0x140805E18 (RtlInitFunctionalityCache.c)
 *     EtwTimeProfileReset @ 0x14082DA0C (EtwTimeProfileReset.c)
 *     ExInitializeLeapSecondData @ 0x14083B934 (ExInitializeLeapSecondData.c)
 *     ExInitializeUtcTimeZoneBias @ 0x14083BAF8 (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x14083E088 (ExInitLicenseCallback.c)
 *     BcdInitializeBcdSyncMutant @ 0x1408973B8 (BcdInitializeBcdSyncMutant.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     RtlFindMessage @ 0x140A8DE20 (RtlFindMessage.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140B14690 (ExpWriteTimeZoneBias.c)
 *     ExInitializePagedLookasideList @ 0x140B33F30 (ExInitializePagedLookasideList.c)
 *     HalInitSystem @ 0x140BEF970 (HalInitSystem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     KdInitSystem @ 0x140C18B60 (KdInitSystem.c)
 *     BgDisplayBackgroundUpdate @ 0x140C55930 (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140C5596C (BgDisplayProgressIndicator.c)
 *     BgGetDisplayContext @ 0x140C55A38 (BgGetDisplayContext.c)
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 *     PsInitSystem @ 0x140C85D24 (PsInitSystem.c)
 *     MmInitSystem @ 0x140C85D84 (MmInitSystem.c)
 *     VmInitSystem @ 0x140C86258 (VmInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140CAFD20 (CreateMiniNtBootKey.c)
 *     CreateSystemRootLink @ 0x140CAFEFC (CreateSystemRootLink.c)
 *     ExpComputeCyclesPerYield @ 0x140CB0424 (ExpComputeCyclesPerYield.c)
 *     GetBootSystemTime @ 0x140CB05C4 (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140CB1770 (InitSkuSessionParameters.c)
 *     MfgInitSystem @ 0x140CB19A8 (MfgInitSystem.c)
 *     HalAllProcessorsStarted @ 0x140CB3660 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140CB3690 (HalReportResourceUsage.c)
 *     DbgkInitialize @ 0x140CBBBC0 (DbgkInitialize.c)
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 *     InbvDriverInitialize @ 0x140CC0070 (InbvDriverInitialize.c)
 *     IoCreateObjectTypes @ 0x140CC0930 (IoCreateObjectTypes.c)
 *     PpInitSystem @ 0x140CC9AC4 (PpInitSystem.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140CD0A5C (KiPerformGroupConfiguration.c)
 *     PfInitializeSuperfetch @ 0x140CD4198 (PfInitializeSuperfetch.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PsInitializeBootCpuPartitions @ 0x140CDDE44 (PsInitializeBootCpuPartitions.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140CE336C (SeCodeIntegrityInitializePolicy.c)
 *     SeInitSystem @ 0x140CE34F0 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140CE4C2C (VerifierInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140CEA100 (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140CEA21C (ExInitSystem.c)
 *     ExInitSystemPhase2 @ 0x140CEA3E4 (ExInitSystemPhase2.c)
 *     ExInitializeExternalBootSupport @ 0x140CEC5E4 (ExInitializeExternalBootSupport.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 */

char __fastcall Phase1InitializationDiscard(_QWORD *BugCheckParameter3)
{
  unsigned int v1; // edi
  struct _LIST_ENTRY *Blink; // r12
  char *Pool2; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rcx
  char *v7; // rax
  const char *v8; // rbx
  const char *v9; // r14
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rdi
  __int64 v14; // rbx
  __int16 v15; // ax
  char *v16; // rax
  char *v17; // rax
  const char *v18; // rsi
  unsigned int v19; // eax
  char *v20; // rcx
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rbx
  ULONG_PTR v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  ULONG_PTR v28; // rcx
  __int64 v29; // rdx
  NTSTATUS Message; // eax
  char *v31; // rbx
  int v32; // esi
  NTSTATUS v33; // eax
  size_t v34; // rdi
  char *v35; // rbx
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  NTSTATUS v39; // eax
  _OWORD *v40; // rax
  char *v41; // rcx
  __int64 v42; // rdx
  __int128 v43; // xmm1
  int Flink_high; // eax
  char *v45; // rax
  char *v46; // rax
  __int16 v47; // bx
  struct _LIST_ENTRY *v48; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  char *v57; // rax
  char *v58; // rax
  char *v59; // rax
  const CHAR *v60; // rbx
  ULONG v61; // r9d
  NTSTATUS v62; // eax
  __int64 v63; // r9
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  NTSTATUS v66; // eax
  __int64 v67; // rdx
  int inited; // eax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // r8
  struct _KLOCK_ENTRIES *v72; // r9
  int v73; // eax
  int SystemRootLink; // eax
  int v75; // eax
  _LIST_ENTRY *DisplayContext; // rax
  ULONG_PTR v77; // rbx
  int v78; // eax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  struct _KLOCK_ENTRIES *v82; // r9
  int v83; // eax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  struct _KLOCK_ENTRIES *v88; // r9
  int v89; // ebx
  char *v90; // rax
  const char *v91; // rbx
  int v92; // eax
  int v93; // ecx
  ULONG v94; // r9d
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rbx
  __int16 v98; // ax
  bool v99; // zf
  int v100; // eax
  int v101; // eax
  __int64 v102; // r8
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+28h] [rbp-E0h]
  int pszFormat; // [rsp+30h] [rbp-D8h]
  char v106; // [rsp+48h] [rbp-C0h]
  struct _LIST_ENTRY *v107; // [rsp+50h] [rbp-B8h] BYREF
  char *EndPtr; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v109; // [rsp+60h] [rbp-A8h]
  PMESSAGE_RESOURCE_ENTRY v110; // [rsp+68h] [rbp-A0h] BYREF
  ULONG Type[2]; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER CurrentSystemTime; // [rsp+78h] [rbp-90h] BYREF
  PMESSAGE_RESOURCE_ENTRY v113; // [rsp+80h] [rbp-88h] BYREF
  int Buffer; // [rsp+88h] [rbp-80h] BYREF
  __int64 v115; // [rsp+90h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+98h] [rbp-70h] BYREF
  STRING v117; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v118; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v120[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 (__fastcall *v121)(_DWORD *, int, int); // [rsp+E0h] [rbp-28h]
  __int64 (__fastcall *v122)(__int64); // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall *v123)(__int64); // [rsp+F0h] [rbp-18h]
  __int64 (__fastcall *v124)(int, int, int, __int64, __int64, __int64); // [rsp+F8h] [rbp-10h]
  __int64 (__fastcall *v125)(int, __int64, __int64); // [rsp+100h] [rbp-8h]
  char (__fastcall *v126)(_DWORD *); // [rsp+108h] [rbp+0h]
  __int64 (__fastcall *v127)(HANDLE *, unsigned int, __int64, unsigned int); // [rsp+110h] [rbp+8h]
  __int64 (__fastcall *v128)(ULONG_PTR); // [rsp+118h] [rbp+10h]
  __int64 (__fastcall *v129)(int, int *); // [rsp+120h] [rbp+18h]
  void *(__fastcall *v130)(__int64); // [rsp+128h] [rbp+20h]
  __int128 v131; // [rsp+138h] [rbp+30h]
  __int128 v132; // [rsp+148h] [rbp+40h]
  __int128 v133; // [rsp+158h] [rbp+50h]
  struct _LIST_ENTRY *v134; // [rsp+168h] [rbp+60h]
  char pszDest[24]; // [rsp+178h] [rbp+70h] BYREF

  v1 = 0;
  v107 = 0LL;
  CurrentSystemTime.QuadPart = 0LL;
  v115 = 0LL;
  v110 = 0LL;
  v113 = 0LL;
  v117 = 0LL;
  LOBYTE(v109) = 0;
  v118 = 0LL;
  Buffer = 0;
  Type[0] = 0;
  Type[1] = 0;
  DestinationString = 0LL;
  v120[1] = 0;
  memset_0(v120, 0, 0x94uLL);
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  Pool2 = (char *)ExAllocatePool2(64LL, 0x200uLL, 0x74696E49u);
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v106 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  v6 = (char *)BugCheckParameter3[27];
  if ( v6 )
  {
    v7 = strupr(v6);
    v8 = v7;
    v9 = v7;
    if ( v7 )
    {
      v10 = strstr(v7, " HYPERVISORROOTPROC=");
      if ( v10 )
      {
        v11 = strstr(v10, "=");
        if ( v11 )
          KeRootProcSpecified = atol(v11 + 1);
      }
      v12 = strstr(v8, " HYPERVISORROOTPROCNUMANODES=");
      if ( v12 )
      {
        v13 = strstr(v12, "=");
        if ( v13 )
        {
          while ( (unsigned int)KeRootProcNumaNodesSpecified < 0x40 )
          {
            ++v13;
            v14 = (unsigned int)KeRootProcNumaNodesSpecified;
            v15 = atol(v13);
            ++KeRootProcNumaNodesSpecified;
            *((_WORD *)&KeRootProcNumaNodes + v14) = v15;
            while ( *v13 != 44 )
            {
              if ( (*v13 & 0xDF) == 0 )
                goto LABEL_15;
              ++v13;
            }
          }
        }
LABEL_15:
        v1 = 0;
      }
      v16 = strstr(v9, " HYPERVISORROOTPROCNUMANODELPS=");
      if ( v16 )
      {
        v17 = strstr(v16, "=");
        KeRootProcNumaNodesSpecified = 0;
        KeRootProcNumaNodeLpsSpecified = 1;
        v18 = v17;
        KeRootProcSpecified = 0;
        if ( v17 )
        {
          while ( 1 )
          {
            ++v18;
            EndPtr = 0LL;
            v19 = strtoul(v18, &EndPtr, 10);
            v20 = EndPtr;
            v21 = v19;
            if ( v18 != EndPtr )
            {
              if ( *EndPtr == 95 )
              {
                v18 = EndPtr + 1;
                v22 = strtoul(EndPtr + 1, &EndPtr, 10);
                v20 = EndPtr;
                v1 = v22;
              }
              if ( v18 != v20 && *v20 == 61 && (unsigned int)v21 < 0x40 )
              {
                v23 = 2 * v21;
                v18 = v20 + 1;
                if ( !qword_140FC6DC8[v23] )
                {
                  v24 = ExAllocatePool2(64LL, 0x100uLL, 0x800u);
                  if ( !v24 )
                    KeBugCheck(0x31u);
                  KeRootProcNumaNodeLps[v23] = 2048LL;
                  qword_140FC6DC8[v23] = v24;
                }
                if ( v1 < 0x20 )
                {
                  v25 = qword_140FC6DC8[v23];
                  *(_QWORD *)(v25 + 8LL * v1) = strtoui64(v18, &EndPtr, 16);
                }
              }
            }
            v1 = 0;
            while ( *v18 != 44 )
            {
              if ( (*v18 & 0xDF) == 0 )
                goto LABEL_35;
              ++v18;
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = 0LL;
  }
LABEL_35:
  v26 = KiSubNodeConfigBlock;
  word_140E66930 = 0;
  *(_BYTE *)(KiSubNodeConfigBlock + 5) &= 0xFCu;
  *(_BYTE *)(v26 + 4) = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  v27 = KiSubNodeConfigBlock;
  KiCommitGroupSubNodeAssignments(*(_WORD *)(KiSubNodeConfigBlock + 6));
  v28 = (unsigned int)InitializationPhase;
  *(_QWORD *)(v27 + 16) |= 1uLL;
  if ( !(unsigned __int8)HalInitSystem(v28, (__int64)BugCheckParameter3) )
    goto LABEL_178;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( v9 && strstr(v9, "NOGUIBOOT") )
    goto LABEL_212;
  byte_140E65EE0 = 0;
  if ( byte_140E65F51 )
  {
    if ( byte_140E65F52 && (int)BgDisplayProgressIndicator(1) >= 0 )
      byte_140E65F50 = 1;
    if ( byte_140E65F51 && byte_140E65F52 && (int)BgDisplayBackgroundUpdate(1) >= 0 )
      byte_140E65F18 = 1;
  }
  qword_140E65EF0 = (__int64)DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0LL, v29);
  if ( v9 )
  {
LABEL_212:
    if ( strstr(v9, "MININT") )
    {
      InitIsWinPEMode = 1;
      if ( strstr(v9, "INRAM") )
        InitWinPEModeType |= 0x80000000;
      else
        InitWinPEModeType |= 1u;
    }
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v110);
  v31 = Pool2;
  EndPtr = Pool2;
  v32 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v33 = RtlStringCbPrintfExA(Pool2, 0xFFuLL, &EndPtr, &pcbRemaining, 0, ": %wZ");
    if ( v33 < 0 )
      KeBugCheckEx(0x32u, v33, 7uLL, 0LL, 0LL);
    v31 = EndPtr;
    v34 = pcbRemaining;
  }
  else
  {
    v34 = 255LL;
  }
  *v31 = 0;
  v35 = v31 + 1;
  v36 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v36 < 0 )
    KeBugCheckEx(0x32u, v36, 7uLL, 1uLL, 0LL);
  if ( v32 < 0 )
  {
    v39 = RtlStringCbCopyA(v35, v34, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v39 < 0 )
      KeBugCheckEx(0x32u, v39, 7uLL, 3uLL, 0LL);
  }
  else
  {
    pszFormat = (int)Pool2;
    LODWORD(MessageEntry) = (unsigned __int16)NtBuildNumber;
    v37 = RtlStringCbPrintfA(v35, v34, (NTSTRSAFE_PCSTR)v110->Text, pszDest, MessageEntry);
    if ( v37 < 0 )
      KeBugCheckEx(0x32u, v37, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v35, v38);
  v40 = Pool2 + 256;
  v41 = Pool2;
  v42 = 2LL;
  do
  {
    *v40 = *(_OWORD *)v41;
    v40[1] = *((_OWORD *)v41 + 1);
    v40[2] = *((_OWORD *)v41 + 2);
    v40[3] = *((_OWORD *)v41 + 3);
    v40[4] = *((_OWORD *)v41 + 4);
    v40[5] = *((_OWORD *)v41 + 5);
    v40[6] = *((_OWORD *)v41 + 6);
    v40 += 8;
    v43 = *((_OWORD *)v41 + 7);
    v41 += 128;
    *(v40 - 1) = v43;
    --v42;
  }
  while ( v42 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3, 128LL) )
LABEL_209:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    Flink_high = HIDWORD(Blink[27].Flink);
    if ( Flink_high == -1 )
    {
      HIDWORD(Blink[27].Flink) = *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[32];
      Flink_high = *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[32];
      v106 = 1;
    }
    Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * Flink_high);
    *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
    ExpWriteTimeZoneBias(&Blink[27].Blink);
  }
  GetBootSystemTime(BugCheckParameter3[30], &v107);
  if ( v9 )
  {
    v45 = strstr(v9, "YEAR");
    if ( v45 )
    {
      v46 = strstr(v45, "=");
      if ( v46 )
      {
        v47 = atol(v46 + 1);
        RtlpTimeToTimeFields((__int64 *)&v107, &v118);
        LOWORD(v118) = v47;
        RtlpTimeFieldsToTime((__int64)&v118, (__int64 *)&v107);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    v48 = v107;
  else
    v48 = (struct _LIST_ENTRY *)((char *)v107 - (char *)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink);
  CurrentSystemTime.QuadPart = (LONGLONG)v48;
  KeSetSystemTime((__int64)&v107, (__int64)&v115, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (__int64 *)&v107,
    &v115,
    0,
    (int)&CurrentSystemTime,
    HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
    pszFormat,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type[1], &KeRegisteredProcessors, 4u, Type) < 0
    || Type[0] != 4
    || Type[1] != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v9 )
  {
    v50 = strstr(v9, " BOOTPROC=");
    if ( v50 )
    {
      v51 = strstr(v50, "=");
      if ( v51 )
        KeBootprocSpecified = atol(v51 + 1);
    }
    v52 = strstr(v9, " NUMPROC=");
    if ( v52 )
    {
      v53 = strstr(v52, "=");
      if ( v53 )
        KeNumprocSpecified = atol(v53 + 1);
    }
    v54 = strstr(v9, " HYPERVISORNUMPROC=");
    if ( v54 )
    {
      v55 = strstr(v54, "=");
      if ( v55 )
        KeHypervisorNumprocSpecified = atol(v55 + 1);
    }
    if ( !KeRootProcNumaNodeLpsSpecified )
    {
      v56 = strstr(v9, " HYPERVISORROOTPROCPERNODE=");
      if ( v56 )
      {
        v57 = strstr(v56, "=");
        if ( v57 )
          KeRootProcPerNodeSpecified = atol(v57 + 1);
      }
      v58 = strstr(v9, " HYPERVISORROOTPROCPERCORE=");
      if ( v58 )
      {
        v59 = strstr(v58, "=");
        if ( v59 )
          KeRootProcPerCoreSpecified = atol(v59 + 1);
      }
    }
    if ( strstr(v9, " MAXPROC") )
      KeMaxprocSpecified = 1;
  }
  qword_140FFC908 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_140FFC910 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess(
    (__int64)KeGetCurrentThread()->ApcState.Process,
    0,
    (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
  MakeGdtReadOnly();
  v60 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v113) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v113->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_178:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v117, v60);
  if ( v117.Length >= 2u )
    v117.Length -= 2;
  v61 = 1073741981;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    v61 = 1073741960;
  v62 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v61, &v110);
  v63 = 0LL;
  v64 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v64 )
  {
    v65 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v63 += *v65;
      v65 += 2;
      --v64;
    }
    while ( v64 );
  }
  if ( v62 < 0 )
    v66 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v63 + 255) >> 8,
            &v117);
  else
    v66 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v110->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v63 + 255) >> 8,
            &v117);
  if ( v66 < 0 )
    KeBugCheckEx(0x32u, v66, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)Pool2, v67);
  ExFreePoolWithTag(Pool2, 0);
  if ( !(unsigned __int8)ObInitSystem(1LL) )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem(BugCheckParameter3) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !(unsigned __int8)IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem((unsigned int)InitializationPhase, 0LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &stru_140FC11F0.SchedulerApcFill5[8],
             &TmEnlistmentObjectType,
             &stru_140FC11F0.SchedulerApcFill5[16],
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v69 = DbgkInitialize();
  if ( v69 < 0 )
    KeBugCheckEx(0x32u, v69, 0LL, 0LL, 0LL);
  UcInitialize(0);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  v73 = SmInitSystem(0, v70, v71, v72);
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 0xDuLL, 0LL, 0LL);
  PsInitSystem(1, BugCheckParameter3);
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140FFC928 = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(1, (ULONG_PTR)BugCheckParameter3);
  qword_140FFC930 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !CcInitializeCacheManager(1) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1((ULONG_PTR)BugCheckParameter3) )
    KeBugCheck(0x67u);
  PsInitializeBootCpuPartitions();
  v75 = ExInitializeLeapSecondData();
  if ( v75 < 0 )
    KeBugCheckEx(0x32u, v75, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140FFC8F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset_0(v120, 0, 0x98uLL);
  v121 = MmMapLockedRestartPages;
  v122 = MmUnmapLockedRestartPages;
  v123 = KeRemoveEnclavePage;
  v124 = KdPullRemoteFileEx;
  v125 = CmSaveKeyToBuffer;
  v126 = KeIsBugCheckActive;
  v127 = CmOpenKeyForBugCheckRecovery;
  v128 = MiPageToNode;
  v129 = MmGetNextNode;
  v130 = MmGetFileObjectForSection;
  v120[0] = 152;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_140FFC8A0 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v77 = (int)KsrInitSystem(BugCheckParameter3, v120, DisplayContext);
  qword_140FFC900 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v77 + 0x80000000) >= 0 && (_DWORD)v77 != -1073741637 )
    KeBugCheckEx(0x32u, v77, 0LL, 1uLL, 0LL);
  *(_OWORD *)&ExpSysDbgLock.SavedApcStateFill[24] = v131;
  *(_OWORD *)&ExpSysDbgLock.SavedApcStateFill[40] = v132;
  *(_OWORD *)&ExpSysDbgLock.SchedulerApcFill5[8] = v133;
  ExpSysDbgLock.SchedulerApc.ApcListEntry.Blink = v134;
  v78 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v78 < 0 )
    KeBugCheckEx(0x32u, v78, 8uLL, 0LL, 0LL);
  v79 = MfgInitSystem((__int64)BugCheckParameter3);
  if ( v79 < 0 )
    KeBugCheckEx(0x32u, v79, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v83 = SmInitSystem(1, v80, v81, v82);
  if ( v83 < 0 )
    KeBugCheckEx(0x32u, v83, 0xEuLL, 0LL, 0LL);
  v84 = VmInitSystem(1);
  if ( v84 < 0 )
    KeBugCheckEx(0x32u, v84, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3[30] + 2656LL) & 2) == 0 || strstr(v9, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (HvlpFlags & 0x2000000) != 0 )
    ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeTimeRefresh();
  ExAcquireTimeRefreshLockExclusive(v86, v85, v87, v88);
  ExInitializeUtcTimeZoneBias(&CurrentSystemTime);
  v89 = HIDWORD(Blink[27].Flink);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLockExclusive();
  if ( v106 )
  {
    v107 = (struct _LIST_ENTRY *)((char *)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink
                                + CurrentSystemTime.QuadPart);
    KeSetSystemTime((__int64)&v107, (__int64)&v115, 4);
  }
  else if ( v89 != HIDWORD(Blink[27].Flink) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&PspTlsContext.StackBase,
    0LL,
    0LL,
    0,
    0x38uLL,
    0x656C5252u,
    0x10u);
  HvlDebuggerSupportInitialize((__int64)BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( v9 )
  {
    v90 = strstr(v9, "SAFEBOOT:");
    if ( v90 )
    {
      v91 = v90 + 9;
      if ( !strncmp(v90 + 9, "MINIMAL", 7uLL) )
      {
        v91 += 7;
        InitSafeBootMode = 1;
      }
      else if ( !strncmp(v91, "NETWORK", 7uLL) )
      {
        InitSafeBootMode = 2;
        v91 += 7;
      }
      else if ( !strncmp(v91, "DSREPAIR", 8uLL) )
      {
        v91 += 8;
        InitSafeBootMode = 3;
      }
      else
      {
        InitSafeBootMode = 0;
      }
      if ( *v91 )
      {
        v92 = strncmp(v91, "(ALTERNATESHELL)", 0x10uLL);
        v93 = (unsigned __int8)v109;
        if ( !v92 )
          v93 = 1;
        LODWORD(v109) = v93;
      }
      if ( InitSafeBootMode )
      {
        v113 = 0LL;
        v94 = 0;
        switch ( InitSafeBootMode )
        {
          case 1:
            v94 = 168;
            break;
          case 2:
            v94 = 169;
            break;
          case 3:
            v94 = 170;
            break;
        }
        if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v94, &v113) >= 0 )
          InbvDisplayString((__int64)v113->Text, v95);
      }
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter3[30] + 132LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v110) >= 0 )
      InbvDisplayString((__int64)v110->Text, v96);
    IopInitializeBootLogging((__int64)BugCheckParameter3, (__int64)(Pool2 + 256));
  }
  ExInitSystemPhase2();
  v97 = MmWriteableSharedUserData;
  v98 = ExpComputeCyclesPerYield();
  v99 = InitIsWinPEMode == 0;
  *(_WORD *)(v97 + 726) = v98;
  if ( !v99 )
    CreateMiniNtBootKey();
  SymCryptEntropyAccumulatorGlobalInitFromRegistry();
  v100 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v100 < 0 )
    KeBugCheckEx(0x32u, v100, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v101 = ExInitializeExternalBootSupport();
  if ( v101 < 0 )
    KeBugCheckEx(0x32u, v101, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3, v102) )
    goto LABEL_209;
  RtlInitFunctionalityCache();
  KeWaitForSingleObject(&stru_140E2EC68, Executive, 0, 0, 0LL);
  return v109;
}
