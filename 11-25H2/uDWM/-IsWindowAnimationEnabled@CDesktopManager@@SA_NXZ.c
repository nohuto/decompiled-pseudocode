/*
 * XREFs of ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18000438C (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800288E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180037BD4 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180038250 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x180038880 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x1800388F0 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180038C1C (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180039944 (-EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180039B18 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180087058 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008DEB4 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800E2FDC (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800E7E60 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char CDesktopManager::IsWindowAnimationEnabled(void)
{
  char result; // al
  __int64 v1; // rdx

  result = 0;
  if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33) )
  {
    v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    if ( v1 )
    {
      if ( *(_BYTE *)(v1 + 120) )
      {
        if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
          return 1;
      }
    }
  }
  return result;
}
