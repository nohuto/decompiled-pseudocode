/*
 * XREFs of GetOemBitmapInfo @ 0x140192A04
 * Callers:
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x140041D3C (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401920B4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x140192318 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     NtUserBitBltSysBmp @ 0x140192600 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140192F6C (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     NtUserGetOemBitmapSize @ 0x1402984D0 (NtUserGetOemBitmapSize.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1402EA96C (MNDrawArrow.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x140192A28 (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall GetOemBitmapInfo(unsigned int a1)
{
  unsigned int DpiForSystem; // eax

  DpiForSystem = GetDpiForSystem();
  return GetOemBitmapInfoForDpi(a1, DpiForSystem);
}
