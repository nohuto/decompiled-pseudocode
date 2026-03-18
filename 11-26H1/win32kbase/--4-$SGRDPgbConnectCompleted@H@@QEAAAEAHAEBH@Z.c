/*
 * XREFs of ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x1401C4690
 * Callers:
 *     SetConnectedState @ 0x14007F120 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x140186370 (SetConnectCompletedState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbConnectCompleted<int>::operator=(int a1, int *a2, int a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v3 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 68752) = v3;
  return W32GetUserSessionState(v5, v4, v6) + 68752;
}
