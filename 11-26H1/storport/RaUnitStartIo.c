/*
 * XREFs of RaUnitStartIo @ 0x140013D70
 * Callers:
 *     <none>
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x140003A14 (RaidNtStatusToSrbStatus.c)
 *     RaidXrbDeallocateResources @ 0x1400127A0 (RaidXrbDeallocateResources.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1400134E4 (RaidIsUnresponsiveBlockedCmd.c)
 *     StorRemoveIoGatewayItem @ 0x1400135F0 (StorRemoveIoGatewayItem.c)
 *     RaidUnitClaimIrp @ 0x140014BFC (RaidUnitClaimIrp.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140015840 (RaidAdapterPostScatterGatherExecute.c)
 *     StorUnmapSenseInfo @ 0x140017530 (StorUnmapSenseInfo.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidSrbStatusToNtStatus @ 0x14001CD48 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140026404 (McTemplateK0dud_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x14002648C (McTemplateK0zqjuuujssstsxx_EtwWriteTransfer.c)
 *     RaidProcessDeferredItemsWorker @ 0x14002AA2C (RaidProcessDeferredItemsWorker.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x14002B9D4 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidAdapterSupportsAbortCommand @ 0x14002E2F0 (RaidAdapterSupportsAbortCommand.c)
 *     IsZonedWriteRequest @ 0x140034D00 (IsZonedWriteRequest.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1400531D0 (RaidAdapterAcquireCryptoKeyResources.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1400593D0 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x14005C9E0 (RaidAdapterReleaseCryptoKeyResources.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x140071CF8 (RaidReleaseNvmeIceKeyResources.c)
 *     RaidUpdateZoneIoSubmission @ 0x14007461C (RaidUpdateZoneIoSubmission.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x140078484 (RaidUnitIsRegisteredForIdleDetection.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  _ACCESS_STATE *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r14
  char v11; // dl
  __int64 v12; // r15
  int v13; // ecx
  unsigned int v14; // r11d
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  int v17; // r10d
  __int64 v18; // r9
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r12d
  __int64 v27; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int64 v29; // rax
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  __int64 v31; // rax
  char v32; // bl
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // dl
  __int64 v38; // r8
  bool v39; // bl
  __int64 *v40; // rax
  __int64 v41; // rcx
  void (__fastcall *v42)(__int64, _QWORD, bool); // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // r15
  __int64 v47; // r12
  bool v48; // zf
  __int64 v49; // rcx
  PIRP v50; // rsi
  __int64 v51; // r14
  _IO_SECURITY_CONTEXT *v52; // r13
  unsigned __int64 FullCreateOptions; // rcx
  _IO_SECURITY_CONTEXT *v54; // rax
  BOOL v55; // ecx
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  int v58; // eax
  bool v59; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 v61; // r14
  __int64 v62; // r13
  __int64 v63; // rdx
  unsigned __int8 *v64; // r11
  _IO_STACK_LOCATION *v65; // rcx
  unsigned __int8 MajorFunction; // al
  struct _KDPC *v67; // rcx
  int v68; // r15d
  unsigned int *v69; // rcx
  unsigned int v70; // r13d
  __int64 v71; // rdx
  bool v72; // bl
  __int64 *v73; // r15
  __int64 v74; // rcx
  __int64 v75; // rcx
  _QWORD *v76; // rcx
  unsigned __int64 v77; // r8
  signed __int32 v78; // eax
  signed __int32 v79; // ett
  char v80; // al
  char v81; // al
  int v82; // eax
  PKSPIN_LOCK v83; // rcx
  KSPIN_LOCK v84; // rdx
  char *v85; // rax
  int v86; // r10d
  _DWORD *Information; // rax
  unsigned int v88; // eax
  unsigned int i; // r14d
  KSPIN_LOCK v90; // r13
  ULONGLONG UnbiasedInterruptTime; // rax
  unsigned __int64 v92; // r8
  signed __int32 v93; // eax
  const char *v94; // r15
  char v95; // al
  __int64 v96; // rax
  int v97; // edx
  __int64 v98; // rax
  char v99; // al
  _IO_SECURITY_CONTEXT *v100; // r8
  char v101; // r13
  unsigned __int8 v102; // r9
  char v103; // r10
  char Flags; // r12
  char LowPart_high; // r14
  unsigned int AccessState; // ecx
  __int64 v107; // rax
  signed __int32 v108; // ett
  LARGE_INTEGER v109; // r13
  __int64 v110; // rcx
  char v111; // al
  char v112; // cl
  __int64 *v113; // rax
  __int64 v114; // r9
  __int64 v115; // rdx
  void (__fastcall *v116)(__int64, _QWORD, bool); // rax
  unsigned int HighestNodeNumber; // r8d
  KIRQL v118; // al
  __int64 v119; // rdx
  __int16 v120; // cx
  _DWORD *v121; // rcx
  _DWORD *v122; // rcx
  _IO_SECURITY_CONTEXT *v123; // r13
  __int64 v124; // r14
  __int64 v125; // r15
  __int64 v126; // r15
  unsigned __int64 v127; // rax
  int v128; // r11d
  char v129; // al
  unsigned __int64 v130; // r9
  unsigned __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // r10
  _QWORD *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r8
  _QWORD *v137; // rax
  int v138; // r11d
  char v139; // al
  unsigned __int64 v140; // r9
  unsigned __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // r10
  _QWORD *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // r8
  _QWORD *v147; // rax
  int v148; // edx
  int v149; // ecx
  int v150; // r9d
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v155; // rbx
  unsigned int v156; // r8d
  __int64 v157; // rdx
  __int64 v158; // rcx
  unsigned __int64 v159; // rax
  LARGE_INTEGER v160; // rax
  LARGE_INTEGER v161; // rdx
  int v162; // ecx
  unsigned __int64 v163; // r8
  char v164; // r10
  unsigned __int64 v165; // r9
  unsigned int v166; // r10d
  unsigned int v167; // r8d
  __int64 v168; // rcx
  unsigned __int64 v169; // r9
  char *v170; // rdx
  int v171; // eax
  int AccessState_high; // eax
  __int64 v173; // rax
  unsigned __int64 v174; // r8
  signed __int32 v175; // eax
  signed __int32 v176; // ett
  __int64 v177; // rcx
  unsigned __int64 DesiredAccess; // rax
  int v179; // ecx
  int v180; // ecx
  unsigned __int64 v181; // rcx
  char v182; // al
  char *v183; // r14
  unsigned int v184; // eax
  int v186; // [rsp+38h] [rbp-D8h]
  int v187; // [rsp+38h] [rbp-D8h]
  KIRQL v189; // [rsp+90h] [rbp-80h]
  KIRQL v190; // [rsp+90h] [rbp-80h]
  char v191; // [rsp+91h] [rbp-7Fh]
  unsigned int v192; // [rsp+94h] [rbp-7Ch]
  BOOL v193; // [rsp+94h] [rbp-7Ch]
  int v194; // [rsp+94h] [rbp-7Ch]
  unsigned int v195; // [rsp+94h] [rbp-7Ch]
  int v196; // [rsp+98h] [rbp-78h]
  unsigned int v197; // [rsp+98h] [rbp-78h]
  unsigned int v198; // [rsp+98h] [rbp-78h]
  unsigned __int64 v199; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v200; // [rsp+A8h] [rbp-68h]
  int *v201; // [rsp+B0h] [rbp-60h]
  PIRP Irp; // [rsp+B8h] [rbp-58h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-48h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v206; // [rsp+F0h] [rbp-20h] BYREF
  _OWORD v207[2]; // [rsp+100h] [rbp-10h] BYREF
  __int128 v208; // [rsp+120h] [rbp+10h]
  __int64 v209; // [rsp+130h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  PerformanceFrequency.QuadPart = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(v4 + 8);
  v10 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)&v206 = a3;
  Irp = (PIRP)a2;
  *(_BYTE *)(v9 + 3) = 0;
  LODWORD(v201) = 0;
  v196 = 0;
  v200 = 0LL;
  v191 = 0;
  if ( *(int *)(v10 + 4184) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v10 + 1168)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 4184)) == 1 )
      RaidProcessDeferredItemsWorker(v10 + 1072, *(_QWORD *)(v10 + 8), a4);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 4184));
  }
  v11 = *(_BYTE *)(v9 + 2);
  if ( v11 != 40 )
  {
    v12 = *(_QWORD *)(v9 + 40);
    v191 = *(_BYTE *)(v9 + 72);
    LODWORD(v199) = *(_DWORD *)(v9 + 12);
    if ( *(_QWORD *)(v9 + 40) )
      *(_QWORD *)(v9 + 40) = 0LL;
    goto LABEL_14;
  }
  v12 = *(_QWORD *)(v9 + 104);
  v13 = *(_DWORD *)(v9 + 24);
  v200 = v9;
  LODWORD(v199) = v13;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_14;
  v14 = 0;
  v192 = *(_DWORD *)(v9 + 56);
  if ( !v192 )
    goto LABEL_14;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v9 + 4LL * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_10;
    v16 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v15 >= (unsigned int)v16 )
      goto LABEL_10;
    v17 = *(_DWORD *)(v15 + v9);
    v18 = v15 + v9;
    if ( v17 == 64 )
    {
      if ( v15 + 40 <= v16 )
      {
        if ( !*(_BYTE *)(v18 + 10) )
          goto LABEL_14;
LABEL_152:
        v85 = (char *)(v18 + 24);
        goto LABEL_153;
      }
      goto LABEL_10;
    }
    v86 = v17 - 65;
    if ( v86 )
      break;
    if ( v15 + 56 <= v16 )
    {
      if ( !*(_BYTE *)(v18 + 10) )
        goto LABEL_14;
      goto LABEL_152;
    }
LABEL_10:
    if ( ++v14 >= v192 )
      goto LABEL_14;
  }
  if ( v86 != 1 || v15 + 40 > v16 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v18 + 12) )
    goto LABEL_14;
  v85 = (char *)(v18 + 32);
LABEL_153:
  if ( v85 )
    v191 = *v85;
LABEL_14:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v11 == 40 )
    {
      v83 = *(PKSPIN_LOCK *)(v9 + 96);
      v200 = v9;
      *(_QWORD *)(v9 + 96) = v83[2];
    }
    else
    {
      v83 = *(PKSPIN_LOCK *)(v9 + 48);
      *(_QWORD *)(v9 + 48) = v83[2];
    }
    v84 = v83[1];
    SpinLock[0] = v83;
    if ( v84 != -1LL )
    {
      v90 = (unsigned int)(5000000 * *(_DWORD *)(v6 + 3392)) - v84;
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v83 = SpinLock[0];
      v8 = UnbiasedInterruptTime + v90;
    }
    ExFreePoolWithTag(v83, 0x54436152u);
  }
  if ( (*(_BYTE *)(v6 + 506) & 2) != 0 && RaidIsUnresponsiveBlockedCmd(v9) )
  {
    v77 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v78 = *(_DWORD *)(v77 + *(_QWORD *)(v6 + 40));
    while ( (v78 & 1) == 0 )
    {
      v79 = v78;
      v78 = _InterlockedCompareExchange((volatile signed __int32 *)(v77 + *(_QWORD *)(v6 + 40)), v78 - 2, v78);
      if ( v79 == v78 )
        goto LABEL_119;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
LABEL_119:
    v80 = *(_BYTE *)(v9 + 3);
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      v81 = ((v80 >> 7) & 0x80) + 56;
    }
    else if ( v80 < 0 )
    {
      v81 = -72;
    }
    else
    {
      v81 = 56;
    }
    *(_BYTE *)(v9 + 3) = v81;
    v26 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2232));
    goto LABEL_122;
  }
  if ( *(_DWORD *)v10 != 1094997074 || (*(_BYTE *)(v10 + 111) & 4) == 0 )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( v20 )
    {
LABEL_19:
      v21 = *((_DWORD *)&v20->Next + 2);
    }
    else
    {
      v194 = 0;
      v88 = KeQueryHighestNodeNumber() + 1;
      v197 = v88;
      do
      {
        for ( i = 0; i < v88; ++i )
        {
          v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)i << 6)));
          if ( v20 )
            goto LABEL_19;
          v88 = v197;
        }
        ++v194;
        v88 = v197;
      }
      while ( v194 != 10 );
      v21 = -1;
    }
    v196 = 1;
    *(_DWORD *)v206 = v21;
  }
  v26 = RaidUnitClaimIrp(v6, a2, v12);
  if ( v26 < 0 )
  {
    v92 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v93 = *(_DWORD *)(v92 + *(_QWORD *)(v6 + 40));
    while ( (v93 & 1) == 0 )
    {
      v108 = v93;
      v93 = _InterlockedCompareExchange((volatile signed __int32 *)(v92 + *(_QWORD *)(v6 + 40)), v93 - 2, v93);
      if ( v108 == v93 )
        goto LABEL_122;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
LABEL_122:
    v51 = 4LL;
    v50 = Irp;
    if ( (*(_BYTE *)(v6 + 136) & 2) != 0 )
    {
      LODWORD(v199) = 0;
      if ( (unsigned __int8)IsZonedWriteRequest(v6, Irp, 0LL, &v199) )
      {
        RtlInterlockedClearBitRun(v6 + 3448, (unsigned int)v199, 1LL);
        RaidUpdateZoneIoSubmission(v6 + 720, v50, 0LL);
      }
    }
    goto LABEL_65;
  }
  v27 = *(_QWORD *)(v6 + 24);
  LODWORD(v201) = 1;
  if ( !*(_DWORD *)(v27 + 2140) && v191 != 18 && v191 != -96 )
  {
    LOBYTE(v23) = 37;
    *(_BYTE *)(v9 + 3) = 37;
    v26 = RaidSrbStatusToNtStatus(v23, v22, v24, v25);
    goto LABEL_122;
  }
  if ( (unsigned __int8)RaidUnitIsRegisteredForIdleDetection(v6) && *(_DWORD *)(v6 + 548) != 1 )
  {
    v82 = *(unsigned __int8 *)(v9 + 2);
    if ( (_BYTE)v82 == 40 )
      v82 = *(_DWORD *)(v9 + 20);
    if ( v82 == 9 )
      goto LABEL_131;
    if ( v82 != 8 )
    {
      switch ( v82 )
      {
        case 0:
        case 2:
        case 7:
        case 18:
        case 19:
        case 23:
        case 32:
        case 36:
        case 37:
          goto LABEL_131;
        case 16:
          if ( !(unsigned __int8)RaidAdapterSupportsAbortCommand(*(_QWORD *)(v6 + 24)) )
            goto LABEL_25;
          goto LABEL_131;
        default:
          goto LABEL_25;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 24) + 467LL) )
    {
LABEL_131:
      if ( (v199 & 0x100000) != 0 )
      {
        v26 = -1073741823;
        *(_BYTE *)(v9 + 3) = 36;
        goto LABEL_122;
      }
    }
  }
LABEL_25:
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v29 = 4LL;
  if ( BYTE2(SecurityContext->SecurityQos) != 40 )
    v29 = 2LL;
  SecurityQos = SecurityContext[v29].SecurityQos;
  *(_QWORD *)&SecurityQos[54].ContextTrackingMode = RaidUnitCompleteRequest;
  *(_QWORD *)&SecurityQos[64].Length = v12;
  if ( !v8 && *(_BYTE *)(v9 + 2) == 40 )
  {
    v46 = *(unsigned int *)(v9 + 4);
    v200 = v9;
    if ( (_DWORD)v46 || *(_DWORD *)(v9 + 28) )
    {
      v48 = StorEtwLoggingEnabled == 0;
      v47 = *(unsigned int *)(v9 + 28);
      *(_DWORD *)(v9 + 28) = 0;
      *(_DWORD *)(v9 + 4) = 0;
      if ( !v48 )
      {
        v48 = UseQPCTime == 0;
        goto LABEL_230;
      }
      if ( g_StorpTraceLoggingPerformanceEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_234;
        v48 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_230:
        if ( v48 )
LABEL_234:
          v109.QuadPart = KeQueryUnbiasedInterruptTime();
        else
          v109 = KeQueryPerformanceCounter(&PerformanceFrequency);
      }
      else
      {
        v109.QuadPart = 0LL;
      }
      v8 = v109.QuadPart - (v46 | (v47 << 32));
      if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
        v8 = 10000000 * v8 / PerformanceFrequency.QuadPart;
    }
  }
  *(_QWORD *)&SecurityQos[57].ImpersonationLevel = v8;
  if ( v8 >= DeviceQueueIoWaitThreshold )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 2360)) == 1 )
    {
      v94 = "Start";
      goto LABEL_240;
    }
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(v6 + 2360), 0LL) )
      goto LABEL_30;
    v94 = "End";
LABEL_240:
    if ( (byte_140173446 & 2) != 0 )
      McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
        v6 + 177,
        v6 + 168,
        v6 + 2104,
        *(_QWORD *)(*(_QWORD *)(v6 + 24) + 4784LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 24) + 56LL),
        *(_QWORD *)(v6 + 24) + 5128LL,
        *(_BYTE *)(v6 + 104),
        *(_BYTE *)(v6 + 105),
        *(_BYTE *)(v6 + 106),
        v6 + 2104,
        v6 + 168,
        v6 + 177,
        v6 + 242,
        *(_BYTE *)(v6 + 506) & 1,
        (__int64)v94);
  }
LABEL_30:
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v49 = *(_QWORD *)(v6 + 24);
    if ( !*(_QWORD *)(v49 + 5688) )
      goto LABEL_33;
    if ( (*(_BYTE *)(v49 + 112) & 0x10) != 0 )
      LODWORD(v44) = RaidAcquireNvmeIceKeyResources(v6, SecurityQos);
    else
      LODWORD(v44) = RaidAdapterAcquireCryptoKeyResources(v49, SecurityQos);
    v26 = v44;
    if ( (_DWORD)v44 == 259 )
      return v44;
    if ( (int)v44 >= 0 )
      goto LABEL_33;
    v112 = *(_BYTE *)(*(_QWORD *)(v6 + 24) + 112LL) & 0x10;
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( v112 )
        goto LABEL_199;
      goto LABEL_242;
    }
    if ( v112 )
      goto LABEL_245;
    goto LABEL_253;
  }
  v31 = *(_QWORD *)(v6 + 3608);
  v32 = 0;
  if ( v31 && *(_QWORD *)(v31 + 104) )
  {
    LODWORD(v44) = RaidAcquireNvmeIceKeyResources(v6, SecurityQos);
    v32 = 1;
    goto LABEL_58;
  }
  v33 = *(_QWORD *)(v6 + 24);
  if ( !*(_QWORD *)(v33 + 5680) )
  {
LABEL_33:
    v34 = *(_QWORD *)(v6 + 24);
    if ( !*(_BYTE *)(v34 + 4434) )
      goto LABEL_45;
    v35 = *(_QWORD *)&SecurityQos[14].Length;
    v36 = 24LL;
    v37 = *(_BYTE *)(v35 + 2);
    v38 = v35 + 24;
    if ( v37 != 40 )
      v36 = 12LL;
    if ( (*(_BYTE *)(v34 + 4435) & 4) != 0 )
    {
      v39 = (*(_DWORD *)(v36 + v35) & 0x40) != 0;
      if ( *(_QWORD *)&SecurityQos[8].ContextTrackingMode )
      {
        v40 = (__int64 *)(v34 + 896);
        if ( v34 != -896 )
        {
          v41 = *v40;
          if ( *v40 )
          {
            v38 = *(_QWORD *)(v41 + 8);
            if ( v38 )
            {
              if ( *(int *)(v34 + 924) >= 3 && (v42 = *(void (__fastcall **)(__int64, _QWORD, bool))(v38 + 240)) != 0LL )
              {
                v42(v41, *(_QWORD *)&SecurityQos[8].ContextTrackingMode, v39);
              }
              else
              {
                LOBYTE(v38) = 1;
                KeFlushIoBuffers(*(_QWORD *)&SecurityQos[8].ContextTrackingMode, v39, v38);
              }
            }
          }
        }
      }
      v43 = *(_QWORD *)&SecurityQos[11].ImpersonationLevel;
      if ( v43 )
      {
        v113 = (__int64 *)(v34 + 896);
        if ( v34 != -896 )
        {
          v114 = *v113;
          if ( *v113 )
          {
            v115 = *(_QWORD *)(v114 + 8);
            if ( v115 )
            {
              if ( *(int *)(v34 + 924) >= 3
                && (v116 = *(void (__fastcall **)(__int64, _QWORD, bool))(v115 + 240)) != 0LL )
              {
                v116(v114, *(_QWORD *)&SecurityQos[11].ImpersonationLevel, v39);
              }
              else
              {
                LOBYTE(v38) = 1;
                KeFlushIoBuffers(v43, v39, v38);
              }
            }
          }
        }
      }
LABEL_45:
      LODWORD(v44) = RaidAdapterPostScatterGatherExecute(v34, SecurityQos);
LABEL_46:
      v26 = v44;
    }
    else
    {
      if ( *(_QWORD *)&SecurityQos[11].ImpersonationLevel )
      {
        LODWORD(v44) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v6 + 24), SecurityQos, v38);
        goto LABEL_46;
      }
      if ( (*(_DWORD *)(v36 + v35) & 0xC0) == 0 )
        goto LABEL_45;
      if ( v37 == 40 )
      {
        v68 = *(_DWORD *)(v35 + 20);
        v69 = (unsigned int *)(v35 + 60);
      }
      else
      {
        v38 = v35 + 12;
        v68 = *(unsigned __int8 *)(v35 + 2);
        v69 = (unsigned int *)(v35 + 16);
      }
      LODWORD(v44) = *(_DWORD *)(v34 + 604);
      v70 = *v69;
      v71 = *(_DWORD *)v38 >> 6;
      LOBYTE(v71) = (*(_DWORD *)v38 & 0x40) != 0;
      v72 = (*(_DWORD *)v38 & 0x80) != 0;
      if ( (v44 & 8) == 0 && (*(_BYTE *)(v34 + 108) & 4) == 0 )
      {
        LOBYTE(v38) = 1;
        LOBYTE(v44) = KeFlushIoBuffers(*(_QWORD *)&SecurityQos[8].ContextTrackingMode, v71, v38);
      }
      if ( v68 == 23 )
      {
        v44 = *(_QWORD *)&SecurityQos[8].ContextTrackingMode;
        if ( *(_DWORD *)(v44 + 40) > v70 )
          v70 = *(_DWORD *)(v44 + 40);
      }
      v73 = (__int64 *)(v34 + 896);
      if ( v34 != -896 )
      {
        v74 = *v73;
        if ( *v73 )
        {
          v44 = *(_QWORD *)(v74 + 8);
          if ( v44 )
          {
            v44 = *(_QWORD *)(v44 + 112);
            if ( v44 )
            {
              LOBYTE(v186) = v72;
              LODWORD(v44) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _SECURITY_QUALITY_OF_SERVICE *, int, _SECURITY_IMPERSONATION_LEVEL *, int))v44)(
                               v74,
                               *(_QWORD *)(v34 + 8),
                               *(_QWORD *)&SecurityQos[8].ContextTrackingMode,
                               *(_QWORD *)&SecurityQos[15].ImpersonationLevel,
                               v70,
                               RaidpAdapterContinueScatterGather,
                               SecurityQos,
                               v186,
                               &SecurityQos[19].ImpersonationLevel,
                               424);
              v26 = v44;
              if ( (_DWORD)v44 != -1073741789 )
                goto LABEL_47;
              v75 = *v73;
              if ( *v73 )
              {
                v44 = *(_QWORD *)(v75 + 8);
                if ( v44 )
                {
                  v44 = *(_QWORD *)(v44 + 88);
                  if ( v44 )
                  {
                    LOBYTE(v187) = v72;
                    LODWORD(v44) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, __int64 (__fastcall *)(), _SECURITY_QUALITY_OF_SERVICE *, int))v44)(
                                     v75,
                                     *(_QWORD *)(v34 + 8),
                                     *(_QWORD *)&SecurityQos[8].ContextTrackingMode,
                                     *(_QWORD *)&SecurityQos[15].ImpersonationLevel,
                                     v70,
                                     RaidpAdapterContinueScatterGather,
                                     SecurityQos,
                                     v187);
                    goto LABEL_46;
                  }
                }
              }
            }
          }
        }
      }
      v26 = -1073741811;
    }
LABEL_47:
    if ( v26 >= 0 )
    {
      v45 = *(_QWORD *)(v6 + 24);
      if ( *(int *)(v45 + 4184) <= 0 )
      {
        LOWORD(v44) = ExQueryDepthSList((PSLIST_HEADER)(v45 + 1168));
        if ( (_WORD)v44 )
        {
          LODWORD(v44) = _InterlockedIncrement((volatile signed __int32 *)(v45 + 4184));
          if ( (_DWORD)v44 == 1 )
            LOBYTE(v44) = RaidProcessDeferredItemsWorker(v45 + 1072, *(_QWORD *)(v45 + 8), a4);
          _InterlockedDecrement((volatile signed __int32 *)(v45 + 4184));
        }
      }
      return v44;
    }
    v50 = Irp;
    v5 = 0LL;
    v51 = 4LL;
LABEL_65:
    v52 = v50->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( BYTE2(v52->SecurityQos) == 40 )
    {
      FullCreateOptions = v52->FullCreateOptions;
      v54 = v52 + 1;
      v200 = (__int64)v50->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    }
    else
    {
      FullCreateOptions = BYTE2(v52->SecurityQos);
      v54 = (_IO_SECURITY_CONTEXT *)((char *)&v52->AccessState + 4);
    }
    if ( EnableSolitaryIO )
    {
      v55 = 1;
    }
    else
    {
      v55 = 0;
      if ( ((__int64)v54->SecurityQos & 0x102) != 0x102 && ((__int64)v54->SecurityQos & 0x80010) == 0 )
      {
        if ( (unsigned int)FullCreateOptions > 0x20 || (v96 = 0x1000D0000LL, !_bittest64(&v96, FullCreateOptions)) )
          v55 = 1;
      }
    }
    v193 = v55;
    if ( v196 )
    {
      v97 = *(_DWORD *)v206;
      v98 = *(_QWORD *)(v6 + 24);
      LODWORD(v199) = *(_DWORD *)v206;
      if ( (*(_DWORD *)v98 != 1094997074 || (*(_BYTE *)(v98 + 111) & 4) == 0) && v97 != -1 )
      {
        HighestNodeNumber = KeQueryHighestNodeNumber();
        if ( (unsigned int)v199 / *(_DWORD *)(v6 + 648) < HighestNodeNumber + 1 )
          HighestNodeNumber = (unsigned int)v199 / *(_DWORD *)(v6 + 648);
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(v6 + 576) + ((unsigned __int64)HighestNodeNumber << 6)),
          (PSLIST_ENTRY)(*(_QWORD *)(v6 + 640) + 16LL * (unsigned int)v199));
        v55 = v193;
      }
    }
    if ( v55 )
    {
      memset(v207, 0, sizeof(v207));
      v209 = 0LL;
      v208 = 0LL;
      if ( *(_QWORD *)(v6 + 32) )
      {
        if ( (unsigned __int8)RaidIsUnitControlSupported(v6, 31LL) )
        {
          v118 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v6 + 32) + 24LL));
          v190 = v118;
          *(_DWORD *)(*(_QWORD *)(v6 + 32) + 80LL) &= ~0x100u;
          v119 = *(_QWORD *)(v6 + 32);
          if ( (*(_DWORD *)(v119 + 80) & 0x1E0) == 0 && *(int *)(v119 + 84) <= 0 )
          {
            *(_QWORD *)&v207[0] = 0x3800000038LL;
            DWORD2(v207[0]) = 3;
            if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline() )
            {
              HIDWORD(v208) = 4;
              WORD4(v208) = 1;
              v120 = *(_WORD *)(*(_QWORD *)(v6 + 24) + 56LL);
              LOWORD(v209) = *(_WORD *)(v6 + 104);
              BYTE2(v209) = *(_BYTE *)(v6 + 106);
              WORD5(v208) = v120;
            }
            v121 = *(_DWORD **)(v6 + 24);
            if ( *v121 == 1094997074 )
            {
              v122 = v121 + 94;
            }
            else if ( *v121 == 1314275652 )
            {
              v122 = v121 + 42;
            }
            else
            {
              v122 = 0LL;
            }
            RaCallMiniportUnitControl(v122, 31LL, v207);
            v118 = v190;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v6 + 32) + 24LL), v118);
        }
      }
    }
    v189 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 792));
    SpinLock[0] = *(PKSPIN_LOCK *)(v6 + 808);
    if ( ((__int64)SpinLock[0] & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v6 + 800));
      ExRundownCompleted((PEX_RUNDOWN_REF)(v6 + 800));
      v56 = (signed __int64)SpinLock[0];
      do
      {
        v57 = v56;
        v56 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 808), v56 | 1, v56);
      }
      while ( v57 != v56 && (v56 & 1) == 0 );
      v5 = 0LL;
    }
    if ( v193 )
      *(_BYTE *)(v6 + 758) = 0;
    v58 = *(_DWORD *)(v6 + 748);
    if ( v58 )
      *(_DWORD *)(v6 + 748) = v58 - 1;
    _InterlockedAdd64((volatile signed __int64 *)(v6 + 808), 0xFFFFFFFFFFFFFFFCuLL);
    if ( (((__int64)*(unsigned int *)(v6 + 808) >> 2) & 0x3FFFFFFF) == 0 && *(_DWORD *)(v6 + 760) )
      KeSetEvent((PRKEVENT)(v6 + 768), 0, 0);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 792), v189);
    if ( (BYTE3(v52->SecurityQos) & 0x3F) == 0 )
    {
      v99 = RaidNtStatusToSrbStatus(v26);
      BYTE3(v52->SecurityQos) = v99;
      if ( (v99 & 0x3F) == 0x30 )
      {
        if ( BYTE2(v52->SecurityQos) == 40 )
          *(_DWORD *)(v200 + 44) = -1073741670;
        else
          v52[2].DesiredAccess = -1073741670;
      }
    }
    if ( !(_DWORD)v201 )
    {
LABEL_84:
      v59 = StorRemoveIoGatewayItem(v206, 0LL, 0LL);
      v50->IoStatus.Information = 0LL;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          22LL,
          &WPP_25fa594137633db1985de5dda85c818b_Traceguids,
          *(_QWORD *)(v6 + 8),
          v50,
          v50->IoStatus.Status);
      }
      CurrentStackLocation = v50->Tail.Overlay.CurrentStackLocation;
      v61 = CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter & 3;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = 0LL;
      v62 = *(_QWORD *)(v6 + 24);
      if ( (v61 & 1) != 0
        && (*(_DWORD *)(v6 + 504) & 0x8000) != 0
        && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864)) )
      {
        PoFxIdleComponent(**(_QWORD **)(v6 + 1872), 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 1864));
      }
      if ( v61 >= 2u )
      {
        v76 = *(_QWORD **)(v62 + 5024);
        if ( v76 )
          PoFxIdleComponent(*v76, 0LL, 0LL);
      }
      v48 = StorEtwLoggingEnabled == 0;
      *((_BYTE *)&v50->Tail.CompletionKey + 21) = -84;
      v50->IoStatus.Status = v26;
      if ( v48 )
        goto LABEL_90;
      v206 = 0LL;
      IoGetActivityIdIrp(v50, &v206);
      v65 = v50->Tail.Overlay.CurrentStackLocation;
      MajorFunction = v65->MajorFunction;
      if ( v65->MajorFunction != 15 )
      {
        if ( MajorFunction == 14 )
        {
          if ( (byte_140173442 & 8) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v65, &EventNonReadWriteRequestComplete, &v206, v50, v50->IoStatus.Status);
        }
        else if ( MajorFunction == 27 )
        {
          if ( v65->MinorFunction != 7 || v65->Parameters.Read.Length )
          {
            if ( (byte_140173442 & 0x20) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v65, &EventPnpRequestComplete, &v206, v50, v50->IoStatus.Status);
          }
          else if ( (byte_140173442 & 0x40) != 0 )
          {
            Information = (_DWORD *)v50->IoStatus.Information;
            if ( Information )
              LODWORD(v5) = *Information;
            McTemplateK0pqd_EtwWriteTransfer(
              (_DWORD)v65,
              v63,
              (unsigned int)&v206,
              (_DWORD)v50,
              (char)v5,
              v50->IoStatus.Status);
          }
        }
        goto LABEL_90;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_90;
      v100 = v65->Parameters.Create.SecurityContext;
      LOBYTE(v64) = 0;
      v101 = 0;
      LODWORD(SpinLock[0]) = (_DWORD)v64;
      v102 = 0;
      v103 = 0;
      Flags = 0;
      LowPart_high = 0;
      if ( BYTE2(v100->SecurityQos) == 40 )
      {
        v64 = 0LL;
        if ( v100->FullCreateOptions )
          goto LABEL_90;
        AccessState = (unsigned int)v100[2].AccessState;
        v107 = 0LL;
        LODWORD(v199) = 0;
        v198 = AccessState;
        if ( !AccessState )
          goto LABEL_90;
        while ( 1 )
        {
          v177 = *((unsigned int *)&v100[5].SecurityQos + v107);
          v195 = v177;
          if ( (unsigned int)v177 >= 0x80 )
          {
            DesiredAccess = v100->DesiredAccess;
            if ( (unsigned int)v177 < (unsigned int)DesiredAccess )
            {
              v63 = (__int64)v100 + v177;
              v179 = *(_DWORD *)((char *)&v100->SecurityQos + v177);
              if ( v179 == 64 )
              {
                v50 = Irp;
                if ( (unsigned __int64)v195 + 40 <= DesiredAccess )
                {
                  if ( !*(_BYTE *)(v63 + 10) )
                    goto LABEL_400;
LABEL_399:
                  v64 = (unsigned __int8 *)(v63 + 24);
LABEL_400:
                  v5 = *(_ACCESS_STATE **)(v63 + 16);
                  goto LABEL_401;
                }
              }
              else
              {
                v180 = v179 - 65;
                if ( v180 )
                {
                  if ( v180 == 1 && (unsigned __int64)v195 + 40 <= DesiredAccess )
                  {
                    if ( *(_DWORD *)(v63 + 12) )
                      v64 = (unsigned __int8 *)(v63 + 32);
                    v5 = *(_ACCESS_STATE **)(v63 + 24);
LABEL_401:
                    v101 = *(_BYTE *)(v63 + 8);
                    v102 = *(_BYTE *)(v63 + 9);
LABEL_402:
                    if ( v64 )
                    {
                      LODWORD(v181) = *v64;
                      LOBYTE(v64) = SpinLock[0];
                      goto LABEL_410;
                    }
                    goto LABEL_90;
                  }
                }
                else if ( (unsigned __int64)v195 + 56 <= DesiredAccess )
                {
                  if ( *(_BYTE *)(v63 + 10) )
                    goto LABEL_399;
                  goto LABEL_400;
                }
              }
            }
          }
          v107 = (unsigned int)(v199 + 1);
          LODWORD(v199) = v107;
          if ( (unsigned int)v107 >= v198 )
            goto LABEL_402;
        }
      }
      LODWORD(v181) = LOBYTE(v100[3].SecurityQos);
      v5 = v100[1].AccessState;
      v102 = BYTE3(v100->AccessState);
      v101 = BYTE4(v100->SecurityQos);
      if ( BYTE2(v100->SecurityQos) )
        goto LABEL_90;
LABEL_410:
      LOBYTE(v181) = v181 - 8;
      if ( (v181 & 0x5D) != 0 )
      {
LABEL_90:
        IofCompleteRequest(v50, 0);
        if ( v59 )
          v67 = (struct _KDPC *)(*(_QWORD *)(v6 + 24) + 1776LL);
        else
          v67 = (struct _KDPC *)(v6 + 1312);
        LOBYTE(v44) = KeInsertQueueDpc(v67, 0LL, 0LL);
        return v44;
      }
      if ( BYTE3(v100->SecurityQos) != 1 && v5 && v102 )
      {
        v182 = v5->OperationID.LowPart & 0x7F;
        if ( v182 == 114 || v182 == 115 )
        {
          v181 = (unsigned __int64)v5 + v102;
          LOBYTE(v63) = 0;
          if ( (unsigned __int64)&v5->SecurityEvaluated <= v181 )
          {
            Flags = BYTE2(v5->OperationID.LowPart);
            v103 = BYTE1(v5->OperationID.LowPart) & 0xF;
            LowPart_high = HIBYTE(v5->OperationID.LowPart);
            goto LABEL_426;
          }
        }
        else
        {
          v181 = (unsigned __int64)v5 + v102;
          LOBYTE(v63) = 0;
          if ( (unsigned __int64)&v5->SecurityEvaluated <= v181 )
          {
            v183 = (char *)&v5->Flags + 1;
            v103 = BYTE2(v5->OperationID.LowPart) & 0xF;
            v184 = v102;
            if ( (unsigned int)HIBYTE(v5->OperationID.HighPart) + 8 <= v102 )
              v184 = HIBYTE(v5->OperationID.HighPart) + 8;
            v181 = (unsigned __int64)v5 + v184;
            if ( (unsigned __int64)v183 <= v181 )
              Flags = v5->Flags;
            if ( (unsigned __int64)&v5->Flags + 2 > v181 )
              LowPart_high = 0;
            else
              LowPart_high = *v183;
LABEL_426:
            LOBYTE(v63) = 1;
          }
        }
        if ( (_BYTE)v63 )
          LOBYTE(v64) = 1;
      }
      if ( byte_140173441 < 0 )
      {
        if ( !(_BYTE)v64 )
        {
          LowPart_high = 0;
          Flags = 0;
          v103 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v181,
          v63,
          (unsigned int)&v206,
          (_DWORD)v50,
          v50->IoStatus.Status,
          BYTE3(v100->SecurityQos),
          v101,
          v103,
          Flags,
          LowPart_high,
          (char)v50);
      }
      goto LABEL_90;
    }
    v123 = v50->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( BYTE2(v123->SecurityQos) != 40 )
      v51 = 2LL;
    v124 = (__int64)v123[v51].SecurityQos;
    v48 = (*(_BYTE *)(v124 + 16) & 2) == 0;
    v125 = *(_QWORD *)(v124 + 224);
    v200 = v125;
    if ( v48 )
      goto LABEL_319;
    v126 = v124 + 48;
    memset(&LockHandle, 0, sizeof(LockHandle));
    v127 = *(_QWORD *)(v200 + 560) + ((unsigned __int64)*(unsigned int *)(v124 + 84) << 6);
    v201 = *(int **)(v200 + 560);
    v199 = v127;
    SpinLock[0] = (PKSPIN_LOCK)(v127 + 104);
    if ( KeGetCurrentIrql() == 2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock[0], &LockHandle);
      v128 = *v201;
      v129 = *(_BYTE *)(v124 + 16);
      if ( (v129 & 2) == 0 )
        goto LABEL_300;
      v130 = v199;
      *(_BYTE *)(v124 + 16) = v129 & 0xFD;
      v131 = v130 + 64;
      v132 = *(_QWORD *)v126;
      v133 = *(_QWORD *)(v130 + 64);
      if ( *(_QWORD *)(*(_QWORD *)v126 + 8LL) == v126 )
      {
        v134 = *(_QWORD **)(v124 + 56);
        if ( *v134 == v126 )
        {
          *v134 = v132;
          *(_QWORD *)(v132 + 8) = v134;
          if ( (*(_DWORD *)(v124 + 96) & 1) == 0 )
            goto LABEL_295;
          v135 = v124 + 64;
          if ( *(_QWORD *)(v130 + 96) == v124 + 64 )
            *(_QWORD *)(v130 + 96) = *(_QWORD *)v135;
          v136 = *(_QWORD *)v135;
          if ( *(_QWORD *)(*(_QWORD *)v135 + 8LL) == v135 )
          {
            v137 = *(_QWORD **)(v124 + 72);
            if ( *v137 == v135 )
            {
              *v137 = v136;
              *(_QWORD *)(v136 + 8) = v137;
              *(_DWORD *)(v124 + 96) &= ~1u;
LABEL_295:
              if ( (v128 & 4) == 0 && v133 == v126 )
              {
                if ( *(_QWORD *)v131 == v131 )
                  *(_DWORD *)(v130 + 112) = -1;
                else
                  *(_DWORD *)(v130 + 112) = *(_DWORD *)(*(_QWORD *)v131 + 32LL);
              }
LABEL_300:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_315:
              if ( StorEtwLoggingEnabled )
              {
                *(_OWORD *)SpinLock = 0LL;
                IoGetActivityIdIrp(v50, SpinLock);
                if ( byte_140173442 < 0 )
                  McTemplateK0dud_EtwWriteTransfer(v149, v148, (unsigned int)SpinLock, v150, 4);
              }
              v125 = v200;
LABEL_319:
              StorUnmapSenseInfo(v124, *(_QWORD *)(*(_QWORD *)(v125 + 24) + 8LL));
              if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
              {
                v151 = *(_QWORD *)(v125 + 3608);
                if ( !v151 || !*(_QWORD *)(v151 + 104) )
                {
                  v152 = *(_QWORD *)(v125 + 24);
                  if ( *(_QWORD *)(v152 + 5680) )
                    goto LABEL_323;
LABEL_324:
                  if ( BYTE2(v123->SecurityQos) == 40 )
                  {
                    if ( (*(_BYTE *)(v124 + 16) & 0x40) != 0 )
                    {
                      v153 = *(_QWORD *)(v124 + 752);
                      SpinLock[0] = (PKSPIN_LOCK)1;
                      if ( v123 && v153 )
                      {
                        if ( UseQPCTime )
                          PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)SpinLock);
                        else
                          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
                        v155 = PerformanceCounter;
                        *(_BYTE *)(v153 + 3) = BYTE3(v123->SecurityQos);
                        *(_DWORD *)(v153 + 12) = v123[1].SecurityQos;
                        if ( ((__int64)v123[1].SecurityQos & 0x40) != 0 )
                          *(_DWORD *)(v153 + 16) = HIDWORD(v123[2].AccessState);
                        if ( BYTE3(v123->SecurityQos) == 48 )
                          *(_DWORD *)(v153 + 64) = v123[1].FullCreateOptions;
                        if ( !v123->FullCreateOptions )
                        {
                          v156 = (unsigned int)v123[2].AccessState;
                          v157 = 0LL;
                          if ( v156 )
                          {
                            while ( 1 )
                            {
                              v158 = *((unsigned int *)&v123[5].SecurityQos + v157);
                              if ( (unsigned int)v158 >= 0x80 )
                              {
                                v159 = v123->DesiredAccess;
                                if ( (unsigned int)v158 <= (unsigned int)v159
                                  && *(_DWORD *)((char *)&v123->SecurityQos + v158) == 64
                                  && v158 + 40 <= v159 )
                                {
                                  break;
                                }
                              }
                              v157 = (unsigned int)(v157 + 1);
                              if ( (unsigned int)v157 >= v156 )
                                goto LABEL_348;
                            }
                            *(_BYTE *)(v153 + 4) = *((_BYTE *)&v123->AccessState + (unsigned int)v158);
                            *(_QWORD *)(v153 + 32) = *(_QWORD *)((char *)&v123->DesiredAccess + (unsigned int)v158);
                            *(_BYTE *)(v153 + 11) = *((_BYTE *)&v123->AccessState + (unsigned int)v158 + 1);
                          }
                          else
                          {
LABEL_348:
                            *(_BYTE *)(v153 + 3) = 48;
                            *(_DWORD *)(v153 + 64) = -1073741811;
                          }
                        }
                        if ( UseQPCTime )
                          v160 = KeQueryPerformanceCounter(0LL);
                        else
                          v160.QuadPart = KeQueryUnbiasedInterruptTime();
                        if ( v160.QuadPart <= 0 || v160.QuadPart >= v155.QuadPart )
                          v163 = v160.QuadPart - v155.QuadPart;
                        else
                          v163 = v160.QuadPart - v155.QuadPart - 1;
                        v5 = 0LL;
                        if ( UseQPCTime )
                        {
                          v162 = (int)SpinLock[0];
                          v164 = 0;
                          if ( SpinLock[0] && v163 )
                          {
                            v165 = 1000 * (v163 % (unsigned __int64)SpinLock[0]);
                            v163 = v165 / (unsigned __int64)SpinLock[0] + 1000 * (v163 / (unsigned __int64)SpinLock[0]);
                            v161.QuadPart = 10000 * (v165 % (unsigned __int64)SpinLock[0])
                                          % (unsigned __int64)SpinLock[0];
                            v164 = 10000 * (v165 % (unsigned __int64)SpinLock[0]) / (unsigned __int64)SpinLock[0]
                                 + 16 * v163;
                          }
                        }
                        else
                        {
                          v164 = v163;
                        }
                        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
                          McTemplateK0zx_EtwWriteTransfer(
                            v162,
                            v161.LowPart,
                            v163,
                            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
                            v164);
                      }
                      v125 = v200;
                      *(_QWORD *)(*(_QWORD *)(v124 + 752) + 48LL) = *(_QWORD *)(v124 + 176);
                      *(_QWORD *)(*(_QWORD *)(v124 + 752) + 24LL) = *(_QWORD *)(v124 + 184);
                      *(_QWORD *)(*(_QWORD *)(v124 + 752) + 56LL) = 0LL;
                      *(_QWORD *)(*(_QWORD *)(v124 + 752) + 40LL) = 0LL;
                      v50->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)(v124 + 752);
                      *(_BYTE *)(v124 + 16) &= ~0x40u;
                      *(_QWORD *)(v124 + 752) = 0LL;
                    }
                    else
                    {
                      v123[4].SecurityQos = 0LL;
                      *(_QWORD *)&v123[2].DesiredAccess = *(_QWORD *)(v124 + 184);
                      v123[4].AccessState = 0LL;
                      if ( *(_QWORD *)(v124 + 192) )
                      {
                        if ( ((__int64)v123[1].SecurityQos & 0xC0) == 0xC0 )
                        {
                          v166 = (unsigned int)v123[2].AccessState;
                          v167 = 0;
                          if ( v166 )
                          {
                            while ( 1 )
                            {
                              v168 = *((unsigned int *)&v123[5].SecurityQos + v167);
                              if ( (unsigned int)v168 >= 0x80 )
                              {
                                v169 = v123->DesiredAccess;
                                if ( (unsigned int)v168 <= (unsigned int)v169 )
                                {
                                  v170 = (char *)v123 + v168;
                                  if ( *(_DWORD *)((char *)&v123->SecurityQos + v168) == 1 && v168 + 24 <= v169 )
                                    break;
                                }
                              }
                              if ( ++v167 >= v166 )
                                goto LABEL_374;
                            }
                            if ( v170 )
                              *((_QWORD *)v170 + 2) = *(_QWORD *)(v124 + 192);
                          }
                        }
                      }
LABEL_374:
                      v171 = (int)v123[1].SecurityQos;
                      if ( (v171 & 0x2000000) != 0 )
                        LODWORD(v123[1].SecurityQos) = v171 & 0xFDFFFFFF;
                    }
                  }
                  else
                  {
                    v123[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(v124 + 176);
                    v123[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(v124 + 184);
                    AccessState_high = HIDWORD(v123->AccessState);
                    v123[2].AccessState = 0LL;
                    *(_QWORD *)&v123[1].DesiredAccess = 0LL;
                    if ( (AccessState_high & 0x2000000) != 0 )
                      HIDWORD(v123->AccessState) = AccessState_high & 0xFDFFFFFF;
                  }
                  RaidXrbDeallocateResources(v124, 1);
                  v173 = 24LL;
                  if ( BYTE2(v123->SecurityQos) != 40 )
                    v173 = 12LL;
                  if ( (*(_DWORD *)((_BYTE *)&v123->SecurityQos + v173) & 0x4000) == 0 )
                  {
                    v174 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
                    v175 = *(_DWORD *)(v174 + *(_QWORD *)(v125 + 40));
                    while ( (v175 & 1) == 0 )
                    {
                      v176 = v175;
                      v175 = _InterlockedCompareExchange(
                               (volatile signed __int32 *)(v174 + *(_QWORD *)(v125 + 40)),
                               v175 - 2,
                               v175);
                      if ( v176 == v175 )
                        goto LABEL_84;
                    }
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v125 + 1032), 0xFFFFFFFF) == 1 )
                      KeSetEvent((PRKEVENT)(v125 + 520), 0, 0);
                  }
                  goto LABEL_84;
                }
              }
              else
              {
                v152 = *(_QWORD *)(v125 + 24);
                if ( !*(_QWORD *)(v152 + 5688) )
                  goto LABEL_324;
                if ( (*(_BYTE *)(v152 + 112) & 0x10) == 0 )
                {
LABEL_323:
                  RaidAdapterReleaseCryptoKeyResources(v152, v124);
                  goto LABEL_324;
                }
              }
              RaidReleaseNvmeIceKeyResources(v125, v124);
              goto LABEL_324;
            }
          }
        }
      }
LABEL_331:
      __fastfail(3u);
    }
    KeAcquireInStackQueuedSpinLock(SpinLock[0], &LockHandle);
    v138 = *v201;
    v139 = *(_BYTE *)(v124 + 16);
    if ( (v139 & 2) != 0 )
    {
      v140 = v199;
      *(_BYTE *)(v124 + 16) = v139 & 0xFD;
      v141 = v140 + 64;
      v142 = *(_QWORD *)v126;
      v143 = *(_QWORD *)(v140 + 64);
      if ( *(_QWORD *)(*(_QWORD *)v126 + 8LL) != v126 )
        goto LABEL_331;
      v144 = *(_QWORD **)(v124 + 56);
      if ( *v144 != v126 )
        goto LABEL_331;
      *v144 = v142;
      *(_QWORD *)(v142 + 8) = v144;
      if ( (*(_DWORD *)(v124 + 96) & 1) != 0 )
      {
        v145 = v124 + 64;
        if ( *(_QWORD *)(v140 + 96) == v124 + 64 )
          *(_QWORD *)(v140 + 96) = *(_QWORD *)v145;
        v146 = *(_QWORD *)v145;
        if ( *(_QWORD *)(*(_QWORD *)v145 + 8LL) != v145 )
          goto LABEL_331;
        v147 = *(_QWORD **)(v124 + 72);
        if ( *v147 != v145 )
          goto LABEL_331;
        *v147 = v146;
        *(_QWORD *)(v146 + 8) = v147;
        *(_DWORD *)(v124 + 96) &= ~1u;
      }
      if ( (v138 & 4) == 0 && v143 == v126 )
      {
        if ( *(_QWORD *)v141 == v141 )
          *(_DWORD *)(v140 + 112) = -1;
        else
          *(_DWORD *)(v140 + 112) = *(_DWORD *)(*(_QWORD *)v141 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_315;
  }
  LODWORD(v44) = RaidAdapterAcquireCryptoKeyResources(v33, SecurityQos);
LABEL_58:
  v26 = v44;
  if ( (_DWORD)v44 != 259 )
  {
    if ( (int)v44 >= 0 )
      goto LABEL_33;
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( v32 )
      {
LABEL_199:
        v95 = RaidNtStatusToSrbStatus(v44);
LABEL_243:
        v110 = v200;
        *(_BYTE *)(v200 + 3) = v95;
        *(_DWORD *)(v110 + 44) = v26;
LABEL_255:
        v5 = 0LL;
        goto LABEL_122;
      }
LABEL_242:
      v95 = 48;
      goto LABEL_243;
    }
    if ( v32 )
    {
LABEL_245:
      v111 = RaidNtStatusToSrbStatus(v44);
LABEL_254:
      *(_DWORD *)(v9 + 64) = v26;
      *(_BYTE *)(v9 + 3) = v111;
      goto LABEL_255;
    }
LABEL_253:
    v111 = 48;
    goto LABEL_254;
  }
  return v44;
}
