/*
 * XREFs of ??4?$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z @ 0x140199F1C
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgpRemoteSessionOcclusionEvent<_KEVENT *>::operator=(int a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v3 = *a2;
  *(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 68432) = v3;
  return W32GetUserSessionState(v5, v4, v6) + 68432;
}
