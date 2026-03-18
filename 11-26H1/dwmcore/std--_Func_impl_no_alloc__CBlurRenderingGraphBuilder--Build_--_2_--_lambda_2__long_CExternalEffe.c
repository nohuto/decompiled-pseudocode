/*
 * XREFs of std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::Build_::_2_::_lambda_2__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180017FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ @ 0x180017FD8 (-SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::Build_::_2_::_lambda_2__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        CExternalEffectGraph::CGraphRenderingContext **a2)
{
  CExternalEffectGraph::CGraphRenderingContext *v2; // rbx
  CDrawingContext *v3; // rcx

  v2 = *a2;
  CExternalEffectGraph::CGraphRenderingContext::SetOutputToCurrentTarget(*a2);
  v3 = *(CDrawingContext **)v2;
  *((_DWORD *)v2 + 8) = *((_DWORD *)v2 + 9);
  *((_DWORD *)v2 + 9) = -1;
  CDrawingContext::PopLayer(v3);
  return 0LL;
}
