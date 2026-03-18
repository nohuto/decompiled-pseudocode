/*
 * XREFs of rimSignalReadComplete @ 0x140035980
 * Callers:
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     rimDispatchCompleteFrames @ 0x1401342F4 (rimDispatchCompleteFrames.c)
 * Callees:
 *     RIMIsInputSuppressed @ 0x140035E74 (RIMIsInputSuppressed.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x140035F54 (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140036028 (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@PEAU_IO_STATUS_BL.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqq @ 0x140036410 (WPP_RECORDER_AND_TRACE_SF_qqqq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x14019F304 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 */

void __fastcall rimSignalReadComplete(struct RawInputManagerObject *a1, LARGE_INTEGER *a2, struct _IO_STATUS_BLOCK *a3)
{
  LARGE_INTEGER *v4; // rdi
  struct _IO_STATUS_BLOCK *v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // r15
  __int64 v10; // rbx
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rdx
  bool v18; // r15
  __int64 v19; // rbx
  LARGE_INTEGER v20; // rdi
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v25; // rcx
  bool v26; // r13
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  bool v30; // di
  LARGE_INTEGER v31; // rbx
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rdx
  char v36; // r14
  bool v37; // di
  LARGE_INTEGER v38; // rbx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // [rsp+28h] [rbp-70h]
  int updated; // [rsp+B8h] [rbp+20h]

  v4 = a2 + 23;
  v5 = a3;
  v9 = 0;
  if ( (unsigned int)RIMIsInputSuppressed(a2) && (v4->LowPart & 0x80u) == 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      v9 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = a2[2];
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v33) = v30;
      LOBYTE(v34) = v9;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        10,
        (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
        (char)a2,
        v31.QuadPart);
    }
    InputTraceLogging::RIM::DropInput(a2, 5LL);
    *((_BYTE *)a1 + 776) = 1;
  }
  else if ( *((_BYTE *)a1 + 776) )
  {
    InputTraceLogging::RIM::SkipReadComplete(a1, (const struct RIMDEV *)a2);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v36 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = a2[2];
      v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
      LOBYTE(v40) = v37;
      LOBYTE(v41) = v36;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 19336),
        4,
        1,
        13,
        (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
        (char)a2,
        v38.QuadPart);
    }
  }
  else
  {
    v10 = W32GetUserSessionState(v8, v7) + 88;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v11 = 1;
    *((LARGE_INTEGER *)a1 + 113) = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)a1 + 228) = 1;
    if ( *(_QWORD *)(W32GetUserSessionState(v13, v12) + 176) && !*(_BYTE *)(W32GetUserSessionState(v15, v14) + 170) )
    {
      *(_BYTE *)(W32GetUserSessionState(v15, v14) + 170) = 1;
      v44 = W32GetUserSessionState(v43, v42);
      KeSetTimer(*(PKTIMER *)(v44 + 176), (LARGE_INTEGER)-50000000LL, 0LL);
    }
    v16 = W32GetUserSessionState(v15, v14);
    *(_QWORD *)(v16 + 96) = 0LL;
    ExReleasePushLockExclusiveEx(v16 + 88, 0LL);
    KeLeaveCriticalRegion();
    if ( (v4->LowPart & 0x80u) != 0 && *(_DWORD *)(a2[57].QuadPart + 24) != 7 )
    {
      v45 = 0;
      updated = ZwUpdateWnfStateData(&WNF_TOPE_INP_POINTER_DEVICE_ACTIVITY, 0LL, 0LL, 0LL, 0LL);
      if ( updated < 0 )
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
        {
          v25 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v25 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
            v9 = 1;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = W32GetUserSessionState(v25, WPP_GLOBAL_Control);
          LOBYTE(v28) = v26;
          LOBYTE(v29) = v9;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v28,
            *(_QWORD *)(v27 + 19336),
            4,
            1,
            11,
            (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
            updated);
        }
        v5 = a3;
      }
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v11 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *((_QWORD *)a1 + 105);
      v20 = a2[2];
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      LOBYTE(v22) = v18;
      LOBYTE(v23) = v11;
      WPP_RECORDER_AND_TRACE_SF_qqqq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 19336),
        4,
        v45,
        12,
        (__int64)&WPP_5ea806e723ba3833aff6fb8b08279cc2_Traceguids,
        (char)a1,
        (char)a2,
        v20.QuadPart,
        v19);
    }
    InputTraceLogging::RIM::ReadComplete(a1, (const struct RIMDEV *)a2, v5);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a2[282] = a2[283];
    a2[285] = a2[286];
    a2[284] = PerformanceCounter;
    InputTraceLogging::TelemetryDebug::RIM::ReadComplete(PerformanceCounter.QuadPart);
    a2[21].HighPart |= 8u;
    ZwSetEvent(*((HANDLE *)a1 + 105), 0LL);
    ZwClose(*((HANDLE *)a1 + 105));
    *((_QWORD *)a1 + 105) = 0LL;
  }
}
