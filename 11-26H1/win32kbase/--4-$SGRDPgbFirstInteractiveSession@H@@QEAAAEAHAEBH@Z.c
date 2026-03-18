/*
 * XREFs of ??4?$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z @ 0x140196754
 * Callers:
 *     ?CheckInitialSessions@@YAJXZ @ 0x140165D48 (-CheckInitialSessions@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbFirstInteractiveSession<int>::operator=(int a1, int *a2, int a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v3 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 68612) = v3;
  return W32GetUserSessionState(v5, v4, v6) + 68612;
}
