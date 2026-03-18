/*
 * XREFs of ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x1800FC6EC
 * Callers:
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FC5D4 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800FC604 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 */

void __fastcall CRenderingTechniqueFragment::~CRenderingTechniqueFragment(CRenderingTechniqueFragment *this)
{
  __int64 v2; // rcx

  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)this + 13);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v2, *((_QWORD *)this + 5));
    std::_Deallocate<16>(*((void **)this + 4), (*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this);
}
