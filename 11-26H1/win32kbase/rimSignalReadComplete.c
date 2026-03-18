/*
 * XREFs of rimSignalReadComplete @ 0x140098988
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     rimDispatchCompleteFrames @ 0x140096874 (rimDispatchCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMIsInputSuppressed @ 0x140098E80 (RIMIsInputSuppressed.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x140098F68 (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140099050 (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BL.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x1400994F8 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1401BF4D4 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, LARGE_INTEGER *a2, struct _IO_STATUS_BLOCK *a3)
{
  LARGE_INTEGER *v4; // rdi
  struct _IO_STATUS_BLOCK *v5; // r13
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  bool v10; // r15
  __int64 v11; // rbx
  char v12; // si
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  bool v22; // r15
  __int64 v23; // rbx
  LARGE_INTEGER v24; // rdi
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  int v29; // ecx
  bool v30; // r13
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // di
  LARGE_INTEGER v35; // rbx
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // edx
  int v40; // r8d
  char v41; // r14
  bool v42; // di
  LARGE_INTEGER v43; // rbx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rax
  int v51; // [rsp+28h] [rbp-70h]
  int updated; // [rsp+B8h] [rbp+20h]

  v4 = a2 + 23;
  v5 = a3;
  v10 = 0;
  if ( (unsigned int)RIMIsInputSuppressed(a2) && (v4->LowPart & 0x80u) == 0 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      v10 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = a2[2];
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v9);
      LOBYTE(v37) = v34;
      LOBYTE(v38) = v10;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v38,
        v37,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        10,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        (char)a2,
        v35.QuadPart);
    }
    InputTraceLogging::RIM::DropInput(a2, 5LL);
    *((_BYTE *)a1 + 776) = 1;
  }
  else if ( *((_BYTE *)a1 + 776) )
  {
    InputTraceLogging::RIM::SkipReadComplete(a1, (const struct RIMDEV *)a2);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v41 = 0;
    }
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = a2[2];
      v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v39, v40);
      LOBYTE(v45) = v42;
      LOBYTE(v46) = v41;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v46,
        v45,
        *(_QWORD *)(v44 + 19368),
        4,
        1,
        13,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        (char)a2,
        v43.QuadPart);
    }
  }
  else
  {
    v11 = W32GetUserSessionState(v8, v7, v9) + 88;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    v12 = 1;
    *((LARGE_INTEGER *)a1 + 113) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 228) = 1;
    if ( *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 176)
      && !*(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 170) )
    {
      *(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 170) = 1;
      v50 = W32GetUserSessionState(v48, v47, v49);
      KeSetTimer(*(PKTIMER *)(v50 + 176), (LARGE_INTEGER)-50000000LL, 0LL);
    }
    v19 = W32GetUserSessionState(v17, v16, v18);
    *(_QWORD *)(v19 + 96) = 0LL;
    ExReleasePushLockExclusiveEx(v19 + 88);
    KeLeaveCriticalRegion();
    if ( (v4->LowPart & 0x80u) != 0 && *(_DWORD *)(a2[57].QuadPart + 24) != 7 )
    {
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL, 0, 0);
      if ( updated < 0 )
      {
        v20 = (int)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v29 = *((_DWORD *)WPP_GLOBAL_Control + 11);
          if ( (v29 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
            v10 = 1;
        }
        v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = W32GetUserSessionState(v29, (_DWORD)WPP_GLOBAL_Control, v21);
          LOBYTE(v32) = v30;
          LOBYTE(v33) = v10;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v33,
            v32,
            *(_QWORD *)(v31 + 19368),
            4,
            1,
            11,
            (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
            updated);
        }
        v5 = a3;
      }
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v12 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *((_QWORD *)a1 + 105);
      v24 = a2[2];
      v25 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v21);
      LOBYTE(v26) = v22;
      LOBYTE(v27) = v12;
      WPP_RECORDER_AND_TRACE_SF_qqqq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 19368),
        4,
        v51,
        12,
        (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids,
        (char)a1,
        (char)a2,
        v24.QuadPart,
        v23);
    }
    InputTraceLogging::RIM::ReadComplete(a1, (const struct RIMDEV *)a2, v5);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a2[281] = a2[282];
    a2[284] = a2[285];
    a2[283] = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::RIM::ReadComplete(PerformanceCounter.QuadPart);
    a2[21].HighPart |= 8u;
    ZwSetEvent(*((HANDLE *)a1 + 105), 0LL);
    ZwClose(*((HANDLE *)a1 + 105));
    *((_QWORD *)a1 + 105) = 0LL;
  }
}
