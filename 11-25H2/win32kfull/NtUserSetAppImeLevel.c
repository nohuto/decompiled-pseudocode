/*
 * XREFs of NtUserSetAppImeLevel @ 0x14029DEE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetAppImeLevel(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD *v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 UserSessionState; // rax

  v2 = a2;
  EnterCrit(0LL, 0LL);
  v4 = ValidateReceivingHwnd(a1, 1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    v9 = *(_DWORD **)(W32GetUserSessionState(v6, v5) + 19872);
    if ( (*v9 & 4) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      v12 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v6 = -*(_QWORD *)CurrentProcessWin32Process;
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v12 = v11 & CurrentProcessWin32Process;
      }
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 464LL) == v12 )
      {
        UserSessionState = W32GetUserSessionState(v6, v11);
        InternalSetProp(v8, *(unsigned __int16 *)(UserSessionState + 41344), v2, 5u);
        v7 = 1LL;
      }
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
