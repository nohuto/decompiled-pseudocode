/*
 * XREFs of ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180008A14 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x18000B35C (-EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180025564 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029908 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x18002DD10 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180031978 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180032EE0 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x180044CC0 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB60 (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800DBF48 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001BE20 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CContainerVisual::InsertChildBefore(CContainerVisual *this, CBaseObject ***a2, CBaseObject ***a3)
{
  return VisualCollection::InsertRelative((CContainerVisual *)((char *)this + 136), a2, a3, 0);
}
