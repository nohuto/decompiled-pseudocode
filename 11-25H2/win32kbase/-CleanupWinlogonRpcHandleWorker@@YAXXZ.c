/*
 * XREFs of ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1401B6A90
 * Callers:
 *     <none>
 * Callees:
 *     WmsgpDisconnect @ 0x1402CA6D8 (WmsgpDisconnect.c)
 */

void __fastcall CleanupWinlogonRpcHandleWorker(PVOID StartContext, __int64 a2)
{
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _EX_RUNDOWN_REF *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(StartContext, a2);
  ExWaitForRundownProtectionRelease(UserSessionState + 8641);
  v5 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v4, v3);
  ExRundownCompleted(v5 + 8641);
  v8 = W32GetUserSessionState(v7, v6);
  WmsgpDisconnect((RPC_BINDING_HANDLE *)(v8 + 69120));
  *(_QWORD *)(W32GetUserSessionState(v10, v9) + 69120) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v12, v11) + 69136) = 1;
}
