/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1402154A8
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x1400193F0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400802FC (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400B9260 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BD04C (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BDE04 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019CA3C (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030F174 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  __int64 v2; // rdx
  unsigned int v3; // edi
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = PDEVOBJ::cFonts(this);
  if ( v3 )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v5, v2);
    DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)v5, *(HDEV *)this, v3);
  }
  return 1LL;
}
