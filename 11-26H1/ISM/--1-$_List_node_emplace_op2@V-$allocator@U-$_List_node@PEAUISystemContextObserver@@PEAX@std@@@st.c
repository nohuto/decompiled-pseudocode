/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@PEAUISystemContextObserver@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008A558
 * Callers:
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$18 @ 0x1801D49B0 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$18.c)
 *     _ContextualProcessorBuffer::ProcessContextualProcessorDecision_::_1_::dtor$5 @ 0x1801D49E2 (_ContextualProcessorBuffer--ProcessContextualProcessorDecision_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$19 @ 0x1801D4D2E (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$19.c)
 *     _std::unordered_map_unsigned_long_unsigned_short_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_short_____::_Insert_or_assign_unsigned_long_unsigned_short_&__::_1_::dtor$0 @ 0x1801D4DE0 (_std--unordered_map_unsigned_long_unsigned_short_std--hash_unsigned_long__std--equal_to_unsigned.c)
 *     _std::unordered_map_unsigned_long_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long_____::_Insert_or_assign_unsigned_long_int__::_1_::dtor$0 @ 0x1801D6076 (_std--unordered_map_unsigned_long_unsigned_long_std--hash_unsigned_long__std--equal_to_unsigned_.c)
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$0 @ 0x1801D6EE0 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<ISystemContextObserver *,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<ISystemContextObserver *,void *>>>(
        __int64 a1)
{
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<unsigned __int64,void *>>>(a1);
}
