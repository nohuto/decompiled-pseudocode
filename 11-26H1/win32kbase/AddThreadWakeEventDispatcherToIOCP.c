/*
 * XREFs of AddThreadWakeEventDispatcherToIOCP @ 0x14011FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x14011FCC0 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 */

void __fastcall AddThreadWakeEventDispatcherToIOCP(int a1, int a2, int a3)
{
  IOCPDispatcher *v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax

  v3 = *(IOCPDispatcher **)(W32GetUserSessionState(a1, a2, a3) + 19248);
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
    v3,
    *(void **)(UserSessionState + 18784),
    lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_,
    0LL);
}
