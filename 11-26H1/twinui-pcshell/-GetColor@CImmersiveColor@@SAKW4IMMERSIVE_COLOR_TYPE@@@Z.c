/*
 * XREFs of ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18016DB4C
 * Callers:
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x18016D968 (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 *     ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x18016DB14 (-IsLightTheme@CImmersiveColor@@SA_NXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1802BB6F8 (-GetColor@GhostDivider@@AEAAKXZ.c)
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C0F44 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x1804C110C (-_UpdateBorder@CSwitchItemElement@@IEAAXXZ.c)
 *     _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x1804C9704 (_lambda_5e9c18940e8e88d162ff7728dae26002_--operator().c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804C9BE8 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x1804CBA94 (-s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NP.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CE168 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804CF914 (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D3594 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D35EC (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804D8E68 (-RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaski.c)
 *     ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x180531048 (-PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18053C678 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 *     ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805471A0 (-RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveColor::GetColor(unsigned int a1)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  GetUserColorPreference(&v3, 0LL);
  return GetColorFromPreference(&v3, a1, 0LL, 1LL);
}
