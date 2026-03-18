/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimProcessPointerDeviceButtonContact @ 0x14002FD24 (rimProcessPointerDeviceButtonContact.c)
 *     RIMStartPointerDeviceFrame @ 0x140030008 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x14003034C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400303D4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x14003065C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1400320D4 (rimProcessMissingPointerDeviceContacts.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1400E6D8C (rimUpdatePointerDeviceFrameScanTime.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1400F0A58 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F12A4 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(struct RawInputManagerObject *a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  char v7; // di
  char v8; // bl
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v14; // rdx
  unsigned __int64 QuadPart; // rbx
  unsigned int v16; // eax
  int v17; // r12d
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rdx
  char v20; // si
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  struct RawInputManagerObject *v25; // rsi
  __int64 v26; // rdx
  char v27; // si
  bool v28; // r14
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // esi
  unsigned int v36; // r14d
  unsigned __int16 v37; // r12
  int v38; // eax
  int v39; // eax
  char v40; // si
  bool v41; // r14
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  int v45; // [rsp+28h] [rbp-61h]
  __int16 v46; // [rsp+30h] [rbp-59h]
  __int64 v47; // [rsp+50h] [rbp-39h] BYREF
  int v48; // [rsp+5Ch] [rbp-2Dh] BYREF
  _DWORD v49[3]; // [rsp+60h] [rbp-29h] BYREF
  int v50; // [rsp+6Ch] [rbp-1Dh] BYREF
  __int64 v51; // [rsp+70h] [rbp-19h]
  __int64 v52; // [rsp+78h] [rbp-11h]
  __int64 v53; // [rsp+80h] [rbp-9h]
  __int64 *v54; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v55[10]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v57; // [rsp+F8h] [rbp+6Fh] BYREF
  int v58; // [rsp+100h] [rbp+77h]
  ULONG v59; // [rsp+108h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v54, "ProcessPointerInput", 0LL);
  v3 = *(_DWORD *)(a2 + 248);
  v51 = *(_QWORD *)(a2 + 456);
  v4 = *(_QWORD *)(a2 + 440);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(unsigned __int16 *)(v4 + 44);
  v52 = v5;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      14,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
  }
  if ( !*(_QWORD *)(v51 + 792) )
  {
    LODWORD(v57) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 117LL);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  HIDWORD(v14) = 0;
  QuadPart = PerformanceCounter.QuadPart;
  v16 = v3 / (unsigned int)v6;
  if ( !(v3 % (unsigned int)v6) )
  {
    v17 = 0;
    if ( !v16 )
      goto LABEL_12;
    goto LABEL_22;
  }
  if ( v3 <= (unsigned int)v6 )
  {
    v16 = 1;
    v17 = 0;
LABEL_22:
    v25 = a1;
    v53 = v16;
    while ( 1 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v55,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v54);
      v48 = 0;
      LOWORD(v57) = 0;
      v59 = 0;
      v47 = 0LL;
      v50 = 0;
      v49[0] = 0;
      v58 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  (_DWORD)v25,
                  a2,
                  v5,
                  v6,
                  &v59,
                  (__int64)&v47,
                  (__int64)&v47 + 4,
                  (__int64)&v50,
                  (__int64)v49,
                  (__int64)&v57) < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v17 = 0;
          v27 = 0;
        }
        else
        {
          v27 = 1;
          v17 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_33;
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        v46 = 16;
        goto LABEL_32;
      }
      if ( !HIDWORD(v47) )
        goto LABEL_60;
      rimUpdatePointerDeviceFrameScanTime(a2, v5, (unsigned int)v6);
      if ( v59 )
      {
        if ( (unsigned int)RIMStartPointerDeviceFrame((__int64)v25, a2, QuadPart) )
        {
          if ( *(_DWORD *)(v51 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(v25, a2, v5, v6, 0);
LABEL_60:
          RIMStoreRawDataInPointerDeviceFrame((__int64)v25, a2, v5, v6, &v48);
          v35 = v47;
          v36 = 0;
          if ( (_DWORD)v47 )
          {
            v37 = v57;
            do
            {
              LODWORD(v57) = 0;
              LODWORD(v47) = 0;
              rimProcessPointerDeviceContact(a1, v37, v48, (__int64)&v57, (__int64)&v47);
              if ( v49[0] && (_DWORD)v57 )
              {
                v17 = v58;
                v39 = 1;
                goto LABEL_77;
              }
              v38 = v58;
              if ( (_DWORD)v47 )
                v38 = 1;
              v58 = v38;
              if ( (*(_DWORD *)(v51 + 368) & 2) != 0 )
              {
                v37 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 768) + 24LL) + 8LL * v37 + 4);
              }
              else
              {
                if ( v59 != 1 )
                {
                  v49[1] = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 251LL);
                }
                if ( v35 != 1 )
                {
                  v49[2] = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 252LL);
                }
              }
              ++v36;
            }
            while ( v36 < v35 );
            v17 = v58;
          }
          v39 = v50;
LABEL_77:
          v25 = a1;
          if ( v39 )
          {
            rimProcessMissingPointerDeviceContacts((int)a1, a2, v17);
            RIMAbArbitratePointerDeviceFrame(a1, a2);
            RIMCompletePointerDeviceFrame(a1, a2, 0);
          }
LABEL_40:
          v17 = 0;
          goto LABEL_34;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v17 = 0;
          v27 = 0;
        }
        else
        {
          v27 = 1;
          v17 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
          v46 = 18;
          goto LABEL_32;
        }
      }
      else
      {
        if ( *(_DWORD *)(v51 + 24) == 7 )
        {
          rimCreateAndProcessPointerDeviceButtonOnlyFrame(v25, a2, v5, v6, QuadPart);
          goto LABEL_40;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v17 = 0;
          v27 = 0;
        }
        else
        {
          v27 = 1;
          v17 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
          v46 = 17;
LABEL_32:
          LOBYTE(v31) = v28;
          LOBYTE(v30) = v27;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v30,
            v31,
            *(_QWORD *)(v29 + 19336),
            4,
            1,
            v46,
            (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
        }
      }
LABEL_33:
      v25 = a1;
LABEL_34:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v55);
      v52 += v6;
      v32 = v53-- == 1;
      v5 = v52;
      if ( v32 )
        goto LABEL_12;
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v40 = 0;
  }
  v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v3 % (unsigned int)v6;
    v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    LOBYTE(v43) = v41;
    LOBYTE(v44) = v40;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v43,
      *(_QWORD *)(v42 + 19336),
      4,
      1,
      15,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
      v3,
      v6);
  }
LABEL_12:
  v18 = KeQueryPerformanceCounter(0LL);
  v19 = 1000000 * (v18.QuadPart - QuadPart) % gliQpcFreq.QuadPart;
  v20 = 1000000 * (v18.QuadPart - QuadPart) / gliQpcFreq.QuadPart;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v7;
    WPP_RECORDER_AND_TRACE_SF_i(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v23,
      *(_QWORD *)(v22 + 19336),
      4,
      v45,
      19,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
      v20);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v54);
}
