/*
 * XREFs of ??4?$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z @ 0x14029AFC0
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbFirstConnectionDone<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68600) = v2;
  return W32GetUserSessionState(v4, v3) + 68600;
}
