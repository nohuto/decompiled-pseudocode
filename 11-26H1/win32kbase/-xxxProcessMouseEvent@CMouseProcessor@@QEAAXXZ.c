/*
 * XREFs of ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4
 * Callers:
 *     xxxProcessMouseEvent @ 0x1400D0BC0 (xxxProcessMouseEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x14009D4A0 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z @ 0x1400D3CC4 (-UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1400D3E48 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     EtwTraceDisplayTimeoutReset @ 0x1400D47F4 (EtwTraceDisplayTimeoutReset.c)
 *     EditionKeepMachineUp @ 0x1400D4908 (EditionKeepMachineUp.c)
 *     ?ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140125618 (-ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     McTemplateK0qqm_EtwWriteTransfer @ 0x140128720 (McTemplateK0qqm_EtwWriteTransfer.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x14018741C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019C400 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1401A2668 (ApiSetTraceLoggingUserIsActive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401C20BC (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::xxxProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  CMouseProcessor::RawMouseEvent *v4; // rbx
  __int64 v5; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // r15
  _QWORD *v8; // rsi
  char *v9; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r13
  _QWORD *v32; // rbx
  int v33; // r15d
  int v34; // esi
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rcx
  char v39; // r12
  struct tagTHREADINFO *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // xmm0_8
  __int128 v43; // xmm0
  int v44; // eax
  unsigned int v45; // esi
  __int64 v46; // rbx
  __int64 v47; // r15
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  _DWORD *v51; // rdx
  int v52; // ecx
  int v53; // r8d
  int v54; // edx
  volatile signed __int32 *v55; // rcx
  int v56; // r8d
  __int64 v57; // rax
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 v61; // rax
  LONGLONG TimeQuadPart; // rbx
  __int64 v63; // rcx
  int v64; // edx
  int v65; // r8d
  __int64 v66; // rax
  int v67; // r8d
  unsigned __int64 v68; // rdx
  unsigned int v69; // ecx
  __int64 v70; // rcx
  int (*v71)(void); // rax
  int v72; // ecx
  int v73; // eax
  unsigned int v74; // ecx
  void **v75; // rax
  __int16 v76; // ax
  _QWORD *v77; // rdx
  __int16 v78; // cx
  unsigned int v79; // esi
  void (__fastcall **v80)(CMouseProcessor *__hidden, const struct CMouseProcessor::CMouseEvent *); // rbx
  unsigned __int8 (__fastcall *v81)(void ***); // rax
  int v82; // edx
  int v83; // ecx
  int v84; // r8d
  void (*v85)(void); // rax
  __int64 v86; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v88; // rcx
  _BOOL8 v89; // r8
  int v90; // edx
  __int64 v91; // rcx
  int v92; // r8d
  __int64 v93; // rcx
  unsigned int v94; // r12d
  int v95; // edx
  int v96; // r8d
  int v97; // edx
  int v98; // r8d
  __int64 v99; // rax
  int v100; // eax
  int v101; // edx
  int v102; // ecx
  int v103; // r8d
  char v104; // bl
  bool v105; // si
  __int64 v106; // rax
  __int64 UserSessionState; // rax
  int v108; // r8d
  int v109; // edx
  _BYTE v110[24]; // [rsp+58h] [rbp-B0h] BYREF
  void **v111; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v112; // [rsp+80h] [rbp-88h]
  int v113; // [rsp+88h] [rbp-80h]
  int CurrentWin32kSessionId; // [rsp+90h] [rbp-78h] BYREF
  int v115; // [rsp+94h] [rbp-74h]
  __int64 v116; // [rsp+98h] [rbp-70h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v118; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v119; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v120; // [rsp+C0h] [rbp-48h]
  _QWORD v121[368]; // [rsp+C8h] [rbp-40h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v117,
    "ProcessMouse",
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v2, &StartProcessQueuedMouseEvents, &W32kControlGuid);
  memset(v121, 0, sizeof(v121));
  v3 = 16LL;
  v4 = (CMouseProcessor::RawMouseEvent *)v121;
  v5 = 0LL;
  do
  {
    CMouseProcessor::RawMouseEvent::RawMouseEvent(v4);
    v4 = (CMouseProcessor::RawMouseEvent *)((char *)v4 + 184);
    --v3;
  }
  while ( v3 );
  v6 = (char *)this + 3008;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 3008, 0LL);
  v7 = *((unsigned __int16 *)this + 1501);
  v120 = v7;
  if ( v7 )
  {
    v8 = v121;
    do
    {
      if ( !*((_WORD *)this + 1501) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7005LL);
      v9 = (char *)this + 184 * ((*((_BYTE *)this + 3000) - *((_BYTE *)this + 3002) + 1) & 0xF) + 56;
      v10 = *((_QWORD *)v9 + 22);
      v11 = *((_OWORD *)v9 + 1);
      *(_OWORD *)v8 = *(_OWORD *)v9;
      v12 = *((_OWORD *)v9 + 2);
      *((_OWORD *)v8 + 1) = v11;
      v13 = *((_OWORD *)v9 + 3);
      *((_OWORD *)v8 + 2) = v12;
      v14 = *((_OWORD *)v9 + 4);
      *((_OWORD *)v8 + 3) = v13;
      v15 = *((_OWORD *)v9 + 5);
      *((_OWORD *)v8 + 4) = v14;
      v16 = *((_OWORD *)v9 + 6);
      *((_OWORD *)v8 + 5) = v15;
      v17 = *((_OWORD *)v9 + 7);
      *((_OWORD *)v8 + 6) = v16;
      v18 = *((_OWORD *)v9 + 8);
      *((_OWORD *)v8 + 7) = v17;
      v19 = *((_OWORD *)v9 + 9);
      *((_OWORD *)v8 + 8) = v18;
      v20 = *((_OWORD *)v9 + 10);
      *((_OWORD *)v8 + 9) = v19;
      *((_OWORD *)v8 + 10) = v20;
      v8[22] = v10;
      memset(v9, 0, 0xB8uLL);
      if ( --*((_WORD *)this + 1501) >= 0x10u )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7013LL);
      v8 += 23;
      --v7;
    }
    while ( v7 );
    v7 = v120;
    v6 = (char *)this + 3008;
  }
  if ( *((_WORD *)this + 1501) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6990LL);
  ExReleasePushLockExclusiveEx(v6);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    v30 = 0LL;
    v119 = 0LL;
    while ( 1 )
    {
      v31 = 23 * v30;
      v32 = &v121[23 * v30];
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v116,
        "ProcessMouseEvent",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v117);
      InputTraceLogging::Mouse::ProcessEvent(
        v32[12],
        (const struct tagPOINT *)((char *)v32 + 52),
        *((_WORD *)v32 + 14),
        *((_WORD *)v32 + 15),
        (const struct tagINPUT_MESSAGE_SOURCE *)(v32 + 14));
      v118 = 0xFFFFFFFFLL;
      v33 = 0;
      v34 = 0;
      if ( IsInputThread(v36, v35, v37) )
      {
        if ( *((_BYTE *)v32 + 140) )
          break;
      }
      v39 = 0;
      v40 = PtiCurrent(v38, v21);
      if ( v40 )
      {
        v41 = *((_QWORD *)v40 + 57);
        v42 = *(_QWORD *)(v41 + 864);
        v33 = *(_DWORD *)(v41 + 872);
        LOBYTE(v34) = *(int *)(v41 + 12) < 0;
LABEL_28:
        v118 = v42;
      }
      *(_QWORD *)v110 = v118;
      *(_DWORD *)&v110[8] = v33;
      *(_DWORD *)&v110[12] = v34;
      v43 = *(_OWORD *)v110;
      v110[16] = v39;
      v44 = *(_DWORD *)&v110[16];
      *((_OWORD *)v32 + 9) = *(_OWORD *)v110;
      *((_DWORD *)v32 + 40) = v44;
      v111 = &CMouseProcessor::CMouseEvent::`vftable';
      v112 = v32;
      v113 = 0;
      if ( (v121[v31 + 15] & 1) == 0 && *((_DWORD *)v32 + 29) != 1 )
      {
        v89 = v121[v31 + 22] != 0LL;
        *(_OWORD *)v110 = v43;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(v110, v21, v89) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
            || (v104 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v104 = 0;
          }
          v105 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v104 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v23);
            LOBYTE(v108) = v105;
            LOBYTE(v109) = v104;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v109,
              v108,
              *(_QWORD *)(UserSessionState + 69136),
              3,
              6,
              15,
              (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
          }
          InputTraceLogging::Mouse::DropInput(v112[12], 10LL);
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v116);
          goto LABEL_75;
        }
        v32 = v112;
      }
      v22 = *((unsigned int *)v32 + 30);
      if ( (v22 & 0x8000) == 0 )
      {
        if ( (v22 & 0x800) != 0 )
          goto LABEL_50;
        v45 = (v22 & 0x40) != 0 ? 16 : 32;
        if ( (v22 & 0x80u) != 0LL )
          v45 |= 8u;
        v46 = *(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 3056);
        v47 = v112[11];
        if ( (v45 & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(v46 + 148) & 2) != 0 )
            v45 |= 4u;
          if ( (*(_DWORD *)(v46 + 144) & 2) != 0 )
            v45 |= 2u;
        }
        InputTraceLogging::Power::UpdateInputGlobals(3LL, *((unsigned __int16 *)v112 + 14), v45);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v46, 0LL);
        v51 = *(_DWORD **)(W32GetUserSessionState(v49, v48, v50) + 19904);
        if ( (*v51 & 0x2000) != 0 )
        {
          W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v46, (unsigned int)v51);
          goto LABEL_49;
        }
        *(_DWORD *)(v46 + 136) = 3;
        *(_BYTE *)(v46 + 140) = (v45 & 8) != 0;
        v55 = *(volatile signed __int32 **)(W32GetUserSessionState(v52, (_DWORD)v51, v53) + 19904);
        _InterlockedAnd(v55, 0xFFFFFFBF);
        v115 = v45 & 0x10;
        if ( (v45 & 0x10) == 0 )
        {
          if ( (unsigned __int64)(v47 - *(_QWORD *)(v46 + 64)) > 0x1F4 )
          {
            CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)v55);
            if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &CurrentWin32kSessionId, 0, 0) < 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
            *(_QWORD *)(v46 + 64) = v47;
            v106 = *(_QWORD *)(v46 + 72);
            *(_QWORD *)(v46 + 128) = v106;
            *(_QWORD *)(v46 + 72) = v106 + 1;
          }
          if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)v55, v54, v56) + 19112) || (v45 & 8) == 0 )
          {
            EtwTraceDisplayTimeoutReset(*(_QWORD *)(v46 + 8));
            v57 = *(_QWORD *)(v46 + 72);
            *(_QWORD *)(v46 + 8) = v47;
            *(_QWORD *)(v46 + 80) = v57;
            *(_QWORD *)(v46 + 72) = v57 + 1;
            *(_QWORD *)(v46 + 16) = v47;
          }
        }
        ExReleasePushLockExclusiveEx(v46);
        KeLeaveCriticalRegion();
        v61 = W32GetUserSessionState(v59, v58, v60);
        *(_QWORD *)v110 = 0LL;
        TimeQuadPart = 0LL;
        v63 = *(_QWORD *)(v61 + 19904);
        *(_DWORD *)(v63 + 4968) = v47;
        v66 = W32GetUserSessionState(v63, v64, v65);
        v68 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v69 = v68 - *(_DWORD *)(v66 + 69160);
        if ( v69 < 0xEA60 )
        {
LABEL_45:
          if ( !v115 )
          {
            CitpLastInputUpdate((v45 & 8) != 0 ? 2048 : 2, v47);
            v71 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v70) + 48) + 3936LL);
            if ( v71 )
            {
              if ( v71() >= 0 )
                EditionKeepMachineUp((unsigned int)v47, 3LL, 0LL, v45);
            }
          }
LABEL_49:
          v32 = v112;
LABEL_50:
          *((_BYTE *)this + 3764) = 0;
          *(_QWORD *)v110 = 0LL;
          *((_OWORD *)this + 231) = 0LL;
          *((_QWORD *)this + 464) = 0LL;
          *((_DWORD *)this + 940) = 0;
          *((_QWORD *)this + 465) = 0LL;
          *(_OWORD *)&v110[8] = 0LL;
          *((_QWORD *)this + 466) = 0LL;
          *(_OWORD *)((char *)this + 3736) = *(_OWORD *)v110;
          *((_QWORD *)this + 469) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
          v72 = *((_DWORD *)v32 + 30);
          *((_BYTE *)this + 3765) = (v72 & 0x10) != 0;
          if ( (v72 & 0x10) == 0 )
          {
            *((_QWORD *)this + 466) = v32[12];
            *((_QWORD *)this + 465) = v32[11];
            *(_OWORD *)((char *)this + 3736) = *(_OWORD *)v32;
            *((_QWORD *)this + 469) = v32[2];
            *((_DWORD *)this + 927) = *((_DWORD *)v32 + 11) + *((_DWORD *)v32 + 19);
            *((_DWORD *)this + 928) = *((_DWORD *)v32 + 12) + *((_DWORD *)v32 + 20);
            *((_DWORD *)this + 926) = 0;
            if ( (v32[15] & 0x20) != 0 && ((v73 = *((_DWORD *)v32 + 28), v73 == 8) || v73 == 4) )
              v74 = (unsigned __int8)*((_DWORD *)v32 + 10) | 0xFF515700;
            else
              v74 = *((_DWORD *)v32 + 10);
            v75 = v111;
            *((_DWORD *)this + 929) = v74;
            *((_WORD *)this + 1850) = ((__int64 (__fastcall *)(void ***))*v75)(&v111);
            v76 = ((__int64 (__fastcall *)(void ***))v111[1])(&v111);
            v77 = v112;
            *((_WORD *)this + 1851) = v76;
            *((_DWORD *)this + 926) = *((_DWORD *)v77 + 8);
            v78 = *((_WORD *)v77 + 18) & 0xF;
            *((_WORD *)this + 1848) = v78;
            if ( (v77[15] & 0x200) != 0 )
            {
              *(_QWORD *)((char *)this + 3708) = 0LL;
              *((_WORD *)this + 1848) = v78 & 0xFFFC;
            }
            if ( *((_DWORD *)this + 934) )
              *((_DWORD *)this + 940) |= 1u;
            if ( (v77[15] & 0x20) != 0 )
              *((_DWORD *)this + 940) |= 2u;
          }
          v79 = 0;
          v80 = &off_140255028;
          do
          {
            v81 = (unsigned __int8 (__fastcall *)(void ***))*(v80 - 1);
            if ( !v81 || v81(&v111) )
              (*v80)(this, (const struct CMouseProcessor::CMouseEvent *)&v111);
            ++v79;
            v80 += 2;
          }
          while ( v79 < 3 );
          if ( IsMouseIVEnabled(v83, v82, v84) && isRootPartition(v22, v21, v23) )
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor *)((char *)this + 4088),
              (const struct CMouseProcessor::CMouseEvent *)&v111);
          goto LABEL_68;
        }
        *(_DWORD *)(v66 + 69160) = v68;
        if ( *(_QWORD *)(W32GetUserSessionState(v69, v68, v67) + 18944) )
        {
          v93 = *(_QWORD *)(W32GetUserSessionState(v91, v90, v92) + 18944);
          v94 = *(_DWORD *)(*(_QWORD *)(v93 + 456) + 56LL);
          v91 = *(_QWORD *)(W32GetUserSessionState(v93, v95, v96) + 18944);
          if ( **(_QWORD **)(v91 + 456) )
          {
            v99 = W32GetUserSessionState(v91, v97, v98);
            TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(*(_QWORD *)(v99 + 18944) + 456LL));
            *(_QWORD *)v110 = TimeQuadPart;
            goto LABEL_90;
          }
        }
        else
        {
          v94 = 0;
        }
        *(_QWORD *)v110 = 0LL;
LABEL_90:
        if ( (W32kEtwEnabledKeyword & 0x8000000000020000uLL) != 0
          && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
          && (qword_1402A9DC0 & 0x8000000000020000uLL) != 0
          && (qword_1402A9DC8 & 0x8000000000020000uLL) == qword_1402A9DC8
          && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
        {
          v100 = W32GetCurrentWin32kSessionId(v91);
          McTemplateK0qqm_EtwWriteTransfer(v102, v101, v103, v100, v94, (__int64)v110);
        }
        ApiSetTraceLoggingUserIsActive(v94, TimeQuadPart);
        goto LABEL_45;
      }
      if ( v32[22] )
        goto LABEL_69;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7151LL);
LABEL_68:
      v32 = v112;
LABEL_69:
      v85 = (void (*)(void))v32[22];
      if ( v85 )
        v85();
      v86 = v116;
      if ( v116 )
      {
        CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v22, v21);
        if ( CurrentThreadWin32Thread )
          v88 = *CurrentThreadWin32Thread;
        else
          v88 = 0LL;
        *(_QWORD *)(v88 + 376) = *(_QWORD *)(v86 + 48);
        InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v116);
      }
LABEL_75:
      v30 = v119 + 1;
      v119 = v30;
      if ( v30 >= v120 )
        goto LABEL_16;
    }
    v39 = 1;
    v42 = *(_QWORD *)((char *)v32 + 124);
    v33 = *((_DWORD *)v32 + 33);
    LOBYTE(v34) = *((_DWORD *)v32 + 34) != 0;
    goto LABEL_28;
  }
LABEL_16:
  if ( IsMouseIVEnabled(v22, v21, v23) && isRootPartition(v25, v24, v26) )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 4088));
  v27 = 16LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    McTemplateK0_EtwWriteTransfer(16LL, &StopProcessQueuedMouseEvents, &W32kControlGuid);
  v28 = v117;
  if ( v117 )
  {
    v29 = (__int64 *)PsGetCurrentThreadWin32Thread(v27, v24);
    if ( v29 )
      v5 = *v29;
    *(_QWORD *)(v5 + 376) = *(_QWORD *)(v28 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v117);
  }
}
