/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x140047BC8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x140071E80 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140074E60 (RIMAbArbitratePointerDeviceFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1400F9BCC (RIMStartPointerDeviceFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1401266A0 (rimUpdatePointerDeviceFrameScanTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x140136684 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1401367F0 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned int v6; // r15d
  size_t v7; // r14
  char v8; // si
  char v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // bl
  LARGE_INTEGER PerformanceCounter; // rdi
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  char *v21; // rbx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  int v27; // r8d
  char v28; // bl
  bool v29; // r14
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r12d
  int v35; // edx
  __int64 *v36; // rbx
  unsigned int v37; // r15d
  __int64 v38; // r14
  size_t v39; // r13
  void *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned int v45; // r15d
  unsigned int i; // ebx
  int v47; // eax
  int v48; // eax
  __int64 v49; // rbx
  LARGE_INTEGER v50; // rax
  int v51; // r8d
  unsigned __int64 v52; // rdx
  char v53; // di
  bool v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rbx
  int v59; // edx
  int v60; // r8d
  char v61; // bl
  bool v62; // r14
  __int64 v63; // rax
  int v64; // edx
  int v65; // r8d
  bool v66; // r14
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  int v70; // [rsp+28h] [rbp-81h]
  __int16 v71; // [rsp+30h] [rbp-79h]
  char *Src; // [rsp+50h] [rbp-59h]
  __int64 v73; // [rsp+58h] [rbp-51h] BYREF
  ULONG v74; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v75; // [rsp+64h] [rbp-45h]
  int v76; // [rsp+68h] [rbp-41h]
  unsigned int v77; // [rsp+6Ch] [rbp-3Dh]
  __int64 v78; // [rsp+70h] [rbp-39h] BYREF
  int v79; // [rsp+78h] [rbp-31h]
  int v80; // [rsp+7Ch] [rbp-2Dh]
  int v81; // [rsp+80h] [rbp-29h]
  int v82; // [rsp+84h] [rbp-25h]
  _DWORD v83[4]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v84; // [rsp+98h] [rbp-11h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-9h]
  __int64 v86; // [rsp+A8h] [rbp-1h] BYREF
  size_t Size; // [rsp+B0h] [rbp+7h]
  unsigned __int16 x; // [rsp+120h] [rbp+77h]
  struct tagPOINT v91; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = a2;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v86,
    "ProcessPointerInput",
    0LL);
  v4 = *(_QWORD *)(v2 + 440);
  v5 = *(_QWORD *)(v2 + 456);
  v6 = *(_DWORD *)(v2 + 248);
  v85 = v5;
  v7 = *(unsigned __int16 *)(v4 + 44);
  Src = *(char **)(v4 + 24);
  v76 = *(unsigned __int16 *)(v4 + 44);
  v8 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v3);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      14,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  v14 = 0;
  if ( !*(_QWORD *)(v5 + 792) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 117LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v18 = v6 % (unsigned int)v7;
  v17 = v6 / (unsigned int)v7;
  v19 = v6 / (unsigned int)v7;
  if ( v6 % (unsigned int)v7 )
  {
    if ( v6 <= (unsigned int)v7 )
    {
      v19 = 1;
      v75 = 0;
      v20 = 0;
      goto LABEL_10;
    }
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    {
      v14 = 1;
    }
    v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v67 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v16);
      LOBYTE(v68) = v66;
      LOBYTE(v69) = v14;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v69,
        v68,
        *(_QWORD *)(v67 + 19368),
        4,
        1,
        15,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v6,
        v76);
    }
  }
  else
  {
    v75 = 0;
    v20 = 0;
    if ( v17 )
    {
LABEL_10:
      v21 = Src;
      Size = v7;
      do
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)&v84,
          "ProcessPointerInputReport",
          (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v86);
        v22 = *(_QWORD *)(v2 + 456);
        v74 = 0;
        x = 0;
        LOWORD(v91.x) = 0;
        v23 = *(_DWORD *)(v22 + 368);
        LODWORD(v78) = 0;
        v73 = 0LL;
        v83[0] = 0;
        v77 = 0;
        if ( (v23 & 2) != 0 )
        {
          if ( (int)rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
                      a1,
                      v2,
                      (int)v21,
                      v7,
                      &v74,
                      (__int64)&v78,
                      (__int64)&v73,
                      (__int64)&v73 + 4,
                      (__int64)v83,
                      (__int64)&v91) < 0 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v61 = 0;
            }
            v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v61 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_99;
            v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25);
            v71 = 16;
            goto LABEL_98;
          }
          x = v91.x;
          v26 = v73;
          LODWORD(v73) = HIDWORD(v73);
          v91.x = v78;
        }
        else
        {
          v74 = 1;
          v26 = 1;
          v91.x = 1;
          LODWORD(v73) = 1;
        }
        if ( !v26 )
          goto LABEL_25;
        rimUpdatePointerDeviceFrameScanTime(v2, v21, (unsigned int)v7, 0LL);
        if ( !v74 )
        {
          if ( *(_DWORD *)(v85 + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(
              (struct RawInputManagerObject *)a1,
              PerformanceCounter.QuadPart);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v28 = 0;
            }
            v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v30 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v27);
              LOBYTE(v31) = v29;
              LOBYTE(v32) = v28;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v32,
                v31,
                *(_QWORD *)(v30 + 19368),
                4,
                1,
                17,
                (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
            }
            v21 = Src;
          }
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v84);
          goto LABEL_60;
        }
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                             a1,
                             v2,
                             (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v85 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(a1, v2, v21, (unsigned int)v7, 0);
LABEL_25:
          v33 = a1;
          v34 = 0;
          v35 = a2;
          v36 = *(__int64 **)(a1 + 728);
          if ( v36 != (__int64 *)(a1 + 728) )
          {
            while ( 1 )
            {
              v37 = v19;
              if ( v36[3] == *(_QWORD *)(a2 + 16) )
                break;
              v36 = (__int64 *)*v36;
              if ( v36 == (__int64 *)(a1 + 728) )
                goto LABEL_44;
            }
            if ( !v36 )
              goto LABEL_44;
            if ( !*((_DWORD *)v36 + 4) )
            {
              v79 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 837LL);
            }
            if ( !(_DWORD)v7 )
            {
              v80 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 347LL);
            }
            v34 = 0;
            if ( Src )
            {
              v34 = *((_DWORD *)v36 + 12) + 1;
              if ( *((_DWORD *)v36 + 12) != -1 )
              {
                v38 = Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x64727352u);
                if ( !v38 )
                  goto LABEL_43;
                v39 = Size;
                v40 = (void *)Win32AllocPoolZInitImpl(256LL, Size, 0x64727352u);
                *(_QWORD *)(v38 + 8) = v40;
                if ( v40 )
                {
                  *(_DWORD *)v38 = v34;
                  *(_DWORD *)(v38 + 4) = v39;
                  memmove(v40, Src, v39);
                  *(_QWORD *)(v38 + 16) = 0LL;
                  v44 = v36[8];
                  if ( v44 )
                  {
                    *(_QWORD *)(v44 + 16) = v38;
                  }
                  else
                  {
                    if ( *((_DWORD *)v36 + 12) )
                    {
                      v81 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 390LL);
                    }
                    if ( v36[7] )
                    {
                      v82 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 391LL);
                    }
                    v36[7] = v38;
                  }
                  v36[8] = v38;
                  v19 = v37;
                  *((_DWORD *)v36 + 12) = v34;
