/*
 * XREFs of ?DisplaySettingsChange@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180224E60
 * Callers:
 *     <none>
 * Callees:
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180200004 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFallbackWindow::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  __int64 v4; // rax
  HWND *v5; // rdi
  __int64 v6; // rdx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 1) != 0 )
  {
    v4 = *(_QWORD *)a2;
    v5 = (HWND *)(a1 - 80);
    v6 = *(_QWORD *)(a1 - 80 + 120);
    v8 = 0;
    if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int64, int *))(v4 + 96))(a2, v6, &v8) >= 0 )
    {
      if ( v8 )
        CFallbackWindow::_SizeWindow(v5, a2);
    }
  }
  return 0LL;
}
