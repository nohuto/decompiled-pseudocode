/*
 * XREFs of ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1400193DC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x1400193F0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400802FC (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400B9260 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BDE04 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGotFonts(PDEVOBJ *this)
{
  return (*(_DWORD *)(*(_QWORD *)this + 40LL) >> 6) & 1;
}
