/*
 * XREFs of Phase1InitializationDiscard @ 0x140CABD00
 * Callers:
 *     Phase1Initialization @ 0x14077FEA0 (Phase1Initialization.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetSystemTime @ 0x1403C1C20 (KeSetSystemTime.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PoNotifySystemTimeSet @ 0x14043919C (PoNotifySystemTimeSet.c)
 *     RtlpTimeToTimeFields @ 0x140451D40 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x1404522F8 (RtlpTimeFieldsToTime.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlStringCbCopyA @ 0x14047C2C8 (RtlStringCbCopyA.c)
 *     FsRtlSendModernAppTermination @ 0x1404D4E50 (FsRtlSendModernAppTermination.c)
 *     KeSetAffinityProcess @ 0x14050BCE4 (KeSetAffinityProcess.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _strupr @ 0x140535360 (_strupr.c)
 *     strtoul @ 0x140535858 (strtoul.c)
 *     _strtoui64 @ 0x140535AF0 (_strtoui64.c)
 *     strstr @ 0x140535B20 (strstr.c)
 *     atol @ 0x140535D80 (atol.c)
 *     DisplayBootBitmap @ 0x14057622C (DisplayBootBitmap.c)
 *     MakeGdtReadOnly @ 0x1405764CC (MakeGdtReadOnly.c)
 *     RtlStringCbPrintfA @ 0x140576648 (RtlStringCbPrintfA.c)
 *     RtlStringCbPrintfExA @ 0x14057669C (RtlStringCbPrintfExA.c)
 *     HvlDebuggerSupportInitialize @ 0x1405B83B0 (HvlDebuggerSupportInitialize.c)
 *     InbvDisplayString @ 0x1405C4BF0 (InbvDisplayString.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1405EF5B0 (KiCommitGroupSubNodeAssignments.c)
 *     RtlInitializeCompression @ 0x140617DD0 (RtlInitializeCompression.c)
 *     UcInitialize @ 0x140712834 (UcInitialize.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x140726BD0 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     strncmp @ 0x14073D360 (strncmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopInitializeBootLogging @ 0x140794CC0 (IopInitializeBootLogging.c)
 *     AlpcpInitSystem @ 0x1407C1414 (AlpcpInitSystem.c)
 *     RtlInitFunctionalityCache @ 0x140800378 (RtlInitFunctionalityCache.c)
 *     EtwTimeProfileReset @ 0x1408277CC (EtwTimeProfileReset.c)
 *     ExInitializeLeapSecondData @ 0x1408356F4 (ExInitializeLeapSecondData.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1408358B8 (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x140837E48 (ExInitLicenseCallback.c)
 *     BcdInitializeBcdSyncMutant @ 0x140890FBC (BcdInitializeBcdSyncMutant.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4 (ExReleaseTimeRefreshLockExclusive.c)
 *     RtlFindMessage @ 0x140A86CF0 (RtlFindMessage.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     ExpWriteTimeZoneBias @ 0x140B12910 (ExpWriteTimeZoneBias.c)
 *     ExInitializePagedLookasideList @ 0x140B31D30 (ExInitializePagedLookasideList.c)
 *     HalInitSystem @ 0x140BE9970 (HalInitSystem.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 *     BgDisplayBackgroundUpdate @ 0x140C4F930 (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140C4F96C (BgDisplayProgressIndicator.c)
 *     BgGetDisplayContext @ 0x140C4FA38 (BgGetDisplayContext.c)
 *     SmInitSystem @ 0x140C7F2E8 (SmInitSystem.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 *     PsInitSystem @ 0x140C7FD24 (PsInitSystem.c)
 *     MmInitSystem @ 0x140C7FD84 (MmInitSystem.c)
 *     VmInitSystem @ 0x140C80258 (VmInitSystem.c)
 *     CreateMiniNtBootKey @ 0x140CA9D20 (CreateMiniNtBootKey.c)
 *     CreateSystemRootLink @ 0x140CA9EFC (CreateSystemRootLink.c)
 *     ExpComputeCyclesPerYield @ 0x140CAA424 (ExpComputeCyclesPerYield.c)
 *     GetBootSystemTime @ 0x140CAA5C4 (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140CAB730 (InitSkuSessionParameters.c)
 *     MfgInitSystem @ 0x140CAB968 (MfgInitSystem.c)
 *     HalAllProcessorsStarted @ 0x140CAD620 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140CAD650 (HalReportResourceUsage.c)
 *     DbgkInitialize @ 0x140CB5B80 (DbgkInitialize.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 *     InbvDriverInitialize @ 0x140CBA030 (InbvDriverInitialize.c)
 *     IoCreateObjectTypes @ 0x140CBA8B8 (IoCreateObjectTypes.c)
 *     PpInitSystem @ 0x140CC39F0 (PpInitSystem.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140CCA97C (KiPerformGroupConfiguration.c)
 *     PfInitializeSuperfetch @ 0x140CCE038 (PfInitializeSuperfetch.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PsInitializeBootCpuPartitions @ 0x140CD7AC4 (PsInitializeBootCpuPartitions.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140CDCFD4 (SeCodeIntegrityInitializePolicy.c)
 *     SeInitSystem @ 0x140CDD158 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140CDE894 (VerifierInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140CE3D60 (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140CE3E7C (ExInitSystem.c)
 *     ExInitSystemPhase2 @ 0x140CE4044 (ExInitSystemPhase2.c)
 *     ExInitializeExternalBootSupport @ 0x140CE6244 (ExInitializeExternalBootSupport.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
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
  int Message; // eax
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
  LARGE_INTEGER v48; // rax
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
  __int64 v60; // rcx
  const char *v61; // rbx
  unsigned int v62; // r9d
  int v63; // eax
  __int64 v64; // r9
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  NTSTATUS v67; // eax
  __int64 v68; // rdx
  int inited; // eax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  struct _KLOCK_ENTRIES *v73; // r9
  int v74; // eax
  int SystemRootLink; // eax
  int v76; // eax
  _LIST_ENTRY *DisplayContext; // rax
  ULONG_PTR v78; // rbx
  int v79; // eax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // r8
  struct _KLOCK_ENTRIES *v83; // r9
  int v84; // eax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  struct _KLOCK_ENTRIES *v92; // r9
  int v93; // ebx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  char *v97; // rax
  const char *v98; // rbx
  int v99; // eax
  int v100; // ecx
  unsigned int v101; // r9d
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rbx
  __int16 v105; // ax
  bool v106; // zf
  int v107; // eax
  int v108; // eax
  __int64 v109; // r8
  ULONG dwFlags[2]; // [rsp+28h] [rbp-E0h]
  int pszFormat; // [rsp+30h] [rbp-D8h]
  char v113; // [rsp+48h] [rbp-C0h]
  _BYTE *v114; // [rsp+50h] [rbp-B8h] BYREF
  char *EndPtr; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v116; // [rsp+60h] [rbp-A8h]
  const char *v117; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v118; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER v119; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 *v120; // [rsp+80h] [rbp-88h] BYREF
  int v121; // [rsp+88h] [rbp-80h] BYREF
  __int64 v122; // [rsp+90h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+98h] [rbp-70h] BYREF
  STRING v124; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v125; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v127[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 (__fastcall *v128)(_DWORD *, int, int); // [rsp+E0h] [rbp-28h]
  __int64 (__fastcall *v129)(__int64); // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall *v130)(__int64); // [rsp+F0h] [rbp-18h]
  __int64 (__fastcall *v131)(int, int, int, __int64, __int64, __int64); // [rsp+F8h] [rbp-10h]
  __int64 (__fastcall *v132)(int, __int64, __int64); // [rsp+100h] [rbp-8h]
  char (__fastcall *v133)(_DWORD *); // [rsp+108h] [rbp+0h]
  __int64 (__fastcall *v134)(HANDLE *, unsigned int, __int64, unsigned int); // [rsp+110h] [rbp+8h]
  __int64 (__fastcall *v135)(ULONG_PTR); // [rsp+118h] [rbp+10h]
  __int64 (__fastcall *v136)(int, int *); // [rsp+120h] [rbp+18h]
  void *(__fastcall *v137)(__int64); // [rsp+128h] [rbp+20h]
  __int128 v138; // [rsp+138h] [rbp+30h]
  __int128 v139; // [rsp+148h] [rbp+40h]
  _LIST_ENTRY v140; // [rsp+158h] [rbp+50h]
  struct _LIST_ENTRY *v141; // [rsp+168h] [rbp+60h]
  char pszDest[24]; // [rsp+178h] [rbp+70h] BYREF

  v1 = 0;
  v114 = 0LL;
  v119.QuadPart = 0LL;
  v122 = 0LL;
  v117 = 0LL;
  v120 = 0LL;
  v124 = 0LL;
  LOBYTE(v116) = 0;
  v125 = 0LL;
  v121 = 0;
  v118 = 0LL;
  DestinationString = 0LL;
  v127[1] = 0;
  memset_0(v127, 0, 0x94uLL);
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  Pool2 = (char *)ExAllocatePool2(64LL, 0x200uLL, 0x74696E49u);
  if ( !Pool2 )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v113 = 0;
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
                if ( !qword_140FC5DC8[v23] )
                {
                  v24 = ExAllocatePool2(64LL, 0x100uLL, 0x800u);
                  if ( !v24 )
                    KeBugCheck(0x31u);
                  KeRootProcNumaNodeLps[v23] = 2048LL;
                  qword_140FC5DC8[v23] = v24;
                }
                if ( v1 < 0x20 )
                {
                  v25 = qword_140FC5DC8[v23];
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
  word_140E66758 = 0;
  *(_BYTE *)(KiSubNodeConfigBlock + 5) &= 0xFCu;
  *(_BYTE *)(v26 + 4) = 0;
  KiPerformGroupConfiguration(BugCheckParameter3);
  v27 = KiSubNodeConfigBlock;
  KiCommitGroupSubNodeAssignments(*(_WORD *)(KiSubNodeConfigBlock + 6));
  v28 = (unsigned int)InitializationPhase;
  *(_QWORD *)(v27 + 16) |= 1uLL;
  if ( !(unsigned __int8)HalInitSystem(v28, (__int64)BugCheckParameter3) )
    goto LABEL_177;
  KeInitializeClock((unsigned int)InitializationPhase);
  if ( v9 && strstr(v9, "NOGUIBOOT") )
    goto LABEL_211;
  byte_140E65CE8 = 0;
  if ( byte_140E65D3C )
  {
    if ( byte_140E65D44 && (int)BgDisplayProgressIndicator(1) >= 0 )
      byte_140E65D3D = 1;
    if ( byte_140E65D3C && byte_140E65D44 && (int)BgDisplayBackgroundUpdate(1) >= 0 )
      byte_140E65D09 = 1;
  }
  qword_140E65CD8 = (__int64)DisplayFilter;
  InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
  DisplayBootBitmap(0LL, v29);
  if ( v9 )
  {
LABEL_211:
    if ( strstr(v9, "MININT") )
    {
      InitIsWinPEMode = 1;
      if ( strstr(v9, "INRAM") )
        InitWinPEModeType |= 0x80000000;
      else
        InitWinPEModeType |= 1u;
    }
  }
  Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x4000007Eu, (unsigned __int16 **)&v117);
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
    dwFlags[0] = (unsigned __int16)NtBuildNumber;
    v37 = RtlStringCbPrintfA(v35, v34, v117 + 4, pszDest, *(_QWORD *)dwFlags);
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
LABEL_208:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    Flink_high = HIDWORD(Blink[27].Flink);
    if ( Flink_high == -1 )
    {
      HIDWORD(Blink[27].Flink) = *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[32];
      Flink_high = *(_DWORD *)&PspSiloMonitorLock.SchedulerApcFill5[32];
      v113 = 1;
    }
    Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * Flink_high);
    *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
    ExpWriteTimeZoneBias(&Blink[27].Blink);
  }
  GetBootSystemTime(BugCheckParameter3[30], (struct _LIST_ENTRY **)&v114);
  if ( v9 )
  {
    v45 = strstr(v9, "YEAR");
    if ( v45 )
    {
      v46 = strstr(v45, "=");
      if ( v46 )
      {
        v47 = atol(v46 + 1);
        RtlpTimeToTimeFields((__int64 *)&v114, &v125);
        LOWORD(v125) = v47;
        RtlpTimeFieldsToTime((__int64)&v125, (__int64 *)&v114);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    v48.QuadPart = (LONGLONG)v114;
  else
    v48.QuadPart = v114 - (_BYTE *)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
  v119 = v48;
  KeSetSystemTime((__int64)&v114, (__int64)&v122, 4);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  PoNotifySystemTimeSet(
    (void **)&v114,
    &v122,
    0,
    (int)&v119,
    HIDWORD(CurrentServerSiloGlobals[76].Blink[27].Flink),
    pszFormat,
    ExpSystemIsInCmosMode);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v118 + 4) < 0 || v118 != 0x400000004LL )
    KeRegisteredProcessors = 1;
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
  qword_140FFB908 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors(v60);
  qword_140FFB910 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwTimeProfileReset();
  KeSetAffinityProcess(
    (__int64)KeGetCurrentThread()->ApcState.Process,
    0,
    (struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister);
  MakeGdtReadOnly();
  v61 = (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000089u, &v120) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)(v120 + 2);
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_177:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v124, v61);
  if ( v124.Length >= 2u )
    v124.Length -= 2;
  v62 = 1073741981;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    v62 = 1073741960;
  v63 = RtlFindMessage(0x140000000LL, 0xBu, 0, v62, (unsigned __int16 **)&v117);
  v64 = 0LL;
  v65 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v65 )
  {
    v66 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v64 += *v66;
      v66 += 2;
      --v65;
    }
    while ( v65 );
  }
  if ( v63 < 0 )
    v67 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v64 + 255) >> 8,
            &v124);
  else
    v67 = RtlStringCbPrintfA(
            Pool2,
            0x100uLL,
            v117 + 4,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v64 + 255) >> 8,
            &v124);
  if ( v67 < 0 )
    KeBugCheckEx(0x32u, v67, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)Pool2, v68);
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
             &stru_140FC01F0.SchedulerApcFill5[16],
             &TmEnlistmentObjectType,
             &stru_140FC01F0.SchedulerApcFill5[24],
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v70 = DbgkInitialize();
  if ( v70 < 0 )
    KeBugCheckEx(0x32u, v70, 0LL, 0LL, 0LL);
  UcInitialize(0);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  v74 = SmInitSystem(0, v71, v72, v73);
  if ( v74 < 0 )
    KeBugCheckEx(0x32u, v74, 0xDuLL, 0LL, 0LL);
  PsInitSystem(1, BugCheckParameter3);
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140FFB928 = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(1, (ULONG_PTR)BugCheckParameter3);
  qword_140FFB930 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !CcInitializeCacheManager(1) )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1((ULONG_PTR)BugCheckParameter3) )
    KeBugCheck(0x67u);
  PsInitializeBootCpuPartitions();
  v76 = ExInitializeLeapSecondData();
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140FFB8F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset_0(v127, 0, 0x98uLL);
  v128 = MmMapLockedRestartPages;
  v129 = MmUnmapLockedRestartPages;
  v130 = KeRemoveEnclavePage;
  v131 = KdPullRemoteFileEx;
  v132 = CmSaveKeyToBuffer;
  v133 = KeIsBugCheckActive;
  v134 = CmOpenKeyForBugCheckRecovery;
  v135 = MiPageToNode;
  v136 = MmGetNextNode;
  v137 = MmGetFileObjectForSection;
  v127[0] = 152;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_140FFB8A0 = (__int64)VslpRegisterKsrCallback;
  }
  DisplayContext = BgGetDisplayContext();
  v78 = (int)KsrInitSystem(BugCheckParameter3, v127, DisplayContext);
  qword_140FFB900 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v78 + 0x80000000) >= 0 && (_DWORD)v78 != -1073741637 )
    KeBugCheckEx(0x32u, v78, 0LL, 1uLL, 0LL);
  *(_OWORD *)&ExpSysDbgLock.AffinityVersion = v138;
  *(_OWORD *)&ExpSysDbgLock.AffinityPrimaryGroup = v139;
  ExpSysDbgLock.SavedApcState.ApcListHead[0] = v140;
  ExpSysDbgLock.SavedApcState.ApcListHead[1].Flink = v141;
  v79 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v79 < 0 )
    KeBugCheckEx(0x32u, v79, 8uLL, 0LL, 0LL);
  v80 = MfgInitSystem((__int64)BugCheckParameter3);
  if ( v80 < 0 )
    KeBugCheckEx(0x32u, v80, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  v84 = SmInitSystem(1, v81, v82, v83);
  if ( v84 < 0 )
    KeBugCheckEx(0x32u, v84, 0xEuLL, 0LL, 0LL);
  v85 = VmInitSystem(1);
  if ( v85 < 0 )
    KeBugCheckEx(0x32u, v85, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3[30] + 2656LL) & 2) == 0 || strstr(v9, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( (HvlpFlags & 0x2000000) != 0 )
    ZwUpdateWnfStateData((__int64)&WNF_HVL_CPU_MGMT_PARTITION, 0LL);
  FsRtlSendModernAppTermination(&v121, 1u, 1);
  ExInitializeTimeRefresh(v87, v86, v88);
  ExAcquireTimeRefreshLockExclusive(v90, v89, v91, v92);
  ExInitializeUtcTimeZoneBias(&v119);
  v93 = HIDWORD(Blink[27].Flink);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLockExclusive();
  if ( v113 )
  {
    v114 = (char *)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink + v119.QuadPart;
    KeSetSystemTime((__int64)&v114, (__int64)&v122, 4);
  }
  else if ( v93 != HIDWORD(Blink[27].Flink) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v95, v94, v96) )
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
    v97 = strstr(v9, "SAFEBOOT:");
    if ( v97 )
    {
      v98 = v97 + 9;
      if ( !strncmp(v97 + 9, "MINIMAL", 7uLL) )
      {
        v98 += 7;
        LODWORD(InitSafeBootMode) = 1;
      }
      else if ( !strncmp(v98, "NETWORK", 7uLL) )
      {
        LODWORD(InitSafeBootMode) = 2;
        v98 += 7;
      }
      else if ( !strncmp(v98, "DSREPAIR", 8uLL) )
      {
        v98 += 8;
        LODWORD(InitSafeBootMode) = 3;
      }
      else
      {
        LODWORD(InitSafeBootMode) = 0;
      }
      if ( *v98 )
      {
        v99 = strncmp(v98, "(ALTERNATESHELL)", 0x10uLL);
        v100 = (unsigned __int8)v116;
        if ( !v99 )
          v100 = 1;
        LODWORD(v116) = v100;
      }
      if ( (_DWORD)InitSafeBootMode )
      {
        v120 = 0LL;
        v101 = 0;
        switch ( (_DWORD)InitSafeBootMode )
        {
          case 1:
            v101 = 168;
            break;
          case 2:
            v101 = 169;
            break;
          case 3:
            v101 = 170;
            break;
        }
        if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, v101, &v120) >= 0 )
          InbvDisplayString((__int64)(v120 + 2), v102);
      }
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter3[30] + 132LL) & 0x800) != 0 )
  {
    if ( (int)RtlFindMessage(0x140000000LL, 0xBu, 0, 0xB7u, (unsigned __int16 **)&v117) >= 0 )
      InbvDisplayString((__int64)(v117 + 4), v103);
    IopInitializeBootLogging((__int64)BugCheckParameter3);
  }
  ExInitSystemPhase2();
  v104 = MmWriteableSharedUserData;
  v105 = ExpComputeCyclesPerYield();
  v106 = InitIsWinPEMode == 0;
  *(_WORD *)(v104 + 726) = v105;
  if ( !v106 )
    CreateMiniNtBootKey();
  SymCryptEntropyAccumulatorGlobalInitFromRegistry();
  v107 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v107 < 0 )
    KeBugCheckEx(0x32u, v107, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v108 = ExInitializeExternalBootSupport();
  if ( v108 < 0 )
    KeBugCheckEx(0x32u, v108, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3, v109) )
    goto LABEL_208;
  RtlInitFunctionalityCache();
  KeWaitForSingleObject(&stru_140E2EAE8, Executive, 0, 0, 0LL);
  return v116;
}
