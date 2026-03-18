/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x140212460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 UserSessionState; // rax
  void *v10; // rax

  EnterCrit(0LL, 0LL);
  v2 = ValidateReceivingHwnd(a1, 1LL);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v3 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v8 = v7 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL) == v8 )
    {
      UserSessionState = W32GetUserSessionState(v3, v7);
      v10 = (void *)InternalRemoveProp(v5, *(unsigned __int16 *)(UserSessionState + 41352), 1u);
      if ( v10 )
      {
        Win32FreePool(v10);
        v4 = 1LL;
      }
      else
      {
        UserSetLastError(87);
      }
    }
    else
    {
      v4 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
