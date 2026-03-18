/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B729C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18015BBB0 (-ensure_extra_capacity@-$buffer_impl@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffec.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@Z @ 0x18015C070 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@2@@std@@YAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@0@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@V20@PEAV10@@Z @ 0x1802B7108 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContex.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,stdext::checked_array_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *> &,__int64>(
         a4,
         (a3 - a2) >> 6);
  a4[2] = (std::_Uninitialized_move_unchecked<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>(
             a2,
             a3,
             v8)
         - *a4) >> 6;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
