/*
 * XREFs of ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x1401A0ED8
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgptmrWD<_KTIMER *>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 68944) = v2;
  return W32GetUserSessionState(v4, v3) + 68944;
}
