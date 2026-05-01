/*
 * XREFs of ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1800D996C
 * Callers:
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1800D9658 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x1800D978C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1800D978C.c)
 *     ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_N@Z @ 0x1801949D4 (-GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA-AU-$pair@W4SnapRegion@@UCRect@Geom.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x18058A8B4 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x1800D8754 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 */

bool __fastcall SnapLayoutHelpers::AreQuadrantsEnabled(SnapLayoutHelpers *this, enum _TABLETMODESTATE *a2)
{
  int TabletMode; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( byte_18089A278 )
    return 0;
  v5 = 0;
  TabletMode = TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v5, a2);
  if ( TabletMode >= 0 )
    return v5 != 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x81,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)TabletMode);
  return 1;
}
