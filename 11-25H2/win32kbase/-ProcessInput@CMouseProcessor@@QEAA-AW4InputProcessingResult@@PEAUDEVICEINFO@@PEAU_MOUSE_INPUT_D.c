/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1401908B0
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x14018C6E0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x14005E658 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x14005EBD4 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005ECCC (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x14005F1C0 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140060388 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400603D8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     UpconvertTime @ 0x1400E7B30 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1400EBCC0 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1400EEF28 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     EtwTraceMouseInputApc @ 0x1400F1C70 (EtwTraceMouseInputApc.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14015BD98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ApiSetEditionStopSonar @ 0x140196B24 (ApiSetEditionStopSonar.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x14019FFAC (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 *     Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1401F0DE0 (Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(CMouseProcessor *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // rdi
  CMouseProcessor *v7; // r13
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  bool v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r14d
  bool v27; // bl
  bool v28; // di
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  const struct _MOUSE_INPUT_DATA *v35; // r14
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  CMouseProcessor *v38; // rcx
  unsigned __int64 QuadPart; // r13
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // edi
  _QWORD *v44; // rdx
  __int16 v45; // cx
  __int64 v46; // rax
  __int128 v47; // xmm0
  __int64 v48; // r9
  __int64 v49; // rdx
  bool v50; // di
  bool v51; // si
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  int v57; // [rsp+58h] [rbp-A8h]
  unsigned int v58; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v59; // [rsp+68h] [rbp-98h]
  __int128 v60; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v61; // [rsp+80h] [rbp-80h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  struct tagUIPI_INFO_INT *v63; // [rsp+98h] [rbp-68h]
  CMouseProcessor *v64; // [rsp+A0h] [rbp-60h]
  __int64 *v65; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v66[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  LARGE_INTEGER PerformanceCounter; // [rsp+E8h] [rbp-18h]
  LARGE_INTEGER v72; // [rsp+F0h] [rbp-10h]
  int v73; // [rsp+F8h] [rbp-8h]
  int v74; // [rsp+FCh] [rbp-4h]
  __int128 v75; // [rsp+100h] [rbp+0h] BYREF
  __int64 v76; // [rsp+110h] [rbp+10h]
  struct tagPOINT v77; // [rsp+120h] [rbp+20h] BYREF
  __int64 v78; // [rsp+128h] [rbp+28h]
  _OWORD v79[3]; // [rsp+130h] [rbp+30h] BYREF
  int v80; // [rsp+160h] [rbp+60h]
  int v81; // [rsp+164h] [rbp+64h]
  unsigned __int64 v82[12]; // [rsp+170h] [rbp+70h] BYREF

  v6 = a2;
  v64 = a1;
  v7 = a1;
  v8 = a4;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v65, "ProcessMouseInput", 0LL);
  v9 = 0;
  v68 = 0LL;
  v74 = 0;
  v67 = 0LL;
  if ( a5 )
    v9 = 2;
  v57 = v9;
  v73 = v9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v66[0] = *(_QWORD *)(v6 + 2256);
  v66[1] = *(_QWORD *)(v6 + 2272);
  v69 = *(_QWORD *)(v6 + 2280);
  v70 = *(_QWORD *)(v6 + 2296);
  v58 = 0;
  EtwTraceMouseInputApc(v10);
  v14 = *(_DWORD **)(W32GetUserSessionState(v12, v11) + 19872);
  if ( (*v14 & 0x2000) == 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v14, v13) + 18944) )
    {
LABEL_13:
      InputTraceLogging::Mouse::DropInput();
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v22, v21) + 66800) & 0x100) != 0 )
      ResetAccessibilityCountersOnMouseInput(v24, v23);
    ApiSetEditionStopSonar();
    v26 = *(_DWORD *)(v6 + 240);
    if ( v26 < 0 )
    {
      v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(UserSessionState + 69144),
          3,
          6,
          13,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids,
          v26);
      }
      goto LABEL_13;
    }
    if ( IsMouseIVEnabled() && isChildPartition(v33, v32) )
      CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)v7 + 4056));
    v78 = 0LL;
    v77 = *(struct tagPOINT *)(W32GetUserSessionState(v33, v32) + 19184);
    v63 = (struct tagUIPI_INFO_INT *)((v6 + 376) & -(__int64)(a5 != 0));
    if ( !a3 )
    {
LABEL_65:
      v72 = KeQueryPerformanceCounter(0LL);
      W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)v7 + 3648), 0);
      MousePerfSummary::CollectMousePerfTelemetry(
        (CMouseProcessor *)((char *)v7 + 3024),
        (const struct _MousePerf *)v66);
      W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)v7 + 3648), 0LL);
      goto LABEL_66;
    }
    v34 = a3 + v8;
    v59 = a3 + v8;
    while ( 1 )
    {
      v35 = (const struct _MOUSE_INPUT_DATA *)((a3 + 24) & -(__int64)(a3 + 24 < v34));
      if ( (*(_BYTE *)(a3 + 2) & 4) == 0 )
        break;
      v58 = 1;
LABEL_64:
      a3 = (__int64)v35;
      if ( !v35 )
        goto LABEL_65;
    }
    if ( a5 && (v36 = *(_DWORD *)(a3 + 20)) != 0 )
    {
      v37 = UpconvertTime(v36);
      *(_DWORD *)(a3 + 20) = 0;
      v62 = v37;
      QuadPart = gliQpcFreq.QuadPart * v37 / 0x3E8;
    }
    else
    {
      v62 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v57 = v73;
    }
    CMouseProcessor::HandleMouseForLegacyTouchpad(v38, (struct _MOUSE_INPUT_DATA *)a3, (struct DEVICEINFO *)v6);
    v40 = v35 == 0LL ? 0x100 : 0;
    if ( IsMouseIVEnabled() && isChildPartition(v42, v41) )
      v40 |= 4u;
    if ( a5 )
    {
      v43 = v40 | (*((_DWORD *)v63 + 3) != 0 ? 112 : 48);
      if ( !(unsigned int)Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline()
        || (*(_BYTE *)(a3 + 2) & 1) != 0
        || *(_DWORD *)(a3 + 12) )
      {
        v44 = (_QWORD *)a2;
LABEL_53:
        *((_QWORD *)&v60 + 1) = *v44;
        v46 = v44[3];
        *(_QWORD *)&v60 = 2LL;
        v47 = v60;
        *(_QWORD *)&v60 = v62;
        v75 = v47;
        v76 = v46;
        *((_QWORD *)&v60 + 1) = QuadPart;
        v61 = QuadPart;
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v82, a3, &v60, v43, (__int64)&v75, 0LL);
        v6 = a2;
        InputTraceLogging::Mouse::ProcessInput(
          (const struct RIMDEV *)a2,
          (const struct CMouseProcessor::MouseInputDataEx *)v82,
          0LL,
          v48);
        v7 = v64;
        if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(v64, v82) == 1 )
        {
          v50 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v49);
            LOBYTE(v53) = v51;
            LOBYTE(v54) = v50;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v54,
              v53,
              *(_QWORD *)(v52 + 69144),
              4,
              6,
              14,
              (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
          }
          v6 = a2;
        }
        else
        {
          if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)v82, 2048)
            && (v82[0] & 0x2AA00000000LL) != 0 )
          {
            PoLatencySensitivityHint(0LL);
          }
          v80 = v57;
          v81 = WORD2(v82[0]);
          memset(v79, 0, sizeof(v79));
          CMouseProcessor::ProcessMouseInputData(
            v7,
            (struct CMouseProcessor::MouseInputDataEx *)v82,
            &v77,
            (struct _MousePacketPerf *)v79,
            v35,
            v63);
        }
        v34 = v59;
        goto LABEL_64;
      }
      v44 = (_QWORD *)a2;
    }
    else
    {
      v45 = *(_WORD *)(a3 + 2);
      v43 = v40 | 0x40;
      v44 = (_QWORD *)a2;
      if ( (v45 & 1) != 0 && (*(_DWORD *)(a2 + 888) & 1) != 0 )
        *(_WORD *)(a3 + 2) = v45 | 2;
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_53;
    }
    if ( !*(_DWORD *)(a3 + 16) )
      v43 |= 8u;
    goto LABEL_53;
  }
  InputTraceLogging::Mouse::DropInput();
  v16 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v19,
      *(_QWORD *)(v18 + 69144),
      4,
      6,
      12,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
LABEL_66:
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v65);
  return v58;
}
