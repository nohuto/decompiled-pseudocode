/*
 * XREFs of ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474
 * Callers:
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18000744C (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18002FCAC (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?EnsureThemeStatics@CWindowIconic@@SAJXZ @ 0x180031ED4 (-EnsureThemeStatics@CWindowIconic@@SAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180032090 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180032130 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800332F0 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180047834 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180093928 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18009670C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B9340 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BC49C (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC870 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800CE850 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::GetTheme(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 69);
  v1 = a1 - 1;
  if ( !v1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 136);
  v2 = v1 - 1;
  if ( !v2 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 137);
  v3 = v2 - 1;
  if ( !v3 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 138);
  if ( v3 == 1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139);
  return 0LL;
}
