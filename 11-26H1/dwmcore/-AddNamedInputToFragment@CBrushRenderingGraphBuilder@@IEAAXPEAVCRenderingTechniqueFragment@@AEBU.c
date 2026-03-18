/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1800FB900
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB294 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18015D984 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BC64 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UGraphInputParameters@CBrushRenderingGraph@@$0A@@@QEAAJPEFBUGraphInputParameters@CBrushRenderingGraph@@I@Z @ 0x1800FB60C (-AddMultipleAndSet@-$DynArray@UGraphInputParameters@CBrushRenderingGraph@@$0A@@@QEAAJPEFBUGraphI.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800FC6BC (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAAEAUFragmentInput@CRenderingTechniqueFragment@@$$QEAU23@@Z @ 0x1802B3958 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rdx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+24h] [rbp-14h]
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)this;
  v5 = 0LL;
  v6 = *(_DWORD *)(v3 + 40);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v3 + 16);
    do
    {
      if ( *(_QWORD *)(v7 + 24 * v5) == *(_QWORD *)a3
        && *(_QWORD *)(v7 + 24 * v5 + 8) == *((_QWORD *)a3 + 1)
        && *(_DWORD *)(v7 + 24 * v5 + 16) == *((_DWORD *)a3 + 4) )
      {
        break;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v6 );
  }
  if ( (unsigned int)v5 >= v6 )
  {
    v8 = DynArray<CBrushRenderingGraph::GraphInputParameters,0>::AddMultipleAndSet(v3 + 16, a3);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT(v8, retaddr);
    LODWORD(v5) = *(_DWORD *)(v3 + 40) - 1;
  }
  v9 = v5;
  v11 = 0LL;
  v10 = 0;
  std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
    (char *)a2 + 32,
    &v9);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v11);
}
