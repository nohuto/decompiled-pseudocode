/*
 * XREFs of ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858
 * Callers:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180027A84 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z.c)
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x1800429C0 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180042A30 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180042BD4 (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x180042E78 (-EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180044E80 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x180044ED0 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180045CD8 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18007CF3C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800DFA18 (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1810 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800E4260 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
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
