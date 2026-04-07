/*
 * XREFs of ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180048CA8
 * Callers:
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUD2D_POINTANDSIZE_F@@@Z @ 0x180047344 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUD2D_POINTANDSIZE_F@@@Z.c)
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180047834 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180062510 (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CB5C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

const struct CDesktopManager::WindowAnimationSettings *CDesktopManager::GetWindowAnimationSettings(void)
{
  return (CDesktopManager *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1168);
}
