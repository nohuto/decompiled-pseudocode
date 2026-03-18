/*
 * XREFs of GreGetTextExtentW @ 0x1400C0134
 * Callers:
 *     xxxPSMGetTextExtent @ 0x14002B2D0 (xxxPSMGetTextExtent.c)
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1400C1310 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x1400C29A4 (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401920B4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B7660 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402EA7B8 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1402EE394 (xxxPSMTextOut.c)
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, __m128i *a2, __int64 a3, struct tagSIZE *a4)
{
  unsigned int v5; // esi
  __int64 SessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int TextExtentW; // ebx
  _BYTE v15[48]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v16[10]; // [rsp+60h] [rbp-58h] BYREF

  v5 = a3;
  SessionState = W32GetSessionState(a1, a2, a3);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v15,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v12 = v16[0];
  TextExtentW = 0;
  if ( v16[0] )
  {
    if ( *(_WORD *)(v16[0] + 12LL) != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
      v12 = v16[0];
      if ( *(_WORD *)(v16[0] + 12LL) != 1 )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v16);
        v12 = 0LL;
        v16[0] = 0LL;
      }
    }
    if ( v12 )
      TextExtentW = GrepGetTextExtentW((struct UDCOBJ *)v16, a2, v5, a4, 1u, 1024);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v15);
  return TextExtentW;
}
