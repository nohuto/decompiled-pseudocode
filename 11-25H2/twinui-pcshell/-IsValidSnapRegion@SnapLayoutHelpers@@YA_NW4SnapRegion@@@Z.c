/*
 * XREFs of ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1800D9658
 * Callers:
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002A100 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetCorrectedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x18023DD90 (-GetCorrectedFramePosition@CSnappedWindow@@UEBA-AUCRect@Geometry@@XZ.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x180584EA0 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058D210 (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1800D996C (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

char __fastcall SnapLayoutHelpers::IsValidSnapRegion(SnapLayoutHelpers *a1)
{
  unsigned int v1; // ebx
  bool v2; // al
  char v3; // dl
  int v5; // eax

  v1 = (unsigned int)a1;
  v2 = SnapLayoutHelpers::AreQuadrantsEnabled(a1);
  v3 = 0;
  if ( v2 )
  {
    if ( !v1 || v1 == 11 )
      return v3;
    return 1;
  }
  if ( v1 > 0xB )
    return 1;
  v5 = 2219;
  if ( !_bittest(&v5, v1) )
    return 1;
  return v3;
}
