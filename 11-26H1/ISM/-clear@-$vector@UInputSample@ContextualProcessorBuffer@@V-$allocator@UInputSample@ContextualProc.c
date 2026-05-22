/*
 * XREFs of ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x18001E8B8
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800176E0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18001E87C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

ContextualProcessorBuffer::InputSample *__fastcall std::vector<ContextualProcessorBuffer::InputSample>::clear(
        ContextualProcessorBuffer::InputSample **a1)
{
  ContextualProcessorBuffer::InputSample *v1; // rdx
  ContextualProcessorBuffer::InputSample *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
