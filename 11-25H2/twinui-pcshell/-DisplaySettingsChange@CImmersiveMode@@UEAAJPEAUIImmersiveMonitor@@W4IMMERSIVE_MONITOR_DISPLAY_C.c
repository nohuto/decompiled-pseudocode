/*
 * XREFs of ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18017D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18017DFA8 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ @ 0x18017E434 (-MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18017E4B4 (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveMode::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  __int64 v5; // rax
  CImmersiveMode *v6; // rcx
  unsigned __int64 i; // rbx
  int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x20) != 0 )
  {
    v5 = *(_QWORD *)a2;
    v9 = 0;
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(v5 + 48))(a2, &v9) >= 0 )
    {
      v6 = (CImmersiveMode *)(a1 - 136);
      if ( v9 )
        CImmersiveMode::_RegisterDesktopVisibilitySource(v6, a2);
      else
        CImmersiveMode::_UnregisterDesktopVisibilitySource(v6, a2);
    }
  }
  else if ( (a3 & 1) != 0 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 288); ++i )
    {
      if ( SHIsSameObject(**(struct IUnknown ***)(*(_QWORD *)(a1 + 280) + 8 * i), (struct IUnknown *)a2) )
      {
        CImmersiveMode::CDesktopVisibilityChangeSource::MonitorRectChanged(*(CImmersiveMode::CDesktopVisibilityChangeSource **)(*(_QWORD *)(a1 + 280) + 8 * i));
        return 0LL;
      }
    }
  }
  return 0LL;
}
