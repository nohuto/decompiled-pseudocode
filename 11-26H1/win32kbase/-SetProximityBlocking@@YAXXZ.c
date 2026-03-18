/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1401D5974
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall SetProximityBlocking(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !*(_DWORD *)(UserSessionState + 2772) )
  {
    ++*(_DWORD *)(UserSessionState + 584);
    *(_QWORD *)(UserSessionState + 576) = -1LL;
    *(_DWORD *)(UserSessionState + 2772) = 1;
  }
}
