/*
 * XREFs of ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1401D9640
 * Callers:
 *     <none>
 * Callees:
 *     WmsgpDisconnect @ 0x1402D3B38 (WmsgpDisconnect.c)
 */

void __fastcall CleanupWinlogonRpcHandleWorker(PVOID StartContext, int a2, int a3)
{
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  struct _EX_RUNDOWN_REF *v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d

  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState((_DWORD)StartContext, a2, a3);
  ExWaitForRundownProtectionRelease(UserSessionState + 8640);
  v7 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v5, v4, v6);
  ExRundownCompleted(v7 + 8640);
  v11 = W32GetUserSessionState(v9, v8, v10);
  WmsgpDisconnect((RPC_BINDING_HANDLE *)(v11 + 69112));
  *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 69112) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v16, v15, v17) + 69128) = 1;
}
