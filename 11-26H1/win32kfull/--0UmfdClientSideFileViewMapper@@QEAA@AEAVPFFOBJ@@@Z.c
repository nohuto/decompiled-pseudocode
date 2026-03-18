/*
 * XREFs of ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x140222080
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x14025FA80 (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 */

UmfdClientSideFileViewMapper *__fastcall UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        UmfdClientSideFileViewMapper *this,
        struct PFFOBJ *a2)
{
  __int128 v2; // xmm0
  unsigned int v4; // r9d
  char v6; // al
  unsigned int v7; // edx
  __int64 v8; // r8

  v2 = *(_OWORD *)a2;
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)this = v2;
  v4 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( v4 )
  {
    v6 = 1;
    v7 = 0;
    while ( v6 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 208LL) + 8LL * v7);
      if ( !*(_BYTE *)(v8 + 45) || (v6 = 1, *(_QWORD *)(v8 + 48)) )
        v6 = 0;
      if ( ++v7 >= v4 )
      {
        if ( v6 )
          *((_DWORD *)this + 4) = UmfdClientSideFileViewMapper::TryMapAllFileViews(this);
        return this;
      }
    }
  }
  return this;
}
