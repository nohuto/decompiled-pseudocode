/*
 * XREFs of ?GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAH@Z @ 0x18065118C
 * Callers:
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1803209F4 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801D07C8 (--1_variant_t@@QEAA@XZ.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802CFB20 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetIntAttributeValue(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        int *a4)
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
    v12 = 39LL;
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
    _variant_t::ChangeType(&pvarg, 0x16u, v9);
    if ( pvarg.vt == 22 )
    {
      *(_DWORD *)a3 = pvarg.lVal;
      v10 = 0;
      goto LABEL_11;
    }
    v10 = -2147418113;
    v11 = 2147549183LL;
    v12 = 43LL;
    goto LABEL_9;
  }
  v10 = -2147023728;
LABEL_11:
  _variant_t::~_variant_t(&pvarg);
  return v10;
}
