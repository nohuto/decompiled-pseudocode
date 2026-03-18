/*
 * XREFs of GreCreateCompatibleBitmapEx @ 0x14007C0C0
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140054630 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x14007B1BC (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     RecolorDeskPattern @ 0x14020BC30 (RecolorDeskPattern.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x140269E2C (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B3CB4 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     MNCreateAnimationBitmap @ 0x1402B593C (MNCreateAnimationBitmap.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DF124 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140332868 (-GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x14007D1C4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall GreCreateCompatibleBitmapEx(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct _LUID *a5,
        unsigned __int16 *a6)
{
  HBITMAP CompatibleBitmap; // rbx
  _BYTE v11[128]; // [rsp+30h] [rbp-88h] BYREF

  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v11, a1);
  CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v11, a2, a3, a4, a5, a6);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v11);
  return CompatibleBitmap;
}
