/*
 * XREFs of ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870
 * Callers:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180019094 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x18002165C (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x1800236A8 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180029EEC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002A330 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x18006711C (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180067938 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180067B30 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180068DD8 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180069F10 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18007061C (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18007C47C (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007E59C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081770 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180089CB8 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x18009C614 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A20B0 (-StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A22F0 (-StartWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800A50CC (-_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCaptur.c)
 *     ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A531C (-_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A55EC (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5A08 (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5FD8 (-_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureC.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800A60F8 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A6558 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800DF8DC (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x1800E14F0 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800E1630 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800E22C0 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E3560 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x1800E3B60 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x1800E43F8 (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E4478 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::GetSyncedWindowDataByHwnd(CWindowList *this, HWND a2, struct CWindowData **a3)
{
  struct IDwmWindow *v5; // rax

  *a3 = 0LL;
  if ( a2 )
  {
    v5 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 8)
                                                                + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 8));
    if ( v5 )
      CWindowList::GetSyncedWindowData(this, v5, 0, a3);
  }
}
