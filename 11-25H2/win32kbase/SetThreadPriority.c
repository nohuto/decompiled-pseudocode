/*
 * XREFs of SetThreadPriority @ 0x140216C40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x1402239A0 (-SetThreadPriority@CInputThreadBase@@QEAAXXZ.c)
 */

void __fastcall SetThreadPriority(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CInputThreadBase::SetThreadPriority(*(CInputThreadBase **)(UserSessionState + 18752));
}
