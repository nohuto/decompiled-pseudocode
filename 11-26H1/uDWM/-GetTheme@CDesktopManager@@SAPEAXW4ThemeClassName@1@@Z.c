/*
 * XREFs of ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198
 * Callers:
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800036B0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180004F74 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800502E0 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x180083220 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180085558 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAXXZ @ 0x1800A8950 (-ForceAtlasInitialize@CContactManager@@QEAAXXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8250 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800BBD38 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800BC110 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800C8620 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?LoadThemeBorderParameters@CThumbnailVisual@@AEAAJXZ @ 0x1800C9DA4 (-LoadThemeBorderParameters@CThumbnailVisual@@AEAAJXZ.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::GetTheme(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 70);
  v1 = a1 - 1;
  if ( !v1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 137);
  v2 = v1 - 1;
  if ( !v2 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 138);
  v3 = v2 - 1;
  if ( !v3 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139);
  if ( v3 == 1 )
    return *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 140);
  return 0LL;
}
