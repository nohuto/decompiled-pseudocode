/*
 * XREFs of NtUserSetShellWindowEx @ 0x14024E320
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401CC8EC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetShellWindow @ 0x14025E314 (xxxSetShellWindow.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline @ 0x14027A1DC (Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C20D0 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetShellWindowEx(__int64 a1, HWND a2)
{
  int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  const struct tagUIPI_INFO *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR v27[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-20h] BYREF

  v28[1] = -1;
  v28[0] = 0x2000;
  v4 = 0;
  BugCheckParameter3[0] = 0LL;
  v28[2] = 0;
  v5 = 0LL;
  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (((*(_WORD *)(v8 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v6, v7, v27);
      if ( !(unsigned int)((__int64 (*)(void))Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline)() )
      {
        LOBYTE(v11) = ValidateHWNDND(a2, (struct tagWND **)BugCheckParameter3);
        if ( !v11 )
        {
LABEL_18:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v27, v12);
          goto LABEL_19;
        }
        v5 = BugCheckParameter3[0];
      }
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v10);
      if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
        goto LABEL_17;
      v15 = PsGetCurrentProcessWin32Process(v14);
      if ( v15 )
        v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
      if ( !UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(v15 + 864),
              (const struct tagUIPI_INFO *)v28,
              v16) )
        goto LABEL_17;
      v18 = PsGetCurrentProcessWin32Process(v17);
      v20 = v18;
      if ( v18 )
      {
        v19 = -*(_QWORD *)v18;
        v20 = -(__int64)(*(_QWORD *)v18 != 0LL) & v18;
      }
      if ( *(_QWORD *)(*((_QWORD *)v9 + 2) + 464LL) == v20 )
      {
        if ( (unsigned int)Feature_SetShellWindow__private_IsEnabledDeviceUsageNoInline(v19) )
        {
          UserSessionState = W32GetUserSessionState(v22, v21);
          LOBYTE(BugCheckParameter3[0]) = 0;
          BugCheckParameter3[1] = 0LL;
          ++*(_DWORD *)(UserSessionState + 70600);
          AtomicExecutionCheck::Arm((AtomicExecutionCheck *)BugCheckParameter3);
          v4 = RegisterShell(v9);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)BugCheckParameter3);
          zzzEndDeferWinEventNotify();
        }
        else
        {
          Win32HM_LockIntoThread<0>(v6, v5, BugCheckParameter3);
          v4 = xxxSetShellWindow(v9);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v24);
        }
      }
      else
      {
LABEL_17:
        UserSetLastError(5);
      }
      goto LABEL_18;
    }
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
