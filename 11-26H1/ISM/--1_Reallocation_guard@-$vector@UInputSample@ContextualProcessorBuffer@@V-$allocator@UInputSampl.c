/*
 * XREFs of ??1_Reallocation_guard@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801A757C
 * Callers:
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18004D600 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$0 @ 0x1801D6E3A (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18001E87C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
      *(ContextualProcessorBuffer::InputSample **)(a1 + 24),
      *(ContextualProcessorBuffer::InputSample **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(208LL * *(_QWORD *)(a1 + 16)));
  }
}
