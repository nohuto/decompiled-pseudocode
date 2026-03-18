/*
 * XREFs of ?RotationLockCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140299F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RotationLockCallback(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66064) + 64LL))(*(_QWORD *)(UserSessionState + 66064));
  return 0LL;
}
