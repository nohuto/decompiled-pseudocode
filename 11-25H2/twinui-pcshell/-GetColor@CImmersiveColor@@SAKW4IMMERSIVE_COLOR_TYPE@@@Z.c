/*
 * XREFs of ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180158B8C
 * Callers:
 *     ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x1801589A8 (-DrawGrabber@GhostDivider@@AEAAXXZ.c)
 *     ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x180158B54 (-IsLightTheme@CImmersiveColor@@SA_NXZ.c)
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1802C4740 (-GetColor@GhostDivider@@AEAAKXZ.c)
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804AF33C (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x1804AF514 (-_UpdateBorder@CSwitchItemElement@@IEAAXXZ.c)
 *     _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x1804B7944 (_lambda_5e9c18940e8e88d162ff7728dae26002_--operator().c)
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804B7DB8 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x1804B9BD4 (-s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NP.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804BC2E8 (-RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geo.c)
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804BDA6C (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804C15F0 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804C1644 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C6DD8 (-RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaski.c)
 *     ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x18050E9CC (-PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180519928 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 *     ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180524170 (-RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DET.c)
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
