/*
 * XREFs of ?SetProximityBlocking@@YAXXZ @ 0x1401B05AC
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall SetProximityBlocking(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(UserSessionState + 2776) )
  {
    *(_QWORD *)(UserSessionState + 576) = -1LL;
    ++*(_DWORD *)(UserSessionState + 584);
    *(_DWORD *)(UserSessionState + 2776) = 1;
  }
}
