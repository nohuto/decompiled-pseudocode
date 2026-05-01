/*
 * XREFs of ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x18020F5A0
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801F9AD0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 *     ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x180233C80 (--1-$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ.c)
 *     ??1JointDivider@@UEAA@XZ @ 0x1802CA8CC (--1JointDivider@@UEAA@XZ.c)
 *     _lambda_2332646ee2da4bd34a0bd6e9819a3d8e_::operator() @ 0x1802CF910 (_lambda_2332646ee2da4bd34a0bd6e9819a3d8e_--operator().c)
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x1802D0AA0 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 *     _lambda_6825ce5d1ace0209a4941c0102e86eff_::operator() @ 0x18048DDA8 (_lambda_6825ce5d1ace0209a4941c0102e86eff_--operator().c)
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x18050E300 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x18050E634 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ??1TrayBitmapForVDThumbnailData@@QEAA@XZ @ 0x180538D48 (--1TrayBitmapForVDThumbnailData@@QEAA@XZ.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x180657BE0 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     s_DrawGlyph @ 0x18065F850 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x18065FB48 (s_DrawThemeTextPPIAware.c)
 *     s_OnMeasureItem @ 0x180660D14 (s_OnMeasureItem.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$0 @ 0x1806B636A (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$1 @ 0x1806B637C (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = DeleteObject(v1);
  return (int)v1;
}
