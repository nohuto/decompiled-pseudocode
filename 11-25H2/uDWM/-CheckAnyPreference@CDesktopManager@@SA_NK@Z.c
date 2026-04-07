/*
 * XREFs of ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004B350
 * Callers:
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180037BD4 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x180038880 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x1800388F0 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800711B0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180082148 (-AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18008A6DC (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008DEB4 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800AD224 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800E2FDC (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800E7E60 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::CheckAnyPreference(unsigned int a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 9) + 72LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           a1);
}
