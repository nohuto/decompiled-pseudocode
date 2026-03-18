/*
 * XREFs of rimObsAddInputObserver @ 0x14020E44C
 * Callers:
 *     NtRIMAddInputObserver @ 0x1401FED60 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1402002F0 (RIMAddInputObserver.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimConvertUserToKernelEventHandle @ 0x14005D9DC (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDD @ 0x140185470 (WPP_RECORDER_AND_TRACE_SF_DDDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1401BC538 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1401C2394 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x14020DE84 (rimObsCheckForRegistrationConflicts.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        HANDLE *a9)
{
  int v9; // ecx
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
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // ecx
  PVOID v37; // r13
  char v38; // bl
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rdx
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  char v46; // r12
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  char v50; // r12
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // r12
  __int64 v55; // rax
  int v56; // edx
  int v57; // r8d
  char v58; // r12
  bool v59; // r13
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  __int64 v63; // rax
  int v64; // edx
  int v65; // r8d
  char v66; // r14
  bool v67; // r15
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  int v71; // [rsp+20h] [rbp-98h]
  int v72; // [rsp+28h] [rbp-90h]
  __int16 v73; // [rsp+30h] [rbp-88h]
  __int16 v74; // [rsp+30h] [rbp-88h]
  char v75; // [rsp+60h] [rbp-58h]
  char v76; // [rsp+60h] [rbp-58h]
  char v77; // [rsp+61h] [rbp-57h]
  bool v78; // [rsp+61h] [rbp-57h]
  unsigned int v79; // [rsp+64h] [rbp-54h]
  HANDLE Handle; // [rsp+68h] [rbp-50h] BYREF
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  bool v84; // [rsp+C8h] [rbp+10h]
  bool v85; // [rsp+C8h] [rbp+10h]
  bool v86; // [rsp+C8h] [rbp+10h]

  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1066);
  v9 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    LOBYTE(v9) = 0;
  }
  v75 = v9;
  v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v9, a2, (_DWORD)a3);
    v10 = a7;
    v79 = a7;
    v11 = a6;
    WPP_RECORDER_AND_TRACE_SF_DDDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v75,
      v77,
      *(_QWORD *)(UserSessionState + 69136),
      v71,
      v72,
      0x3Cu,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  else
  {
    v10 = a7;
    v79 = a7;
    v11 = a6;
  }
  if ( a2 < 0x30 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69136),
        3,
        1,
        61,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    return 3221225507LL;
  }
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v23 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3) + 69136);
    v73 = 62;
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
      v73,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    return 3221225485LL;
  }
  if ( a5 > 2 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
      v27 = a5;
      LOBYTE(v28) = v25;
      LOBYTE(v27) = v24;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v28,
        *(_QWORD *)(v26 + 69136),
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
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3) + 69136);
      v73 = 64;
      goto LABEL_57;
    }
    if ( v11 == 7 || v11 == 1 && (v10 == 6 || v10 == 2) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v23 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3) + 69136);
      v73 = 65;
      goto LABEL_57;
    }
  }
  else
  {
    v11 = 0;
    v10 = 0;
    v79 = 0;
  }
  v29 = W32GetUserSessionState(v9, a2, (_DWORD)a3);
  RIMLockExclusive(v29 + 72);
  if ( rimObsCheckForRegistrationConflicts(a8, a5, v11, v10) )
  {
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    v33 = RawInputManagerInputObserverObjectCreate(a4, v34, v35, a4, &Handle);
    KeLeaveCriticalRegion();
    if ( v33 < 0 )
    {
      v31 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v54 = 0;
      }
      v86 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v54 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v55 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v32);
      v74 = 70;
    }
    else
    {
      Object = 0LL;
      v33 = RawInputManagerInputObserverObjectResolveHandle((char *)Handle, v30, a4, &Object);
      if ( v33 >= 0 )
      {
        v36 = (int)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (LOBYTE(v36) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          LOBYTE(v36) = 0;
        }
        v76 = v36;
        v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = (char)Handle;
          v39 = W32GetUserSessionState(v36, v30, v32);
          v37 = Object;
          LOBYTE(v40) = v78;
          LOBYTE(v41) = v76;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v41,
            v40,
            *(_QWORD *)(v39 + 69136),
            4,
            1,
            66,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
            v38,
            Object);
        }
        else
        {
          v37 = Object;
        }
        *((_DWORD *)v37 + 18) = a4;
        *((_QWORD *)v37 + 12) = a1;
        *((_DWORD *)v37 + 26) = a2;
        *((_DWORD *)v37 + 27) = a5;
        *((_DWORD *)v37 + 28) = v11;
        *((_DWORD *)v37 + 29) = v79;
        *((_DWORD *)v37 + 30) = a8;
        v33 = rimConvertUserToKernelEventHandle(a3, (void **)v37 + 10);
        if ( v33 < 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v50 = 0;
          }
          v85 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v51 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v42, v43);
            LOBYTE(v52) = v85;
            LOBYTE(v53) = v50;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v53,
              v52,
              *(_QWORD *)(v51 + 69136),
              3,
              1,
              68,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
        }
        else
        {
          LOBYTE(v42) = 1;
          v33 = rimObsStartStopDeviceRead(v37, v42);
          if ( v33 < 0 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v46 = 0;
            }
            v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v47 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v44, v45);
              LOBYTE(v48) = v84;
              LOBYTE(v49) = v46;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v49,
                v48,
                *(_QWORD *)(v47 + 69136),
                3,
                1,
                67,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                v33);
            }
          }
        }
        ObfDereferenceObject(v37);
        goto LABEL_89;
      }
      v31 = (int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v54 = 0;
      }
      v86 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v54 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v55 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v32);
      v74 = 69;
    }
    LOBYTE(v57) = v86;
    LOBYTE(v56) = v54;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v56,
      v57,
      *(_QWORD *)(v55 + 69136),
      3,
      1,
      v74,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
LABEL_89:
    if ( v33 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v58 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v58 = 0;
        }
        v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v60 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v32);
          LOBYTE(v61) = v59;
          LOBYTE(v62) = v58;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v62,
            v61,
            *(_QWORD *)(v60 + 69136),
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
      RtlWriteULong64ToUser(a9, Handle);
    }
    else
    {
      v31 = (int)a9;
      *a9 = Handle;
    }
    goto LABEL_117;
  }
  v33 = -1073741823;
LABEL_117:
  v63 = W32GetUserSessionState(v31, v30, v32);
  RIMUnlockExclusive(v63 + 72);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v66 = 0;
  }
  v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v68 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v64, v65);
    LOBYTE(v69) = v67;
    LOBYTE(v70) = v66;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v70,
      v69,
      *(_QWORD *)(v68 + 69136),
      4,
      1,
      73,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v33);
  }
  return (unsigned int)v33;
}
