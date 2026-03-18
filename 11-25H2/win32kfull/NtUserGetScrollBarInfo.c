/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1401B8D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxGetScrollBarInfo @ 0x14025E4F4 (xxxGetScrollBarInfo.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___ @ 0x140292578 (W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_lq @ 0x1402A4938 (WPP_RECORDER_AND_TRACE_SF_lq.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, unsigned int a2, ULONG64 a3)
{
  __int64 v6; // rbx
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // r12
  bool v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  struct _KPROCESS **v26; // rcx
  struct _KPROCESS *v27; // rbx
  int ScrollBarInfo; // eax
  __int64 v29; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int v34; // [rsp+90h] [rbp-98h]
  __int128 *v35; // [rsp+98h] [rbp-90h]
  __int128 v36; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-68h]
  __int128 v38; // [rsp+D0h] [rbp-58h]
  __int64 v39; // [rsp+E0h] [rbp-48h]
  int v40; // [rsp+E8h] [rbp-40h]

  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0;
  v6 = EnterCrit(0LL, 0LL);
  v7 = 1;
  v8 = ValidateReceivingHwnd(a1, 1LL);
  v10 = v8;
  if ( v8 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v6, v8);
    if ( a2 == -4 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v12);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69160),
          2,
          9,
          16,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          -4);
      }
    }
    else
    {
      if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
        || (v18 = *(__int64 **)(*(_QWORD *)(v10 + 16) + 464LL), v19 = *v18, PsGetCurrentProcess(v18) != v19) )
      {
        v24 = -PsGetCurrentProcessWow64Process(v17, v12);
        BugCheckParameter3[3] = (-(__int64)(v24 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
        v25 = (_BYTE *)a3;
        if ( ((v24 != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a3 >= MmUserProbeAddress )
          v25 = (_BYTE *)MmUserProbeAddress;
        *v25 = *v25;
        v25[59] = v25[59];
        LODWORD(v36) = *(_DWORD *)a3;
        if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
          || (v26 = *(struct _KPROCESS ***)(*(_QWORD *)(v10 + 16) + 464LL),
              v27 = *v26,
              (struct _KPROCESS *)PsGetCurrentProcess(v26) == v27) )
        {
          ScrollBarInfo = xxxGetScrollBarInfo(v10, a2, &v36);
        }
        else
        {
          BugCheckParameter3[4] = v10;
          v34 = a2;
          v35 = &v36;
          ScrollBarInfo = W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1_(v27);
        }
        v11 = ScrollBarInfo;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v29);
        if ( (unsigned __int8)ShouldVirtualizeWindowRect(v10, CurrentThreadDpiAwarenessContext) )
          TransformRectBetweenCoordinateSpaces((char *)&v36 + 4, (char *)&v36 + 4, 0LL, v10);
        if ( v11 )
        {
          *(_OWORD *)a3 = v36;
          *(_OWORD *)(a3 + 16) = v37;
          *(_OWORD *)(a3 + 32) = v38;
          *(_QWORD *)(a3 + 48) = v39;
          *(_DWORD *)(a3 + 56) = v40;
        }
        goto LABEL_12;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v7 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v12);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v7;
        WPP_RECORDER_AND_TRACE_SF_lq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v23,
          v22,
          *(_QWORD *)(v21 + 69160));
      }
    }
    v11 = 0;
LABEL_12:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
    goto LABEL_34;
  }
  v11 = 0;
LABEL_34:
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
