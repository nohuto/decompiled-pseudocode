/*
 * XREFs of ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x1801B3C98
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x18009E138 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 * Callees:
 *     ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x18009E424 (--1CEmptyRegionDrawListBrush@@UEAA@XZ.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x18009E880 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 */

void __fastcall std::default_delete<CEmptyRegionDrawListBrush>::operator()(__int64 a1, FastRegion::CRegion **a2)
{
  struct CEmptyRegionDrawListBrush *v3; // rcx
  CObjectCache *ObjectCache; // rax

  if ( a2 )
  {
    CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(a2);
    ObjectCache = CThreadContext::GetObjectCache(v3);
    CObjectCache::Free(ObjectCache, a2);
  }
}
