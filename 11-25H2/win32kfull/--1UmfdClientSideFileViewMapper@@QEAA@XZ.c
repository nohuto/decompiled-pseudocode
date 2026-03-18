/*
 * XREFs of ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1400B0B9C
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140108978 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1401470EC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
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
