/*
 * XREFs of ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1401C5BEC
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x140193F20 (-ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 */

void __fastcall vReleaseDwmHitTestWaiters(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 18816) )
  {
    *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 18776) = 0;
    EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(v7, v6, v8);
    *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 18816) = 1;
  }
}
