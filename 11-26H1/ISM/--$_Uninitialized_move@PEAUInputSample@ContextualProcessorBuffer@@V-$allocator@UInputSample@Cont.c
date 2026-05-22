/*
 * XREFs of ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x180094064
 * Callers:
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18004D600 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18001E87C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 *     ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Default_allocator_traits@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@1@QEAUInputSample@ContextualProcessorBuffer@@$$QEAU34@@Z @ 0x18004D784 (--$construct@UInputSample@ContextualProcessorBuffer@@U12@@-$_Default_allocator_traits@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=1
ContextualProcessorBuffer::InputSample *__fastcall std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(
        __int64 a1,
        __int64 *a2,
        ContextualProcessorBuffer::InputSample *a3)
{
  __int64 *i; // rdi

  for ( i = (__int64 *)a1; i != a2; i += 26 )
  {
    std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
      a1,
      (__int64)a3,
      i);
    a3 = (ContextualProcessorBuffer::InputSample *)((char *)a3 + 208);
  }
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(a3, a3);
  return a3;
}
