/*
 * XREFs of ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x14021AC50
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 */

void __fastcall UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper(UmfdClientSideFileViewMapper *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(*(_QWORD *)this + 36LL) )
      break;
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 208LL) + 8 * i));
  }
}
