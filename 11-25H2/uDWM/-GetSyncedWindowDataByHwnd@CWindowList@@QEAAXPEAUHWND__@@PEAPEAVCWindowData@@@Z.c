/*
 * XREFs of ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180029A54 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x1800658CC (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x180085148 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008EFE4 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18008F2B0 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800924C0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x180092BA8 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180092DD0 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180092E60 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180092EDC (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180097564 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A9454 (-UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800BDD80 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800C3F00 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C4090 (-_GetHostWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800C413C (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800C4204 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C4668 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C473C (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4914 (-_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAV.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800C4A2C (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4D20 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800E2C98 (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x1800E2F44 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x1800E56A4 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800E57F0 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800E59B8 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x1800E62E8 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x1800E6AF0 (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E6E20 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E7430 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x1800E7750 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x1800E8150 (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E81D0 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
