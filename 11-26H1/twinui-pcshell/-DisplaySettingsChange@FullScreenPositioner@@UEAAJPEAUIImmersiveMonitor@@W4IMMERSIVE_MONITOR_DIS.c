/*
 * XREFs of ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801E0260
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180320B80 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FullScreenPositioner::DisplaySettingsChange(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 196) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    v6 = 0;
    if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 96LL))(v3, a2, &v6) >= 0 )
    {
      if ( v6 )
      {
        v4 = *(_QWORD *)(a1 + 96);
        if ( v4 )
          FullScreenPositioner::PositionView(a1 - 128, v4, 0LL);
      }
    }
  }
  return 0LL;
}
