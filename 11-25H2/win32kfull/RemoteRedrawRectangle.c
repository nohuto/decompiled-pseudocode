/*
 * XREFs of RemoteRedrawRectangle @ 0x1402AF088
 * Callers:
 *     NtUserRemoteRedrawRectangle @ 0x14029D400 (NtUserRemoteRedrawRectangle.c)
 *     CtxDisplayIOCtl @ 0x1402B87FC (CtxDisplayIOCtl.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     vDrvInvalidateRect @ 0x14033FE20 (vDrvInvalidateRect.c)
 */

__int64 __fastcall RemoteRedrawRectangle(__int64 a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rdx
  struct tagWND *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      12,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  result = W32GetUserSessionState(a1, v2);
  if ( !*(_QWORD *)(result + 19152) )
  {
    result = GetThreadDesktopWindow(0LL, v9);
    v10 = (struct tagWND *)result;
    if ( result )
    {
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, result);
      v13 = W32GetUserSessionState(v12, v11);
      vDrvInvalidateRect(*(_QWORD *)(*(_QWORD *)(v13 + 56968) + 48LL), a1);
      xxxRedrawWindow(v10, a1, 0LL, 645);
      return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v14);
    }
  }
  return result;
}
