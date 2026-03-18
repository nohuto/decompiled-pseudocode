/*
 * XREFs of NtUserGetTitleBarInfo @ 0x14024A5F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14004B5EC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v21[3]; // [rsp+68h] [rbp-50h] BYREF

  memset(v21, 0, 44);
  v4 = 1;
  v5 = EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  if ( v6 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v5, v6);
    v11 = -PsGetCurrentProcessWow64Process(v10, v9);
    v14 = (_BYTE *)a2;
    if ( ((v11 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[43] = v14[43];
    LODWORD(v21[0]) = *(_DWORD *)a2;
    if ( LODWORD(v21[0]) == 44 )
    {
      memset((char *)&v21[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo(v8, (struct tagTITLEBARINFO *)v21, v12, v13);
    }
    else
    {
      UserSetLastError(87);
      v4 = 0;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)v21 + 4, (char *)v21 + 4, 0LL, v8);
    if ( v4 )
    {
      *(_OWORD *)a2 = v21[0];
      *(_OWORD *)(a2 + 16) = v21[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v21[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v21[2]);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v17);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
