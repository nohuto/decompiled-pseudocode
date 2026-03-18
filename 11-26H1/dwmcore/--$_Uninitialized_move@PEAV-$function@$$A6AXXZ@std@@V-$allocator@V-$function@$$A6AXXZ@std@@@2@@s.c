/*
 * XREFs of ??$_Uninitialized_move@PEAV?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@YAPEAV?$function@$$A6AXXZ@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x180299ED4
 * Callers:
 *     ??$_Emplace_reallocate@V?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@$$QEAV21@@Z @ 0x180299C34 (--$_Emplace_reallocate@V-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$allocato.c)
 * Callees:
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x18015BC28 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x18029A2C0 (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move<std::function<void (void)> *,std::allocator<std::function<void (void)>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    std::function<void (void)>::function<void (void)>(a3, i);
    a3 += 64LL;
  }
  detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(a3, a3);
  return a3;
}
