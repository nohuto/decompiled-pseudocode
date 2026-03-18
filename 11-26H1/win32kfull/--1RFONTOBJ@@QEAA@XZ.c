/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x14006E3E4 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     RFONT_vMakeInactive @ 0x14006EFA0 (RFONT_vMakeInactive.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1400C0C28 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400C14FC (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1400C2D54 (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@@.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1400C3EF0 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4010 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D5BD0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     FONTOBJ_cGetGlyphs @ 0x1400D8030 (FONTOBJ_cGetGlyphs.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D9100 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400DBE60 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     vRemoveAllInactiveRFONTs @ 0x1400F45AC (vRemoveAllInactiveRFONTs.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1400F55A4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKPEAUHDEV__@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1400F59E4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntKillList @ 0x1400F60E8 (prfntKillList.c)
 *     UmfdDestroyFont @ 0x1400FC9D0 (UmfdDestroyFont.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1400FD7BC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?GrepGetTextCharsetInfo@@YAHAEAVDCOBJ@@PEAUtagFONTSIGNATURE@@K@Z @ 0x1400FE144 (-GrepGetTextCharsetInfo@@YAHAEAVDCOBJ@@PEAUtagFONTSIGNATURE@@K@Z.c)
 *     vKillEudcRFONTs @ 0x140104B04 (vKillEudcRFONTs.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x140105ED0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x14010C92C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x14010D384 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x14010DF4C (-GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140174824 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z @ 0x1401835D8 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z.c)
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x140183D8C (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14019BA1C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC (-GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1401C1BA4 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 *     ?GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z @ 0x1401C524C (-GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z @ 0x1401D5AD0 (-GrepGetCharABCWidthsW@@YAHAEAVDCOBJ@@IKPEAGKPEAX@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z @ 0x1401DCE60 (-GrepGetKerningPairs@@YAKAEAVDCOBJ@@KPEAUtagKERNINGPAIR@@@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1401E2500 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?GrepGetFontData@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1401ED0AC (-GrepGetFontData@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1401EDAFC (FONTOBJ_AdvanceGlyphCacheBuffer.c)
 *     ?GrepGetUFI@@YAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAX@Z @ 0x1401FEB48 (-GrepGetUFI@@YAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAX@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1401FF3C0 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z @ 0x140206DE8 (-GrepGetFontUnicodeRanges@@YAKAEAVDCOBJ@@PEAUtagGLYPHSET@@@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1402335F0 (FONTOBJ_cGetAllGlyphHandles.c)
 *     ?GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z @ 0x1402366CC (-GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z.c)
 *     FONTOBJ_pifi @ 0x14023A440 (FONTOBJ_pifi.c)
 *     FONTOBJ_vGetInfo @ 0x14023A650 (FONTOBJ_vGetInfo.c)
 *     ?GrepGetCharWidthInfo@@YAHAEAVDCOBJ@@PEAU_CHWIDTHINFO@@@Z @ 0x14024A92C (-GrepGetCharWidthInfo@@YAHAEAVDCOBJ@@PEAU_CHWIDTHINFO@@@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14026BA50 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     NtGdiGetLinkedUFIs @ 0x14027D690 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetWidthTable @ 0x140281520 (NtGdiGetWidthTable.c)
 *     NtGdiQueryFontAssocInfo @ 0x140281810 (NtGdiQueryFontAssocInfo.c)
 *     ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x140288444 (-vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034 (-GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1403206C0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x140320770 (FONTOBJ_pjOpenTypeTablePointer.c)
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1403207C0 (FONTOBJ_pvTrueTypeFontFile.c)
 *     FONTOBJ_pwszFontFilePaths @ 0x140320860 (FONTOBJ_pwszFontFilePaths.c)
 *     vDeactivateEudcRFONTsWorker @ 0x140324C34 (vDeactivateEudcRFONTsWorker.c)
 *     vMakeInactiveHelper @ 0x1403250D4 (vMakeInactiveHelper.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140325130 (-vRestartKillEudcRFONTs@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     vKillRFONTList @ 0x140327774 (vKillRFONTList.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x140327B10 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1403281E0 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x140328240 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x140328298 (FONTOBJ_SetCachedGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14032F6B0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiGetETM @ 0x1403336E0 (NtGdiGetETM.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x14034AD10 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14034B250 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x14034C290 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x14007009C (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0P@@@YAXXZ @ 0x1400701DC (--$GrepAcquireLockValidate@$0P@@@YAXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x140070268 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140071640 (--$GreAcquirePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400717B0 (--$GreReleasePushLockShared2@$0BA@$0A@@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  __int64 v1; // rbx
  HSEMAPHORE v3; // rbx
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  __int64 i; // rdi
  __int64 v10; // rdi
  struct _GRETHREAD *v11; // rax
  bool v12; // zf
  __int64 v13; // rdi
  void *v14; // rcx
  HSEMAPHORE v15; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(v1 + 720) & 0x81) != 0 )
    {
      v3 = *(HSEMAPHORE *)(v1 + 856);
      GreAcquireSemaphoreInternal(v3);
      GrepAcquireLockValidate<15>();
      v4 = *(_DWORD *)(*(_QWORD *)this + 720LL) & 1;
      RFONTOBJ::vUnlockSystemTTGlyphCache(this);
      v7 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x101) == 1 )
      {
        v8 = *(_DWORD *)(v7 + 848) - 1;
        for ( i = v8; i >= 0; --i )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i) )
          {
            v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i);
            RFONTOBJ::vReleaseCache((RFONTOBJ *)&v23);
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v23);
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
        {
          v23 = *(_QWORD *)(*(_QWORD *)this + 744LL);
          RFONTOBJ::vReleaseCache((RFONTOBJ *)&v23);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v23);
        }
        v7 = *(_QWORD *)(*(_QWORD *)this + 736LL);
        if ( v7 )
        {
          v23 = *(_QWORD *)(*(_QWORD *)this + 736LL);
          RFONTOBJ::vReleaseCache((RFONTOBJ *)&v23);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v23);
        }
      }
      if ( v4 )
      {
        v10 = *(_QWORD *)(W32GetSessionState(v7, v5, v6) + 96);
        GreAcquirePushLockShared2<16,0>(v10 + 4864);
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 13500));
        GreReleasePushLockShared2<16,0>(v10 + 4864);
      }
      *(_DWORD *)(*(_QWORD *)this + 720LL) &= 0xFFFFFEFE;
      if ( v3 )
      {
        EtwTraceGreLockReleaseSemaphore(L"RFONT_EUDC", v3);
        v11 = GreGetCurrentThreadCrossSessionCheck();
        if ( v11 )
        {
          v12 = (*((_BYTE *)v11 + 23))-- == 1;
          if ( v12 )
            *(_QWORD *)v11 &= ~0x8000uLL;
          if ( !*(_QWORD *)v11 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v3);
      }
    }
    v13 = 0LL;
    v14 = *(void **)(*(_QWORD *)this + 616LL);
    if ( v14 )
    {
      Win32FreePool(v14);
      *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    }
    v15 = *(HSEMAPHORE *)(*(_QWORD *)this + 504LL);
    EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", v15);
    CurrentThread = KeGetCurrentThread();
    v17 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentProcess = PsGetCurrentProcess(v18),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    if ( v17 )
      v13 = v17 + 8;
    if ( v13 )
    {
      v12 = (*(_BYTE *)(v13 + 13))-- == 1;
      if ( v12 )
        *(_QWORD *)v13 &= ~0x20uLL;
      if ( !*(_QWORD *)v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v15);
  }
}
