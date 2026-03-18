/*
 * XREFs of ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x140193F20
 * Callers:
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1401C5BEC (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  LONG v5; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = UserSessionState;
  v5 = *(_DWORD *)(UserSessionState + 18864);
  if ( v5 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(UserSessionState + 18856), 0, v5, 0);
    *(_DWORD *)(v4 + 18864) = 0;
  }
}
