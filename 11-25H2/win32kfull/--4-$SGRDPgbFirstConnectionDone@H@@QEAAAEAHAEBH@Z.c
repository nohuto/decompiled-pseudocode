/*
 * XREFs of ??4?$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z @ 0x1402756B0
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbFirstConnectionDone<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68608) = v2;
  return W32GetUserSessionState(v4, v3) + 68608;
}
