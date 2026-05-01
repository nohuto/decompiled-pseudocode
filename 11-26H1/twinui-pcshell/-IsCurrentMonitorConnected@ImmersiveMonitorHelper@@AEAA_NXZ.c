/*
 * XREFs of ?IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x180211D1C
 * Callers:
 *     ?HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022A9E4 (-HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IM.c)
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18045E348 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ImmersiveMonitorHelper::IsCurrentMonitorConnected(ImmersiveMonitorHelper *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 8);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
    return v4 != 0;
  }
  return v2;
}
