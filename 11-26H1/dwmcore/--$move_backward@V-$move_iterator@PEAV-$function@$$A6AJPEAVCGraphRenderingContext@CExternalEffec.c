/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B7200
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x18015BA24 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@Z @ 0x18015C070 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@.c)
 *     ??4?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18020A0E4 (--4-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@QEAAAEAV01@$$QEAV01.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v7 = a3;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *> &,__int64>(
         a4,
         -((a3 - a2) >> 6));
  while ( a2 != v7 )
  {
    v8 -= 64LL;
    v7 -= 64LL;
    std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>::operator=(v8, v7);
  }
  result = a1;
  a4[2] = (v8 - *a4) >> 6;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
