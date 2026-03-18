/*
 * XREFs of ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x140156B70
 * Callers:
 *     ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1401A1E0C (-vReleaseDwmHitTestWaiters@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rbx
  LONG v4; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = UserSessionState;
  v4 = *(_DWORD *)(UserSessionState + 18816);
  if ( v4 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(UserSessionState + 18808), 0, v4, 0);
    *(_DWORD *)(v3 + 18816) = 0;
  }
}
