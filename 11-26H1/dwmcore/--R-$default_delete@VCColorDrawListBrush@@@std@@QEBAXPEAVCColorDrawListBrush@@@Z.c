/*
 * XREFs of ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x1801CDE90
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18003DDB4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801CC9E0 (--1-$out_param_t@V-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@st.c)
 *     ??1?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801CDE70 (--1-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x18009D5E4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x18009E7F0 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 */

void __fastcall std::default_delete<CColorDrawListBrush>::operator()(struct CColorDrawListBrush *a1, _QWORD *a2)
{
  CObjectCache *ObjectCache; // rax

  if ( a2 )
  {
    ObjectCache = CThreadContext::GetObjectCache(a1);
    CObjectCache::Free(ObjectCache, a2);
  }
}
