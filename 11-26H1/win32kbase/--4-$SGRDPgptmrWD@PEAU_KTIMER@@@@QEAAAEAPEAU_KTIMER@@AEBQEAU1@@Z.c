/*
 * XREFs of ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x1401C4624
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgptmrWD<_KTIMER *>::operator=(int a1, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v3 = *a2;
  *(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 68936) = v3;
  return W32GetUserSessionState(v5, v4, v6) + 68936;
}
