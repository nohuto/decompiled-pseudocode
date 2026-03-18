/*
 * XREFs of _UnregisterUserApiHook @ 0x140287370
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1402A2F00 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1400C8E18 (RemoveHmodDependency.c)
 */

__int64 __fastcall UnregisterUserApiHook(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
  {
    v6 = -*(_QWORD *)CurrentProcessWin32Process;
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v5;
  }
  if ( CurrentProcessWin32Process == *(_QWORD *)(UserSessionState + 64208) )
  {
    *(_QWORD *)(UserSessionState + 64208) = 0LL;
    if ( *(int *)(W32GetUserSessionState(v6, v5) + 64216) >= 0 )
    {
      v10 = W32GetUserSessionState(v9, v8);
      RemoveHmodDependency(*(_DWORD *)(v10 + 64216));
      *(_DWORD *)(W32GetUserSessionState(v12, v11) + 64216) = -1;
      v15 = W32GetUserSessionState(v14, v13);
      RemoveHmodDependency(*(_DWORD *)(v15 + 64740));
      *(_DWORD *)(W32GetUserSessionState(v17, v16) + 64740) = -1;
    }
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v9, v8) + 19872), 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
