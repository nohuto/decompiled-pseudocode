/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x140127104
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     IPostQuitMessage @ 0x1401C7DC4 (IPostQuitMessage.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void __fastcall TerminateDesktopThreads(__int64 a1, __int64 a2)
{
  ULONG v2; // r15d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rdx
  char v14; // bl
  bool v15; // di
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  char v20; // bl
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  void *v25; // rcx
  __int64 v26; // rdx
  char v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // bl
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // r14
  char v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  NTSTATUS v43; // ebx
  __int64 v44; // rdx
  char v45; // bl
  bool v46; // di
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rdx
  char v51; // bl
  bool v52; // di
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  char v56; // bl
  bool v57; // di
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  char v61; // bl
  bool v62; // di
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  char v66; // bl
  bool v67; // di
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF
  char v72; // [rsp+90h] [rbp+8h] BYREF
  __int16 v73; // [rsp+98h] [rbp+10h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+18h] BYREF

  *(_OWORD *)Object = 0LL;
  v2 = 0;
  v73 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3256) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(*(CTouchProcessor **)(UserSessionState + 3256));
  }
  v6 = W32GetUserSessionState(v4, v3) + 68464;
  v9 = W32GetUserSessionState(v8, v7);
  v11 = *(void **)(v6 + 64);
  v12 = v9 + 68536;
  if ( v11 )
  {
    Object[0] = *(PVOID *)(v6 + 64);
    ObfReferenceObject(v11);
    v2 = 1;
    if ( *(_QWORD *)(v6 + 56) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v18,
          v17,
          *(_QWORD *)(v16 + 69160),
          4,
          20,
          10,
          (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
      }
      *(_DWORD *)v6 |= 8u;
      KeSetEvent(*(PRKEVENT *)(v6 + 56), 1, 0);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v20 = 0;
      }
      v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v23,
          *(_QWORD *)(v22 + 69160),
          4,
          20,
          11,
          (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
      }
      IPostQuitMessage(*(_QWORD *)(v6 + 16), 0LL);
      LOBYTE(v73) = 1;
    }
    HYDRA_HINT(0x80000LL, v19);
  }
  else if ( *(_QWORD *)(v6 + 8) )
  {
    HMAssignmentUnlock(v6 + 8);
  }
  v25 = *(void **)(v12 + 64);
  if ( !v25 )
    goto LABEL_41;
  Object[1] = *(PVOID *)(v12 + 64);
  ObfReferenceObject(v25);
  ++v2;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v27 = 0;
  }
  v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v27;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v31,
      v30,
      *(_QWORD *)(v29 + 69160),
      4,
      20,
      12,
      (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
  }
  if ( *(_QWORD *)(v12 + 56) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v32 = 0;
    }
    v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v36,
        v35,
        *(_QWORD *)(v34 + 69160),
        4,
        20,
        13,
        (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
    }
    *(_DWORD *)v12 |= 8u;
    KeSetEvent(*(PRKEVENT *)(v12 + 56), 1, 0);
LABEL_41:
    v37 = HIBYTE(v73);
    goto LABEL_42;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v61 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v61 = 0;
  }
  v62 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v61 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
    LOBYTE(v64) = v62;
    LOBYTE(v65) = v61;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v65,
      v64,
      *(_QWORD *)(v63 + 69160),
      4,
      20,
      14,
      (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
  }
  IPostQuitMessage(*(_QWORD *)(v12 + 16), 0LL);
  v37 = 1;
LABEL_42:
  if ( v2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || (v38 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v38 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v42,
        v41,
        *(_QWORD *)(v40 + 69160),
        4,
        20,
        15,
        (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
    }
    Timeout.QuadPart = -100000000LL;
    while ( 1 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v72, 1);
      v43 = KeWaitForMultipleObjects(v2, Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v72);
      if ( v43 != 258 )
        break;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v45 = 0;
      }
      v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v45;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v49,
          v48,
          *(_QWORD *)(v47 + 69160),
          2,
          20,
          16,
          (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
      }
      HYDRA_HINT(0x800000LL, v44);
      if ( (_BYTE)v73 == 1 && *(_QWORD *)(v6 + 16) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v51 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
        {
          v51 = 0;
        }
        v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50);
          LOBYTE(v54) = v52;
          LOBYTE(v55) = v51;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v55,
            v54,
            *(_QWORD *)(v53 + 69160),
            2,
            20,
            17,
            (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
        }
        IPostQuitMessage(*(_QWORD *)(v6 + 16), 0LL);
      }
      if ( v37 == 1 && *(_QWORD *)(v12 + 16) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v56 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
        {
          v56 = 0;
        }
        v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v58 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v50);
          LOBYTE(v59) = v57;
          LOBYTE(v60) = v56;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v60,
            v59,
            *(_QWORD *)(v58 + 69160),
            2,
            20,
            18,
            (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
        }
        IPostQuitMessage(*(_QWORD *)(v12 + 16), 0LL);
      }
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || (v66 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v66 = 0;
    }
    v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v66 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v68 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
      LOBYTE(v69) = v67;
      LOBYTE(v70) = v66;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v70,
        v69,
        *(_QWORD *)(v68 + 69160),
        4,
        20,
        19,
        (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
    }
    ObfDereferenceObject(Object[0]);
    if ( v2 > 1 )
      ObfDereferenceObject(Object[1]);
  }
  HYDRA_HINT(2048LL, v10);
}
