/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x14002A900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ParkIcon @ 0x1401EA1E8 (ParkIcon.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v12; // rdx
  __int64 UserSessionState; // rax
  unsigned int *Prop; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // edx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF

  v20 = 0LL;
  v4 = 1;
  v5 = EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = v6;
  if ( v6 && (((*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v5, v6);
    if ( a2 )
    {
      if ( (unsigned __int8)IsTrayWindow(v7, 1LL) )
      {
        v4 = xxxSendMinRectMessages(v7, &v20);
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        Prop = (unsigned int *)GetProp(v7, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
        if ( Prop && (Prop[4] & 0x10) != 0 )
        {
          v16 = *Prop;
          *(_QWORD *)&v20 = *(_QWORD *)Prop;
        }
        else
        {
          ParkIcon(v7, &v20);
        }
        v17 = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 19872) + 2124LL);
        DWORD2(v20) = v17 + v20;
        v18 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState((unsigned int)(v17 + v20), v17) + 19872) + 2128LL);
        HIDWORD(v20) = v18 + DWORD1(v20);
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
        TransformRectBetweenCoordinateSpaces(&v20, &v20, 0LL, v7);
      if ( v4 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v20;
      }
    }
    else
    {
      v4 = 0;
      UserSetLastError(87);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
