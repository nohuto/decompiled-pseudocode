/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1401CB7E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     SetDisplayAffinity @ 0x1401CB8D8 (SetDisplayAffinity.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // ecx
  __int64 DesktopWindow; // rax
  struct tagWND *v14; // rcx
  __int64 v15; // rdx

  EnterCrit(0LL, 0LL);
  v4 = ValidateReceivingHwnd(a1, 1LL);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) == v9 )
    {
      v10 = *(_QWORD *)(v7 + 104);
      if ( v10 && (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 1360LL) & 0x40000) != 0 )
        v7 = *(_QWORD *)(v7 + 104);
      if ( *(_QWORD *)(v7 + 104)
        && (DesktopWindow = GetDesktopWindow(v7), v15 == DesktopWindow)
        && (!a2 || (a2 & 0x11) != 0) )
      {
        if ( (unsigned int)SetDisplayAffinity(v14) )
        {
          v6 = 1LL;
          goto LABEL_11;
        }
        v11 = 8;
      }
      else
      {
        v11 = 87;
      }
    }
    else
    {
      v11 = 5;
    }
    UserSetLastError(v11);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
