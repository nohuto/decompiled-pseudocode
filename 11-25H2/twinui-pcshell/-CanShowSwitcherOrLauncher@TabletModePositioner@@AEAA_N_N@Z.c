/*
 * XREFs of ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x1804F4CE0
 * Callers:
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1804F90F4 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x1804F9138 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801D39FC (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x1804F7AF8 (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1804F7C28 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 */

char __fastcall TabletModePositioner::CanShowSwitcherOrLauncher(TabletModePositioner *this, char a2)
{
  __int64 v4; // rcx
  char v5; // bl

  v5 = 0;
  if ( TabletModePositioner::IsTabletMode(this)
    && !*(_QWORD *)(v4 + 288)
    && !GetSystemMetrics(0x2000)
    && (a2 || !(unsigned __int8)TabletModePositioner::IsSwitcherVisible(this, 31LL))
    && !TabletModePositioner::IsFullScreenViewVisible(this) )
  {
    return 1;
  }
  return v5;
}
