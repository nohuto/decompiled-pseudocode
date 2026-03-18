/*
 * XREFs of NtUserShellHandwritingUndelegateInput @ 0x140136D10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401371DC (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 */

__int64 __fastcall NtUserShellHandwritingUndelegateInput(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( !a1 )
    goto LABEL_2;
  v7 = PtiFromThreadId(a1);
  v9 = v7;
  if ( !v7 || (*(_QWORD *)(v7 + 1360) & 0x2000000000LL) == 0 || a2 - 1 > 1 )
    goto LABEL_2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_QWORD *)(v9 + 464) == CurrentProcessWin32Process )
  {
    _HandleShellHandwritingDelegatedInput(v9, a2, 0LL);
    CleanupShellHandwritingInputDelegation(v9);
    v4 = 1LL;
  }
  else
  {
LABEL_2:
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
