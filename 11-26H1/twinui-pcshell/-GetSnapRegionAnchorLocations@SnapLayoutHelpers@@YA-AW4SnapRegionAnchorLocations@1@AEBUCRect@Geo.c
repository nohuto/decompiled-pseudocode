/*
 * XREFs of ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B54D0
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18016BE54 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x18020B4B8 (-HandleMigrationRotation@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4S.c)
 *     ?evaluate@_tip_SnapLauncherTest@@QEAAXXZ @ 0x1805A4A94 (-evaluate@_tip_SnapLauncherTest@@QEAAXXZ.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805A5328 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ?GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AC2AC (-GetOtherQuadrants@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV-$vect.c)
 *     ?DetermineCurrentSnapState@HotkeyHandler@@AEBA?AW4SnapAction@1@PEAUISnappedWindow@@@Z @ 0x1805AE82C (-DetermineCurrentSnapState@HotkeyHandler@@AEBA-AW4SnapAction@1@PEAUISnappedWindow@@@Z.c)
 *     ?IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z @ 0x1805B03E8 (-IsWindowVerticallySnapped@HotkeyHandler@@AEBA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::GetSnapRegionAnchorLocations(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r9d

  v3 = 2 * a3;
  v4 = a3 + a1[1] - a2[1] <= (unsigned int)(2 * a3);
  if ( a3 + a1[3] - a2[3] <= (unsigned int)(2 * a3) )
    v4 |= 4u;
  if ( a3 + *a1 - *a2 <= v3 )
    v4 |= 2u;
  if ( a3 + a1[2] - a2[2] <= v3 )
    v4 |= 8u;
  return v4;
}
