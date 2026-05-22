/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801A8084
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180018FB0 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ??4?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001B3C4 (--4-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Unchecked_erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rbx

  v5 = a2;
  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = 0LL;
    *v6 = a3;
    a3[1] = v6;
    do
    {
      v8 = (_QWORD *)*v5;
      std::_Deallocate<16>(v5, (struct std::nothrow_t *)0x18);
      ++v7;
      v5 = v8;
    }
    while ( v8 != a3 );
    *(_QWORD *)(a1 + 8) -= v7;
  }
  return a3;
}
