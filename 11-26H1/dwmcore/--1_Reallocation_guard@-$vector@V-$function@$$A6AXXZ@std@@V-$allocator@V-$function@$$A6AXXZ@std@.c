/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x18029A6B4
 * Callers:
 *     ??$_Emplace_reallocate@V?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@$$QEAV21@@Z @ 0x180299C34 (--$_Emplace_reallocate@V-$function@$$A6AXXZ@std@@@-$vector@V-$function@$$A6AXXZ@std@@V-$allocato.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$destruct_range@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@detail@@YAXPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@0@Z @ 0x18015BC28 (--$destruct_range@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@@de.c)
 */

void __fastcall std::vector<std::function<void (void)>>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    detail::destruct_range<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>>(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), *(_QWORD *)(a1 + 16) << 6);
  }
}
