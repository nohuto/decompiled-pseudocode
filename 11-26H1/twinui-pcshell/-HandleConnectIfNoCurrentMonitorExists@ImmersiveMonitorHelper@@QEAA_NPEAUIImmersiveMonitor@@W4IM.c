/*
 * XREFs of ?HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022A9E4
 * Callers:
 *     s_HandleConnectIfNoCurrentMonitorExists @ 0x18045E500 (s_HandleConnectIfNoCurrentMonitorExists.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x180211D1C (-IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18045E4C0 (-MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ImmersiveMonitorHelper::HandleConnectIfNoCurrentMonitorExists(
        ImmersiveMonitorHelper *a1,
        struct IImmersiveMonitor *a2,
        char a3)
{
  __int64 v6; // rax
  char v7; // bl
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x20) == 0 )
    return 0;
  v6 = *(_QWORD *)a2;
  v7 = 0;
  v11 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(v6 + 48))(a2, &v11);
  if ( v8 >= 0 )
  {
    if ( v11 && !ImmersiveMonitorHelper::IsCurrentMonitorConnected(a1) )
    {
      v9 = ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding(a1, a2);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x18B,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
          (const char *)(unsigned int)v9);
      return 1;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x189,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v8);
  }
  return v7;
}
