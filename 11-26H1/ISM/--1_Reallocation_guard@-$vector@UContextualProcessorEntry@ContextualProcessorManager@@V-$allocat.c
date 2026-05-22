/*
 * XREFs of ??1_Reallocation_guard@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAA@XZ @ 0x1801A6FD8
 * Callers:
 *     ??$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU23@$$QEAU23@@Z @ 0x180052BDC (--$_Emplace_reallocate@UContextualProcessorEntry@ContextualProcessorManager@@@-$vector@UContextu.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180076780 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
      *(__int64 **)(a1 + 24),
      *(__int64 **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(16LL * *(_QWORD *)(a1 + 16)));
  }
}
