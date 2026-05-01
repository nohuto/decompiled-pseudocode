/*
 * XREFs of ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1800D973C
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800560EC (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x1800BBFA0 (-GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1.c)
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x1800D9378 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1800D9698 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x1800DA680 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1800DB2D8 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1800DBD18 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180108F20 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18023AE30 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x180581648 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805846D0 (-TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIS.c)
 *     ?GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180588234 (-GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV-$vect.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x180588654 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 *     ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x180588B1C (-GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@.c)
 *     ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x18058A69C (-DetermineCurrentSnapState@HotkeyHandler@@AEBA-AW4SnapAction@1@PEAUISnappedWindow@@@Z.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x18058A9C4 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z @ 0x18058C298 (-IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(
        SnapRectHelpers *this,
        struct IImmersiveMonitor *a2)
{
  __int64 v2; // rax
  int nNumerator; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  nNumerator = 0;
  if ( (*(int (__fastcall **)(SnapRectHelpers *, int *, int *))(v2 + 112))(this, &nNumerator, &nNumerator) < 0 )
    return 5;
  else
    return MulDiv(5, nNumerator, 96);
}
