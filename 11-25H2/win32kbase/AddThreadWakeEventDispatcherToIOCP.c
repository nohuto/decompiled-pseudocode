/*
 * XREFs of AddThreadWakeEventDispatcherToIOCP @ 0x14014F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x14014F700 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 */

void __fastcall AddThreadWakeEventDispatcherToIOCP(__int64 a1, __int64 a2)
{
  IOCPDispatcher *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v2 = *(IOCPDispatcher **)(W32GetUserSessionState(a1, a2) + 19216);
  UserSessionState = W32GetUserSessionState(v4, v3);
  IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
    v2,
    *(void **)(UserSessionState + 18736),
    (void (*)(void *))lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_,
    0LL);
}
