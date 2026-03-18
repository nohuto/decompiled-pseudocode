/*
 * XREFs of NtUserApplyWindowAction @ 0x1402945A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsAppModelFeatureEnabled@@YA_NK@Z @ 0x140274150 (-IsAppModelFeatureEnabled@@YA_NK@Z.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CBD34 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserApplyWindowAction(WindowActions *this, void *Src)
{
  const struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  struct _WINDOW_ACTION *v6; // r8
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rdx
  bool v12; // si
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  char v18; // si
  char v19; // r12
  __int64 v20; // rdx
  WindowActions *v21; // r14
  bool v22; // bl
  int v23; // edx
  __int64 v24; // r9
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // r15
  __int64 v29; // rbx
  char v30; // r15
  __int64 v31; // rdx
  bool v32; // bl
  int v33; // edx
  int v34; // r8d
  __int64 v35; // r9
  int v36; // r12d
  struct tagWND *v37; // rdx
  struct _WINDOW_ACTION *v38; // r9
  unsigned int v39; // ebx
  __int64 v40; // rdx
  struct tagWND *v41; // rdx
  __int16 v43; // [rsp+30h] [rbp-148h]
  __int16 v44; // [rsp+30h] [rbp-148h]
  char v45; // [rsp+40h] [rbp-138h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-120h] BYREF
  char v47; // [rsp+60h] [rbp-118h]
  _OWORD v48[6]; // [rsp+78h] [rbp-100h] BYREF
  struct HWND__ v49[4]; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-88h]
  __int128 v51; // [rsp+100h] [rbp-78h]
  __int128 v52; // [rsp+110h] [rbp-68h]
  __int128 v53; // [rsp+120h] [rbp-58h]
  __int128 v54; // [rsp+130h] [rbp-48h]

  v4 = (const struct tagTHREADINFO *)EnterCrit(0LL, 0LL);
  memset_0(v49, 0, 0x60uLL);
  memset_0(v48, 0, sizeof(v48));
  RtlCopyFromUser(v48, Src, 0x60uLL);
  *(_OWORD *)&v49[0].unused = v48[0];
  v50 = v48[1];
  v51 = v48[2];
  v52 = v48[3];
  v53 = v48[4];
  v54 = v48[5];
  v7 = 0;
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) != 2 )
    {
      v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v11);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69160),
          3,
          4,
          99,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
      }
      v10 = 5023;
      goto LABEL_4;
    }
    LOBYTE(v17) = IAMThreadAccessGranted(v4);
    if ( v17 )
    {
      v18 = 1;
      v19 = 1;
      CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)&BugCheckParameter3);
      v21 = (WindowActions *)ValidateHwnd(this);
      if ( v47 )
        *(_BYTE *)(BugCheckParameter3 + 1708) = 1;
    }
    else
    {
      v19 = 0;
      v21 = (WindowActions *)ValidateHwnd(this);
      v18 = 1;
    }
    if ( !v21 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v18 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v24 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20) + 69160);
      v45 = (char)this;
      v43 = 100;
      LOBYTE(v25) = v22;
LABEL_28:
      LOBYTE(v23) = v18;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v23,
        v25,
        v24,
        3,
        4,
        v43,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
        v45);
LABEL_29:
      v10 = 87;
      goto LABEL_4;
    }
    if ( !IsTopLevelWindow((__int64)v21) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v18 = 0;
      }
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v29 = *(_QWORD *)v21;
      v24 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26) + 69160);
      v45 = v29;
      v43 = 101;
      LOBYTE(v25) = v28;
      goto LABEL_28;
    }
    if ( *((const struct tagTHREADINFO **)v21 + 2) == v4 )
    {
      v30 = 1;
      if ( !IsAppModelFeatureEnabled(v27) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v18 = 0;
        }
        v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_48;
        v35 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v31) + 69160);
        v44 = 102;
LABEL_47:
        LOBYTE(v34) = v32;
        LOBYTE(v33) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v33,
          v34,
          v35,
          3,
          4,
          v44,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
LABEL_48:
        v10 = 5;
        goto LABEL_4;
      }
    }
    else
    {
      v30 = 0;
      if ( !v19 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v18 = 0;
        }
        v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v18 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_48;
        v35 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26) + 69160);
        v44 = 103;
        goto LABEL_47;
      }
    }
    v36 = v49[0].unused & 0x400;
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(&BugCheckParameter3, (__int64)v4, (__int64)v21);
    LOBYTE(v37) = v30;
    v39 = WindowActions::xxxApplyActionOld(v21, v37, (bool)v49, v38);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&BugCheckParameter3, v40);
    if ( v39 )
    {
      if ( !v36 && (v49[0].unused & 0x400) != 0 )
        WindowActions::RemoveLastSystemOperationData(v21, v41);
      v10 = v39;
      goto LABEL_4;
    }
LABEL_5:
    v7 = 1;
    goto LABEL_62;
  }
  v8 = WindowActions::xxxApplyAction(this, v49, v6);
  if ( !v8 )
    goto LABEL_5;
  v10 = v8;
LABEL_4:
  UserSetLastError(v10);
LABEL_62:
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
