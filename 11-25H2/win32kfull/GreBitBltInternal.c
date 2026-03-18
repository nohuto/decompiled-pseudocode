/*
 * XREFs of GreBitBltInternal @ 0x140084DC8
 * Callers:
 *     xxxClientExtTextOutW @ 0x14002A440 (xxxClientExtTextOutW.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 *     xxxCompositedPaint @ 0x14004FBD4 (xxxCompositedPaint.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     _DrawIconEx @ 0x140056464 (_DrawIconEx.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140057650 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x14007B1BC (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     xxxClientLpkDrawTextEx @ 0x1400C1458 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140156C38 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x140191F60 (BltColor.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x140192318 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     NtUserBitBltSysBmp @ 0x140192600 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     UpdateSpriteArea @ 0x1401DB604 (UpdateSpriteArea.c)
 *     StopFade @ 0x1401F4CB0 (StopFade.c)
 *     RecolorDeskPattern @ 0x14020BC30 (RecolorDeskPattern.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140267AFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     RestoreSpb @ 0x1402B0E30 (RestoreSpb.c)
 *     xxxClientPSMTextOut @ 0x1402BE1C0 (xxxClientPSMTextOut.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DF124 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 */

__int64 __fastcall GreBitBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11)
{
  unsigned int v14; // ebx
  _QWORD v16[14]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v17[128]; // [rsp+D0h] [rbp-88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v17, a6, (struct XDCOBJ *)v16);
  v14 = 0;
  if ( v16[0] )
    v14 = GrepBitBltImpl((struct XDCOBJ *)v16, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v17, a7, a8, a9, a10, a11);
  else
    EngSetLastError(6u);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v14;
}
