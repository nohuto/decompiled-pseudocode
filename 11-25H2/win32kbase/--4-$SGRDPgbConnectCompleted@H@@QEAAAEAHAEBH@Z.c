/*
 * XREFs of ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x1401A0FBC
 * Callers:
 *     SetConnectedState @ 0x140150BE0 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x140150C60 (SetConnectCompletedState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbConnectCompleted<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68760) = v2;
  return W32GetUserSessionState(v4, v3) + 68760;
}
