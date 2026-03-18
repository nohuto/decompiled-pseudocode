/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1401627B0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     EtwTraceMouseInputApc @ 0x1400643F0 (EtwTraceMouseInputApc.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1400818C4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1400D15E4 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1400D17BC (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400D28D4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     UpconvertTime @ 0x14012E240 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x140134450 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x140134EAC (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14013A8FC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ApiSetEditionStopSonar @ 0x14016C224 (ApiSetEditionStopSonar.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019C400 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1401C2428 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(CMouseProcessor *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // rdi
  CMouseProcessor *v7; // r13
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  _DWORD *v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  int v18; // r8d
  bool v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // r14d
  bool v35; // bl
  bool v36; // di
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  unsigned __int64 v43; // rcx
  __int64 v44; // r14
  unsigned int v45; // ecx
  unsigned __int64 v46; // rax
  CMouseProcessor *v47; // rcx
  unsigned __int64 QuadPart; // r13
  int v49; // edi
  int v50; // edx
  int v51; // r8d
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  struct tagUIPI_INFO_INT *v55; // r14
  int v56; // edi
  _QWORD *v57; // rdx
  __int16 v58; // cx
  __int64 v59; // rcx
  __int128 v60; // xmm0
  int v61; // edx
  int v62; // r8d
  bool v63; // di
  bool v64; // si
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  struct tagUIPI_INFO_INT *v69; // [rsp+28h] [rbp-D8h]
  unsigned int v71; // [rsp+58h] [rbp-A8h]
  struct tagUIPI_INFO_INT *v72; // [rsp+60h] [rbp-A0h]
  int v73; // [rsp+68h] [rbp-98h]
  struct _MOUSE_INPUT_DATA *v74; // [rsp+70h] [rbp-90h]
  unsigned __int64 v75; // [rsp+78h] [rbp-88h]
  __int128 v76; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v77; // [rsp+90h] [rbp-70h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  CMouseProcessor *v79; // [rsp+A8h] [rbp-58h]
  void **v80[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v81[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  LARGE_INTEGER PerformanceCounter; // [rsp+F8h] [rbp-8h]
  LARGE_INTEGER v87; // [rsp+100h] [rbp+0h]
  __int64 v88; // [rsp+108h] [rbp+8h]
  __int128 v89; // [rsp+110h] [rbp+10h] BYREF
  __int64 v90; // [rsp+120h] [rbp+20h]
  _QWORD v91[2]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v92[3]; // [rsp+140h] [rbp+40h] BYREF
  int v93; // [rsp+170h] [rbp+70h]
  int v94; // [rsp+174h] [rbp+74h]
  unsigned __int64 v95[12]; // [rsp+180h] [rbp+80h] BYREF

  v6 = a2;
  v79 = a1;
  v7 = a1;
  v8 = a4;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v80, "ProcessMouseInput", 0LL);
  v9 = 0;
  v88 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  if ( a5 )
    v9 = 2;
  v73 = v9;
  LODWORD(v88) = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v81[0] = *(_QWORD *)(v6 + 2248);
  v81[1] = *(_QWORD *)(v6 + 2264);
  v84 = *(_QWORD *)(v6 + 2272);
  v85 = *(_QWORD *)(v6 + 2288);
  v71 = 0;
  EtwTraceMouseInputApc(v10);
  v15 = *(_DWORD **)(W32GetUserSessionState(v12, v11, v13) + 19904);
  if ( (*v15 & 0x2000) == 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)v15, v14, v16) + 18984) )
    {
      v27 = 8LL;
LABEL_14:
      InputTraceLogging::Mouse::DropInput(0LL, v27);
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v25, v24, v26) + 66792) & 0x100) != 0 )
      ResetAccessibilityCountersOnMouseInput(v29, v28, v30);
    ApiSetEditionStopSonar();
    v34 = *(_DWORD *)(v6 + 240);
    if ( v34 < 0 )
    {
      v35 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v33);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(UserSessionState + 69136),
          3,
          6,
          13,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids,
          v34);
      }
      v27 = 9LL;
      goto LABEL_14;
    }
    if ( IsMouseIVEnabled(v32, v31, v33) && isChildPartition(v41, v40, v42) )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)v7 + 4064));
    v91[1] = 0LL;
    v91[0] = *(_QWORD *)(W32GetUserSessionState(v41, v40, v42) + 19216);
    v72 = (struct tagUIPI_INFO_INT *)((v6 + 376) & -(__int64)(a5 != 0));
    if ( !a3 )
    {
LABEL_65:
      v87 = KeQueryPerformanceCounter(0LL);
      W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)v7 + 3648));
      MousePerfSummary::CollectMousePerfTelemetry(
        (CMouseProcessor *)((char *)v7 + 3024),
        (const struct _MousePerf *)v81);
      W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)v7 + 3648));
      goto LABEL_66;
    }
    v43 = a3 + v8;
    v75 = a3 + v8;
    while ( 1 )
    {
      v44 = (a3 + 24) & -(__int64)(a3 + 24 < v43);
      v74 = (struct _MOUSE_INPUT_DATA *)v44;
      if ( (*(_BYTE *)(a3 + 2) & 4) == 0 )
        break;
      v71 = 1;
LABEL_64:
      a3 = v44;
      if ( !v44 )
        goto LABEL_65;
    }
    if ( a5 && (v45 = *(_DWORD *)(a3 + 20)) != 0 )
    {
      v46 = UpconvertTime(v45);
      v78 = v46;
      *(_DWORD *)(a3 + 20) = 0;
      QuadPart = gliQpcFreq.QuadPart * v46 / 0x3E8;
    }
    else
    {
      v78 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    }
    CMouseProcessor::HandleMouseForLegacyTouchpad(v47, (struct _MOUSE_INPUT_DATA *)a3, (struct DEVICEINFO *)v6);
    v49 = v44 == 0 ? 0x100 : 0;
    if ( IsMouseIVEnabled(-(int)v44, v50, v51) && isChildPartition(v53, v52, v54) )
      v49 |= 4u;
    if ( a5 )
    {
      v55 = v72;
      v56 = v49 | (*((_DWORD *)v72 + 3) != 0 ? 112 : 48);
      if ( (*(_BYTE *)(a3 + 2) & 1) != 0 || *(_DWORD *)(a3 + 12) )
      {
        v57 = (_QWORD *)a2;
LABEL_53:
        v59 = v57[3];
        *((_QWORD *)&v76 + 1) = *v57;
        *(_QWORD *)&v76 = 2LL;
        v60 = v76;
        *(_QWORD *)&v76 = v78;
        v89 = v60;
        v90 = v59;
        *((_QWORD *)&v76 + 1) = QuadPart;
        v77 = QuadPart;
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v95, a3, &v76, v56, (__int64)&v89, 0LL);
        v6 = a2;
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)v95,
          0);
        v7 = v79;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(v79, v95) == 1 )
        {
          v63 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v63 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v65 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v61, v62);
            LOBYTE(v66) = v64;
            LOBYTE(v67) = v63;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v67,
              v66,
              *(_QWORD *)(v65 + 69136),
              4,
              6,
              14,
              (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
          }
          v44 = (__int64)v74;
          v6 = a2;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)v95, 2048)
            && (v95[0] & 0x2AA00000000LL) != 0 )
          {
            PoLatencySensitivityHint(0LL);
          }
          v69 = v55;
          v44 = (__int64)v74;
          v93 = v73;
          v94 = WORD2(v95[0]);
          memset(v92, 0, sizeof(v92));
          CMouseProcessor::ProcessMouseInputData(
            v7,
            (struct CMouseProcessor::MouseInputDataEx *)v95,
            (struct MouseInputProcessingState *)v91,
            (LARGE_INTEGER *)v92,
            v74,
            v69);
        }
        v43 = v75;
        goto LABEL_64;
      }
      v57 = (_QWORD *)a2;
    }
    else
    {
      v58 = *(_WORD *)(a3 + 2);
      v56 = v49 | 0x40;
      v57 = (_QWORD *)a2;
      if ( (v58 & 1) != 0 && (*(_DWORD *)(a2 + 888) & 1) != 0 )
        *(_WORD *)(a3 + 2) = v58 | 2;
      v55 = v72;
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_53;
    }
    if ( !*(_DWORD *)(a3 + 16) )
      v56 |= 8u;
    goto LABEL_53;
  }
  InputTraceLogging::Mouse::DropInput(0LL, 7LL);
  v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69136),
      4,
      6,
      12,
      (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
  }
LABEL_66:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v80,
    v17);
  return v71;
}
