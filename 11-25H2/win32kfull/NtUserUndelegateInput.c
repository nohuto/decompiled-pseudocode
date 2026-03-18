/*
 * XREFs of NtUserUndelegateInput @ 0x140137840
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x140137BD0 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  int v11; // ecx

  EnterCrit(0LL, 0LL);
  v4 = ValidateReceivingHwnd(a1, 1LL);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 260) && a2 - 1 <= 1 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      v9 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) == v9 )
      {
        _HandleDelegatedInput(*(_QWORD *)(v7 + 264), a2, 0LL);
        CleanupInputDelegation(v7);
        v6 = 1LL;
        goto LABEL_8;
      }
      v11 = 5;
    }
    else
    {
      v11 = 87;
    }
    UserSetLastError(v11);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