LABEL_43:
                  v35 = a2;
                }
                else
                {
                  GreDeleteFastMutex((char *)v38, v41, v42, v43);
                  v35 = a2;
                  v19 = v37;
                }
LABEL_44:
                v33 = a1;
                goto LABEL_45;
              }
            }
            v35 = a2;
            v33 = a1;
          }
LABEL_45:
          v45 = v91.x;
          for ( i = 0; ; ++i )
          {
            if ( i >= v45 )
            {
              v48 = v73;
              goto LABEL_54;
            }
            v91.x = 0;
            HIDWORD(v73) = 0;
            rimProcessPointerDeviceContact(v33, v35, x, v34, (struct tagPOINT)&v91, (__int64)&v73 + 4);
            if ( v83[0] )
            {
              if ( v91.x )
                break;
            }
            v47 = v77;
            if ( HIDWORD(v73) )
              v47 = 1;
            v77 = v47;
            if ( (*(_DWORD *)(v85 + 368) & 2) != 0 )
            {
              x = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 768) + 24LL) + 8LL * x + 4);
            }
            else
            {
              if ( v74 != 1 )
              {
                v83[1] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 251LL);
              }
              if ( v45 != 1 )
              {
                v83[2] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 252LL);
              }
            }
            v35 = a2;
            v33 = a1;
          }
          v48 = 1;
LABEL_54:
          v2 = a2;
          if ( v48 )
          {
            rimProcessMissingPointerDeviceContacts(a1, a2, v77, 0LL);
            RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1);
            RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1);
          }
          v49 = v84;
          if ( v84 )
          {
            *((_QWORD *)PtiCurrent() + 47) = *(_QWORD *)(v49 + 48);
            InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v84);
          }
          v20 = v75;
          goto LABEL_59;
        }
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v61 = 0;
        }
        v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v59, v60);
          v71 = 18;
LABEL_98:
          LOBYTE(v65) = v62;
          LOBYTE(v64) = v61;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v64,
            v65,
            *(_QWORD *)(v63 + 19368),
            4,
            1,
            v71,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
        }
LABEL_99:
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v84);
LABEL_59:
        v21 = Src;
LABEL_60:
        v21 += Size;
        ++v20;
        LODWORD(v7) = v76;
        v75 = v20;
        Src = v21;
      }
      while ( v20 < v19 );
    }
  }
  v50 = KeQueryPerformanceCounter(0LL);
  v52 = (unsigned __int64)(1000000 * (v50.QuadPart - PerformanceCounter.QuadPart)) % gliQpcFreq.QuadPart;
  v53 = (unsigned __int64)(1000000 * (v50.QuadPart - PerformanceCounter.QuadPart)) / gliQpcFreq.QuadPart;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v8 = 0;
  }
  v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v55 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v52, v51);
    LOBYTE(v56) = v54;
    LOBYTE(v57) = v8;
    WPP_RECORDER_AND_TRACE_SF_i(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v57,
      v56,
      *(_QWORD *)(v55 + 19368),
      4,
      v70,
      19,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
      v53);
  }
  v58 = v86;
  if ( v86 )
  {
    *((_QWORD *)PtiCurrent() + 47) = *(_QWORD *)(v58 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v86);
  }
}
