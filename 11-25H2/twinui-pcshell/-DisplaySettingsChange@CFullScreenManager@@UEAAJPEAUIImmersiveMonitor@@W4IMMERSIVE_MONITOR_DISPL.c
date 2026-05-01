/*
 * XREFs of ?DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180227B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180205A44 (-_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFullScreenManager::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 80) && (a3 & 0x20) != 0 )
  {
    v5 = *(_QWORD *)a2;
    v10 = 0;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(v5 + 48))(a2, &v10);
    if ( v6 < 0 )
    {
      v7 = 371LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    if ( !v10 )
    {
      v6 = CFullScreenManager::_EvictAppsOnMonitor((IUnknown **)(a1 - 120), a2);
      if ( v6 < 0 )
      {
        v7 = 374LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
