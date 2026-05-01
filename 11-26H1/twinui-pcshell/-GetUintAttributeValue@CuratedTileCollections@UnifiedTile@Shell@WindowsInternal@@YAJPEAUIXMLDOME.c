/*
 * XREFs of ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180677228
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x180677D60 (-ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801C6F28 (--1_variant_t@@QEAA@XZ.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802C6D60 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        unsigned int *a4)
{
  struct IXMLDOMElementVtbl *lpVtbl; // rdx
  int v8; // eax
  const struct _variant_t *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  VARIANTARG pvarg; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  VariantInit(&pvarg);
  lpVtbl = a2->lpVtbl;
  if ( a2->lpVtbl )
    lpVtbl = (struct IXMLDOMElementVtbl *)lpVtbl->QueryInterface;
  v8 = (*(__int64 (__fastcall **)(WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *, struct IXMLDOMElementVtbl *, VARIANTARG *))(*(_QWORD *)this + 352LL))(
         this,
         lpVtbl,
         &pvarg);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 26LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\xmlhelpers.cpp",
      (const char *)v11);
    goto LABEL_11;
  }
  if ( pvarg.vt != 1 )
  {
    _variant_t::ChangeType(&pvarg, 0x17u, v9);
    if ( pvarg.vt == 23 )
    {
      *(_DWORD *)a3 = pvarg.lVal;
      v10 = 0;
      goto LABEL_11;
    }
    v10 = -2147418113;
    v11 = 2147549183LL;
    v12 = 30LL;
    goto LABEL_9;
  }
  v10 = -2147023728;
LABEL_11:
  _variant_t::~_variant_t(&pvarg);
  return v10;
}
