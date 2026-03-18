/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@2@@std@@YAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@0@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@V20@PEAV10@@Z @ 0x1802B7108
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@std@@V?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@stdext@@V?$move_iterator@PEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@0@0V12@@Z @ 0x1802B729C (--$uninitialized_move@V-$move_iterator@PEAV-$function@$$A6AJPEAVCGraphRenderingContext@CExternal.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x18015B9C8 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>,std::function<long (CExternalEffectGraph::CGraphRenderingContext *)> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_QWORD *)(a3 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(a3, a1);
    a3 += 64LL;
    a1 += 64LL;
  }
  return a3;
}
