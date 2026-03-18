/*
 * XREFs of ?Create@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAVCSharedDirect3DResources@1@PEAPEAV1@@Z @ 0x18013887C
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x180138914 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 */

__int64 __fastcall CDrawListEntryBatch::Create(
        struct CD3DDevice *a1,
        struct CDrawListEntryBatch::CSharedDirect3DResources *a2,
        struct CDrawListEntryBatch **a3)
{
  unsigned int v6; // ebx
  CDrawListEntryBatch *v7; // rax
  CDrawListEntryBatch *v8; // rax
  struct CDrawListEntryBatch *v9; // rdi

  v6 = 0;
  v7 = (CDrawListEntryBatch *)MIDL_user_allocate(0xB8uLL);
  if ( v7 && (v8 = CDrawListEntryBatch::CDrawListEntryBatch(v7, a1, a2), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CDrawListEntryBatch *)((char *)v8 + 8));
    *a3 = v9;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x4Fu, 0LL);
  }
  return v6;
}
