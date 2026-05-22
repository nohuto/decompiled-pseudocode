/*
 * XREFs of ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18006FAC4
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$10 @ 0x1801D4440 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$10.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$13 @ 0x1801D46D0 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18001E87C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>(
        ContextualProcessorBuffer::InputSample **a1)
{
  ContextualProcessorBuffer::InputSample *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(v2, a1[1]);
    result = std::_Deallocate<16>(*a1, 16 * ((a1[2] - *a1) >> 4));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
