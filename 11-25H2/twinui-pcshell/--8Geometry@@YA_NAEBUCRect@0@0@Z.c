/*
 * XREFs of ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8
 * Callers:
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18008D2F0 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?GetInternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x18030F4E0 (-GetInternalWindowAlignmentWithRect@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Ap.c)
 *     ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804AA378 (-_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804B16F0 (-SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@P.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804B983C (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     ?FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z @ 0x1804CAFA0 (-FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z.c)
 *     ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804D03FC (-IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x1804D1C78 (-s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@.c)
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804D3650 (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804D383C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 *     ?v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804D4230 (-v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1804F7D50 (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1804FC564 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 *     ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18050D9D0 (-DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180519928 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x1805217E4 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 *     ?UpdateBoundingRect@CDragVisualAcc@@UEAAXXZ @ 0x180527820 (-UpdateBoundingRect@CDragVisualAcc@@UEAAXXZ.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x18058C6F0 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x180592E30 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 *     ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x180596100 (-IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@w.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x18069FD94 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Geometry::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
