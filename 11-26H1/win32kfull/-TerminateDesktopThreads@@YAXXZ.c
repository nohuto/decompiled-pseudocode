/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x140139558
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IPostQuitMessage @ 0x140054E7C (IPostQuitMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
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
  __int64 v20; // rcx
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rax
  void *v27; // rcx
  char v28; // bl
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // bl
  bool v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // r14
  struct MOVESIZEDATA *v39; // rcx
  char v40; // bl
  bool v41; // di
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char v45; // bl
  __int64 v46; // rax
  __int64 v47; // rcx
  NTSTATUS v48; // edi
  __int64 v49; // rdx
  struct MOVESIZEDATA *v50; // rcx
  char v51; // bl
  bool v52; // di
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rax
  char v57; // bl
  bool v58; // di
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  char v62; // bl
  bool v63; // di
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  char v67; // bl
  bool v68; // di
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  char v72; // bl
  bool v73; // di
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rax
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF
  char v79; // [rsp+90h] [rbp+8h]
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp+10h] BYREF

  *(_OWORD *)Object = 0LL;
  v2 = 0;
  v79 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3256) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(*(CTouchProcessor **)(UserSessionState + 3256));
  }
  v6 = W32GetUserSessionState(v4, v3) + 68456;
  v9 = W32GetUserSessionState(v8, v7);
  v11 = *(void **)(v6 + 64);
  v12 = v9 + 68528;
  if ( v11 )
  {
    Object[0] = *(PVOID *)(v6 + 64);
    ObfReferenceObject(v11);
    v2 = 1;
    if ( *(_QWORD *)(v6 + 56) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 69152),
          4,
          20,
          10,
          (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
      }
      *(_DWORD *)v6 |= 8u;
      KeSetEvent(*(PRKEVENT *)(v6 + 56), 1, 0);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v21 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v24) = v22;
        LOBYTE(v25) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69152),
          4,
          20,
          11,
          (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
      }
      IPostQuitMessage(*(_QWORD *)(v6 + 16), 0);
      v79 = 1;
    }
    v26 = W32GetUserSessionState(v20, v19);
    *(_DWORD *)(v26 + 68928) |= 0x80000u;
  }
  else if ( *(_QWORD *)(v6 + 8) )
  {
    HMAssignmentUnlock(v6 + 8);
  }
  v27 = *(void **)(v12 + 64);
  if ( !v27 )
    goto LABEL_41;
  Object[1] = *(PVOID *)(v12 + 64);
  ObfReferenceObject(v27);
  ++v2;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v28 = 0;
  }
  v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v30 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v31) = v29;
    LOBYTE(v32) = v28;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v31,
      *(_QWORD *)(v30 + 69152),
      4,
      20,
      12,
      (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
  }
  if ( *(_QWORD *)(v12 + 56) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69152),
        4,
        20,
        13,
        (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
    }
    *(_DWORD *)v12 |= 8u;
    KeSetEvent(*(PRKEVENT *)(v12 + 56), 1, 0);
LABEL_41:
    v38 = 0;
    goto LABEL_42;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v67 = 0;
  }
  v68 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v67 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v69 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v70) = v68;
    LOBYTE(v71) = v67;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v71,
      v70,
      *(_QWORD *)(v69 + 69152),
      4,
      20,
      14,
      (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
  }
  IPostQuitMessage(*(_QWORD *)(v12 + 16), 0);
  v38 = 1;
LABEL_42:
  if ( v2 )
  {
    v39 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v40 = 0;
    }
    v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(v42 + 69152),
        4,
        20,
        15,
        (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
    }
    Timeout.QuadPart = -100000000LL;
    while ( 1 )
    {
      v45 = 0;
      v46 = W32GetUserSessionState(v39, v10);
      if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v46 + 16)) == 1 )
      {
        v45 = 1;
        LeaveMitRitHazardCrit();
      }
      UserSessionSwitchLeaveCrit(v47);
      v48 = KeWaitForMultipleObjects(v2, Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL);
      EnterCrit(1LL, 0LL);
      if ( v45 )
        EnterMitRitHazardCrit();
      if ( v48 != 258 )
        break;
      v50 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v51 = 0;
      }
      v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v51 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v53 = W32GetUserSessionState(WPP_GLOBAL_Control, v49);
        LOBYTE(v54) = v52;
        LOBYTE(v55) = v51;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v55,
          v54,
          *(_QWORD *)(v53 + 69152),
          2,
          20,
          16,
          (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
      }
      v56 = W32GetUserSessionState(v50, v49);
      *(_DWORD *)(v56 + 68928) |= 0x800000u;
      if ( v79 == 1 && *(_QWORD *)(v6 + 16) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v57 = 0;
        }
        v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v57 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v59 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
          LOBYTE(v60) = v58;
          LOBYTE(v61) = v57;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v61,
            v60,
            *(_QWORD *)(v59 + 69152),
            2,
            20,
            17,
            (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
        }
        IPostQuitMessage(*(_QWORD *)(v6 + 16), 0);
      }
      if ( v38 == 1 && *(_QWORD *)(v12 + 16) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v62 = 0;
        }
        v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v62 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v64 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
          LOBYTE(v65) = v63;
          LOBYTE(v66) = v62;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v66,
            v65,
            *(_QWORD *)(v64 + 69152),
            2,
            20,
            18,
            (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
        }
        IPostQuitMessage(*(_QWORD *)(v12 + 16), 0);
      }
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v72 = 0;
    }
    v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v72 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v74 = W32GetUserSessionState(WPP_GLOBAL_Control, v49);
      LOBYTE(v75) = v73;
      LOBYTE(v76) = v72;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v76,
        v75,
        *(_QWORD *)(v74 + 69152),
        4,
        20,
        19,
        (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
    }
    ObfDereferenceObject(Object[0]);
    if ( v2 > 1 )
      ObfDereferenceObject(Object[1]);
  }
  v77 = W32GetUserSessionState(v27, v10);
  *(_DWORD *)(v77 + 68928) |= 0x800u;
}
