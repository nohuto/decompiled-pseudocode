/*
 * XREFs of ?InternalAddRef@?$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEBAXXZ @ 0x18021C2C8
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x1802A3810 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x1804C23D4 (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804C28A0 (-s_WndProcBase@-$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 *     ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x18050CE68 (--$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPE.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VTabletModeInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x18050D480 (-s_WndProcBase@-$CWRLImpWndProc@VTabletModeInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GhostDivider>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 12), a2);
  return result;
}
