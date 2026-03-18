/*
 * XREFs of rimObsAddInputObserver @ 0x1401F296C
 * Callers:
 *     NtRIMAddInputObserver @ 0x1401D7BC0 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1401D92A0 (RIMAddInputObserver.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     rimConvertUserToKernelEventHandle @ 0x14003557C (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x14014BB2C (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x14019DDFC (RawInputManagerInputObserverObjectCreate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1401A0190 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1401F2310 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        HANDLE *a9)
{
  void *v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  __int64 UserSessionState; // rax
  char v13; // bl
  bool v14; // r14
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  char v19; // bl
  bool v20; // r14
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  char v24; // bl
  bool v25; // r14
  __int64 v26; // rax
  unsigned int v27; // edx
  int v28; // r8d
  __int64 v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // r8
  void *v35; // rcx
  PVOID v36; // r13
  char v37; // bl
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rdx
  char v43; // r12
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  char v47; // r12
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  char v51; // r12
  __int64 v52; // rax
  int v53; // edx
  int v54; // r8d
  char v55; // r12
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rdx
  char v61; // r14
  bool v62; // r15
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  int v66; // [rsp+20h] [rbp-98h]
  int v67; // [rsp+28h] [rbp-90h]
  __int16 v68; // [rsp+30h] [rbp-88h]
  __int16 v69; // [rsp+30h] [rbp-88h]
  char v70; // [rsp+60h] [rbp-58h]
  char v71; // [rsp+60h] [rbp-58h]
  char v72; // [rsp+61h] [rbp-57h]
  bool v73; // [rsp+61h] [rbp-57h]
  unsigned int v74; // [rsp+64h] [rbp-54h]
  HANDLE Handle; // [rsp+68h] [rbp-50h] BYREF
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v78; // [rsp+C8h] [rbp+10h]
  bool v79; // [rsp+C8h] [rbp+10h]
  bool v80; // [rsp+C8h] [rbp+10h]
  bool v81; // [rsp+C8h] [rbp+10h]
  bool v82; // [rsp+C8h] [rbp+10h]

  v78 = a2;
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1066);
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  v70 = (char)v9;
  v72 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v9, a2);
    v10 = a7;
    v74 = a7;
    v11 = a6;
    WPP_RECORDER_AND_TRACE_SF_DDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v70,
      v72,
      *(_QWORD *)(UserSessionState + 69144),
      v66,
      v67,
      0x3Cu,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  else
  {
    v10 = a7;
    v74 = a7;
    v11 = a6;
  }
  if ( v78 < 0x30 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69144),
        3,
        1,
        61,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69144);
    v68 = 62;
LABEL_57:
    LOBYTE(v22) = v20;
    LOBYTE(v21) = v19;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      3,
      1,
      v68,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    return 3221225485LL;
  }
  if ( a5 > 2 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      v27 = a5;
      LOBYTE(v28) = v25;
      LOBYTE(v27) = v24;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v28,
        *(_QWORD *)(v26 + 69144),
        3,
        1,
        63,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        a5);
    }
    return 3221225485LL;
  }
  if ( a5 == 2 )
  {
    if ( !v10 || !v11 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69144);
      v68 = 64;
      goto LABEL_57;
    }
    if ( v11 == 7 || v11 == 1 && (v10 == 6 || v10 == 2) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69144);
      v68 = 65;
      goto LABEL_57;
    }
  }
  else
  {
    v11 = 0;
    v10 = 0;
    v74 = 0;
  }
  v29 = W32GetUserSessionState(v9, a2);
  RIMLockExclusive(v29 + 72);
  if ( rimObsCheckForRegistrationConflicts(a8, a5, v11, v10) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v32 = RawInputManagerInputObserverObjectCreate(a4, v33, v34, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v32 < 0 )
    {
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v51 = 0;
      }
      v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v51 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
      v69 = 70;
    }
    else
    {
      Object = 0LL;
      v32 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, (__int64)v30, a4, &Object);
      if ( v32 >= 0 )
      {
        v35 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (LOBYTE(v35) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          LOBYTE(v35) = 0;
        }
        v71 = (char)v35;
        v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = (char)Handle;
          v38 = W32GetUserSessionState(v35, v30);
          v36 = Object;
          LOBYTE(v39) = v73;
          LOBYTE(v40) = v71;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v40,
            v39,
            *(_QWORD *)(v38 + 69144),
            4,
            1,
            66,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
            v37,
            Object);
        }
        else
        {
          v36 = Object;
        }
        *((_DWORD *)v36 + 18) = a4;
        *((_QWORD *)v36 + 12) = a1;
        *((_DWORD *)v36 + 26) = v78;
        *((_DWORD *)v36 + 27) = a5;
        *((_DWORD *)v36 + 28) = v11;
        *((_DWORD *)v36 + 29) = v74;
        *((_DWORD *)v36 + 30) = a8;
        v32 = rimConvertUserToKernelEventHandle(a3, (void **)v36 + 10);
        if ( v32 < 0 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v47 = 0;
          }
          v80 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
            LOBYTE(v49) = v80;
            LOBYTE(v50) = v47;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v50,
              v49,
              *(_QWORD *)(v48 + 69144),
              3,
              1,
              68,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        else
        {
          LOBYTE(v41) = 1;
          v32 = rimObsStartStopDeviceRead(v36, v41);
          if ( v32 < 0 )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v43 = 0;
            }
            v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v44 = W32GetUserSessionState(WPP_GLOBAL_Control, v42);
              LOBYTE(v45) = v79;
              LOBYTE(v46) = v43;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v46,
                v45,
                *(_QWORD *)(v44 + 69144),
                3,
                1,
                67,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                v32);
            }
          }
        }
        ObfDereferenceObject(v36);
        goto LABEL_89;
      }
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v51 = 0;
      }
      v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v51 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
      v69 = 69;
    }
    LOBYTE(v54) = v81;
    LOBYTE(v53) = v51;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v53,
      v54,
      *(_QWORD *)(v52 + 69144),
      3,
      1,
      v69,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
LABEL_89:
    if ( v32 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v55 = 0;
        }
        v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
          LOBYTE(v57) = v82;
          LOBYTE(v58) = v55;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v58,
            v57,
            *(_QWORD *)(v56 + 69144),
            3,
            1,
            72,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        ObCloseHandle(Handle, a4);
      }
    }
    else if ( a4 )
    {
      v30 = a9;
      v31 = (_QWORD *)MmUserProbeAddress;
      if ( (unsigned __int64)a9 >= MmUserProbeAddress )
        v30 = (_QWORD *)MmUserProbeAddress;
      *v30 = Handle;
    }
    else
    {
      v31 = a9;
      *a9 = Handle;
    }
    goto LABEL_119;
  }
  v32 = -1073741823;
LABEL_119:
  v59 = W32GetUserSessionState(v31, v30);
  RIMUnlockExclusive(v59 + 72);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v61 = 0;
  }
  v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
    LOBYTE(v64) = v62;
    LOBYTE(v65) = v61;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v65,
      v64,
      *(_QWORD *)(v63 + 69144),
      4,
      1,
      73,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v32);
  }
  return (unsigned int)v32;
}
