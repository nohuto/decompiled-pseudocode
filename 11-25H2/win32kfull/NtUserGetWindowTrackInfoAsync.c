/*
 * XREFs of NtUserGetWindowTrackInfoAsync @ 0x140299A90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140029D80 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x14014BCD0 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1402DEF14 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserGetWindowTrackInfoAsync(__int64 a1)
{
  const struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  _BOOL8 WidnowTrackInfoAsync; // rdi
  struct tagWND *v6; // rsi
  const struct tagTHREADINFO *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  WidnowTrackInfoAsync = 0LL;
  v6 = (struct tagWND *)v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>((__int64)v2, v3, BugCheckParameter3);
    v7 = (const struct tagTHREADINFO *)*((_QWORD *)v6 + 2);
    LOBYTE(v8) = IAMThreadAccessGranted(v2);
    if ( !v8
      || v2 == v7
      || IsThreadHung(v7, v9)
      || !ShellWindowManagement::WindowSubjectToBehavior((__int64)v6, 0x40u, 1, 1) )
    {
      UserSetLastError(5);
    }
    else
    {
      WidnowTrackInfoAsync = BeginGetWidnowTrackInfoAsync(v6);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
  }
  UserSessionSwitchLeaveCrit(v4);
  return WidnowTrackInfoAsync;
}
