/*
 * XREFs of ??0CBaseObject@@QEAA@XZ @ 0x180021380
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x1800212F0 (--0CVisual@@IEAA@XZ.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180023144 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180029EEC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x1800361C0 (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     ??0CWindowIconic@@IEAA@XZ @ 0x180038600 (--0CWindowIconic@@IEAA@XZ.c)
 *     ??0CImmersiveState@@AEAA@XZ @ 0x18003C89C (--0CImmersiveState@@AEAA@XZ.c)
 *     ??0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z @ 0x18003D1D0 (--0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x18003FC6C (--0CAnimationClock@@QEAA@XZ.c)
 *     ??0CCompositor@@IEAA@XZ @ 0x180058CE8 (--0CCompositor@@IEAA@XZ.c)
 *     ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18006B34C (--0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x18006B5A8 (--0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18006D874 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180071F78 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180074B28 (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 *     ??0CTimer@@QEAA@XZ @ 0x1800751C0 (--0CTimer@@QEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18007BCE0 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x180089588 (--0CSecondaryWindowRepresentation@@IEAA@XZ.c)
 *     ??0CPrimitive@@IEAA@XZ @ 0x18008A0E4 (--0CPrimitive@@IEAA@XZ.c)
 *     ??0CGraphicsDeviceManager@@IEAA@_N@Z @ 0x18008A634 (--0CGraphicsDeviceManager@@IEAA@_N@Z.c)
 *     ??0CDesktopThumbnailCVI@@IEAA@XZ @ 0x18008AFC8 (--0CDesktopThumbnailCVI@@IEAA@XZ.c)
 *     ??0CWindowSnapshot@@IEAA@XZ @ 0x18008BE20 (--0CWindowSnapshot@@IEAA@XZ.c)
 *     ??0CAccentTransition@@QEAA@XZ @ 0x180094FEC (--0CAccentTransition@@QEAA@XZ.c)
 *     ??0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z @ 0x18009544C (--0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z.c)
 *     ??0CBitmapSource@@IEAA@PEAUIWICBitmapSource@@AEBUtagSIZE@@@Z @ 0x18009A66C (--0CBitmapSource@@IEAA@PEAUIWICBitmapSource@@AEBUtagSIZE@@@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18009C1D0 (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800B9D58 (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z.c)
 *     ?Create@CColorPrimitive@@SAJPEAPEAV1@@Z @ 0x1800BCCC0 (-Create@CColorPrimitive@@SAJPEAPEAV1@@Z.c)
 *     ??0CProjectedShadowScene@@QEAA@XZ @ 0x1800BDBE4 (--0CProjectedShadowScene@@QEAA@XZ.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800BDC24 (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     ??0CThumbnailTransition@@QEAA@XZ @ 0x1800C8FFC (--0CThumbnailTransition@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBaseObject *__fastcall CBaseObject::CBaseObject(CBaseObject *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CBaseObject::`vftable';
  return this;
}
