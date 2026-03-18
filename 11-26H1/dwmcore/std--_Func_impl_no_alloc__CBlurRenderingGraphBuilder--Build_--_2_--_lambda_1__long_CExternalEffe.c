/*
 * XREFs of std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::Build_::_2_::_lambda_1__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180017F70
 * Callers:
 *     <none>
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::Build_::_2_::_lambda_1__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  v2 = *a2;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(*a2 + 36);
  *(_DWORD *)(v2 + 36) = -1;
  CDrawingContext::PopLayer(*(CDrawingContext **)v2);
  return 0LL;
}
