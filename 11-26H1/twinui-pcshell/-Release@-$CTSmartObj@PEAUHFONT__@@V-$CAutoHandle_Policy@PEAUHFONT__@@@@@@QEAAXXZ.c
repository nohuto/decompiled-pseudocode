/*
 * XREFs of ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x1801FEA3C
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801EC918 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 *     ??1?$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ @ 0x1801FEA30 (--1-$CAutoHandle@PEAUHFONT__@@@@QEAA@XZ.c)
 *     ??1JointDivider@@UEAA@XZ @ 0x1802C20A0 (--1JointDivider@@UEAA@XZ.c)
 *     _lambda_2332646ee2da4bd34a0bd6e9819a3d8e_::operator() @ 0x1802C6B44 (_lambda_2332646ee2da4bd34a0bd6e9819a3d8e_--operator().c)
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x1802C7BF0 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 *     _lambda_6825ce5d1ace0209a4941c0102e86eff_::operator() @ 0x18049EA10 (_lambda_6825ce5d1ace0209a4941c0102e86eff_--operator().c)
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x180530950 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x180530C94 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ??1TrayBitmapForVDThumbnailData@@QEAA@XZ @ 0x18055CB50 (--1TrayBitmapForVDThumbnailData@@QEAA@XZ.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18067DC48 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     s_DrawGlyph @ 0x180685920 (s_DrawGlyph.c)
 *     s_DrawThemeTextPPIAware @ 0x180685C1C (s_DrawThemeTextPPIAware.c)
 *     s_OnMeasureItem @ 0x180686DB0 (s_OnMeasureItem.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$0 @ 0x1806DD5F9 (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::_DetermineSnapAssistLocation_::_1_::dtor$1 @ 0x1806DD60B (_CSnapAssistControllerBase--_DetermineSnapAssistLocation_--_1_--dtor$1.c)
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
