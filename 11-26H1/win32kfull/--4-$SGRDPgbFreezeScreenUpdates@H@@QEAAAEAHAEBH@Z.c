/*
 * XREFs of ??4?$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z @ 0x1402965F8
 * Callers:
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbFreezeScreenUpdates<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68852) = v2;
  return W32GetUserSessionState(v4, v3) + 68852;
}
