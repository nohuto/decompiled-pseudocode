/*
 * XREFs of GreSelectFont @ 0x140054D30
 * Callers:
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14003DB8C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 *     ValidateExternalLogFont @ 0x1400C02C0 (ValidateExternalLogFont.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1401479A8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 *     _ServerFixupMenuDC @ 0x14015522C (_ServerFixupMenuDC.c)
 *     MNAllocMenuState @ 0x14015BF08 (MNAllocMenuState.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     FinalUserInit @ 0x14021974C (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x140219B14 (MNSetupAnimationDC.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B7660 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SelectFont @ 0x1402EC9B0 (SelectFont.c)
 * Callees:
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140054DF0 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

HFONT __fastcall GreSelectFont(HDC a1, HFONT a2)
{
  HFONT v3; // rbx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0LL;
  if ( v5[0] )
    v3 = GrepSelectFont((struct XDCOBJ *)v5, a2, 1);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
