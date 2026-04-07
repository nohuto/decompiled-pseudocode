/*
 * XREFs of ??0CBaseObject@@QEAA@XZ @ 0x1800088E4
 * Callers:
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800046F0 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ??0CBitmapSource@@IEAA@XZ @ 0x180007D14 (--0CBitmapSource@@IEAA@XZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18000872C (--0CVisual@@IEAA@XZ.c)
 *     ??0CResource@@IEAA@XZ @ 0x180008894 (--0CResource@@IEAA@XZ.c)
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18000E520 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x180015438 (--0CRenderDataInstruction@@QEAA@XZ.c)
 *     ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x18001E540 (--0CSecondaryWindowRepresentation@@IEAA@XZ.c)
 *     ??0CImmersiveState@@AEAA@XZ @ 0x1800253D0 (--0CImmersiveState@@AEAA@XZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180027618 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x18003543C (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18004958C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ??0CTimer@@QEAA@XZ @ 0x18004E8B0 (--0CTimer@@QEAA@XZ.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x180050B30 (--0CAnimationClock@@QEAA@XZ.c)
 *     ??0CWindowIconic@@IEAA@XZ @ 0x180054868 (--0CWindowIconic@@IEAA@XZ.c)
 *     ??0CWindowSnapshot@@IEAA@XZ @ 0x18005528C (--0CWindowSnapshot@@IEAA@XZ.c)
 *     ??0CCompositor@@IEAA@XZ @ 0x180068B4C (--0CCompositor@@IEAA@XZ.c)
 *     ??0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z @ 0x18006E150 (--0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z.c)
 *     ??0CDesktopThumbnailCVI@@IEAA@XZ @ 0x18006F818 (--0CDesktopThumbnailCVI@@IEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180075CF8 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18007DA70 (--0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z.c)
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180084194 (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z @ 0x1800854C4 (-Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x1800883B4 (--0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18008F2B0 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ??0CAccentTransition@@QEAA@XZ @ 0x1800A09CC (--0CAccentTransition@@QEAA@XZ.c)
 *     ??0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z @ 0x1800A0E18 (--0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z.c)
 *     ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800A900C (-Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x1800ABE5C (--0CDesktopManager@@AEAA@XZ.c)
 *     ??0CHolographicSlate@@AEAA@XZ @ 0x1800B69D0 (--0CHolographicSlate@@AEAA@XZ.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800BA48C (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z.c)
 *     ??0CProjectedShadowScene@@QEAA@XZ @ 0x1800BD0F4 (--0CProjectedShadowScene@@QEAA@XZ.c)
 *     ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800BD134 (--0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ.c)
 *     ??0CThumbnailTransition@@QEAA@XZ @ 0x1800CEF40 (--0CThumbnailTransition@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBaseObject *__fastcall CBaseObject::CBaseObject(CBaseObject *this)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CBaseObject::`vftable';
  return this;
}
