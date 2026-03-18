/*
 * XREFs of AutoRotationUpdateRegistry @ 0x140273560
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AutoRotationUpdateRegistry(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66072) + 32LL))(*(_QWORD *)(UserSessionState + 66072));
}
