/*
 * XREFs of ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1401EB5EC
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140108978 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1401470EC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x14022609C (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 */

UmfdClientSideFileViewMapper *__fastcall UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        UmfdClientSideFileViewMapper *this,
        struct PFFOBJ *a2)
{
  __int128 v2; // xmm0
  __int64 v4; // r10
  unsigned int v5; // r9d
  char v7; // al
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx

  v2 = *(_OWORD *)a2;
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)this = v2;
  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( v5 )
  {
    v7 = 1;
    v8 = 0;
    v9 = 0LL;
    while ( v7 )
    {
      v10 = *(_QWORD *)(v9 + *(_QWORD *)(v4 + 208));
      if ( !*(_BYTE *)(v10 + 45) || (v7 = 1, *(_QWORD *)(v10 + 48)) )
        v7 = 0;
      ++v8;
      v9 += 8LL;
      if ( v8 >= v5 )
      {
        if ( v7 )
          *((_DWORD *)this + 4) = UmfdClientSideFileViewMapper::TryMapAllFileViews(this);
        return this;
      }
    }
  }
  return this;
}
