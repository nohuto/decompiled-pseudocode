/*
 * XREFs of ??4?$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z @ 0x1401B30A0
 * Callers:
 *     ?CheckInitialSessions@@YAJXZ @ 0x140153818 (-CheckInitialSessions@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbFirstInteractiveSession<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68620) = v2;
  return W32GetUserSessionState(v4, v3) + 68620;
}
