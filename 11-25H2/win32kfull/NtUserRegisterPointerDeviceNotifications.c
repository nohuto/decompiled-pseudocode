/*
 * XREFs of NtUserRegisterPointerDeviceNotifications @ 0x1401EB670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _RegisterPointerDeviceNotifications @ 0x1401EB79C (_RegisterPointerDeviceNotifications.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterPointerDeviceNotifications(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct tagTHREADINFO *v12; // rax
  const struct tagUIPI_INFO *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  _DWORD v17[4]; // [rsp+20h] [rbp-28h] BYREF

  v17[1] = -1;
  v17[0] = 0x2000;
  v17[2] = 0;
  EnterCrit(0LL, 0LL);
  v4 = ValidateReceivingHwnd(a1, 1LL);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v5 = -*(_QWORD *)CurrentProcessWin32Process;
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v10 = v9 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) == v10 )
    {
      if ( !a2
        || (v12 = PtiCurrent(v5, v9),
            UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(*((_QWORD *)v12 + 58) + 864LL),
              (const struct tagUIPI_INFO *)v17,
              v13)) )
      {
        v6 = RegisterPointerDeviceNotifications(v7, a2);
      }
      else
      {
        v16 = PtiCurrent(v15, v14);
        EtwTraceUIPISystemError(*((_QWORD *)v16 + 58), 0LL, 9LL);
        UserSetLastError(5);
      }
    }
    else
    {
      v6 = 5;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
