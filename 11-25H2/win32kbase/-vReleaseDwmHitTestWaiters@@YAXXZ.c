/*
 * XREFs of ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1401A1E0C
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x140156B70 (-ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 */

void __fastcall vReleaseDwmHitTestWaiters(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 18768) )
  {
    *(_DWORD *)(W32GetUserSessionState(v3, v2) + 18728) = 0;
    EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(v5, v4);
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 18768) = 1;
  }
}
