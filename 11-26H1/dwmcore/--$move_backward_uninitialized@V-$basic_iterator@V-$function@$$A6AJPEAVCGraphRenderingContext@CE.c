/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@detail@@YAXV?$basic_iterator@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@Z @ 0x18015BB40
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x18015BA24 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$construct@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V12@@detail@@YAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@PEAV12@$$QEAV12@@Z @ 0x18015A99C (--$construct@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V12@@det.c)
 *     ??C?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@QEBAPEAUVertexXYW_ColorDW_UV2_AAFixup@@XZ @ 0x18025DD34 (--C-$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@QEBAPEAUVertexXYW_ColorD.c)
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rax

  for ( result = *a2; *a2 != *a1; result = *a2 )
  {
    *a2 = result - 64;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>::operator->(a3);
    detail::construct<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(v7);
  }
  return result;
}
