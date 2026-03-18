/*
 * XREFs of NtUserEnterMoveSizeLoop @ 0x140296290
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A7A30 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA1EC (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 */

__int64 __fastcall NtUserEnterMoveSizeLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  char v19; // di
  bool v20; // r14
  int v21; // ebx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r15
  int v28; // r12d
  char v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rdx
  char v40; // bl
  bool v41; // di
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char v45; // bl
  bool v46; // di
  __int64 UserSessionState; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwndStrict(a1);
  v9 = 0LL;
  v10 = v7;
  if ( v7 )
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    if ( a3 - 1 > 8 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v45 = 0;
      }
      v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v45;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v49,
          v48,
          *(_QWORD *)(UserSessionState + 69160),
          3,
          1,
          106,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          a3);
      }
      goto LABEL_56;
    }
    if ( !IsTopLevelWindow(v10) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(v15 + 69160),
          3,
          1,
          107,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          a1);
      }
LABEL_56:
      v25 = 87;
      goto LABEL_57;
    }
    v18 = *(_QWORD *)(v10 + 16);
    if ( *(_QWORD *)(v18 + 464) != *(_QWORD *)(v6 + 464) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v19 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 332LL);
        v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v23) = v20;
        LOBYTE(v24) = v19;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v23,
          *(_QWORD *)(v22 + 69160),
          3,
          1,
          108,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          a1,
          v21);
      }
LABEL_19:
      v25 = 5;
LABEL_57:
      UserSetLastError(v25);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v50);
      goto LABEL_58;
    }
    v27 = W32GetCurrentThreadDpiAwarenessContext(v18) & 0xF;
    v28 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF;
    if ( (_DWORD)v27 != v28 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v33,
          v32,
          *(_QWORD *)(v31 + 69160),
          3,
          1,
          109,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          v27,
          v28);
      }
      goto LABEL_19;
    }
    if ( *(_QWORD *)(v6 + 712) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
      {
        v34 = 0;
      }
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v38,
          v37,
          *(_QWORD *)(v36 + 69160),
          3,
          1,
          110,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
      }
      v25 = 5023;
      goto LABEL_57;
    }
    if ( *(_QWORD *)(v10 + 16) == v6 )
    {
      MoveSizeApi::xxxEnterMoveSizeLoopOnThread(v6, v10, a2, a3);
    }
    else if ( !(unsigned __int8)MoveSizeApi::PostAsyncMoveSize(v6, v10, a2, a3) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v40 = 0;
      }
      v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v39);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v40;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v44,
          v43,
          *(_QWORD *)(v42 + 69160),
          2,
          1,
          111,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
      }
      v25 = 14;
      goto LABEL_57;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v39);
    v9 = 1LL;
  }
LABEL_58:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
