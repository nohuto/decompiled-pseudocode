/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800626F0
 * Callers:
 *     _ContextualProcessorBuffer::MakeContextualProcessorDecision_::_1_::dtor$8 @ 0x1801D48A0 (_ContextualProcessorBuffer--MakeContextualProcessorDecision_--_1_--dtor$8.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_enum_ContextualProcessorDecision_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__enum_ContextualProcessorDecision____0___::operator__::_1_::dtor$1 @ 0x1801D4AB4 (_std--_Hash_std--_Umap_traits_unsigned_long_enum_ContextualProcessorDecision_std--__ea_1801D4AB4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx

  if ( a1[1] )
  {
    *(_QWORD *)(a1[3] + 8LL) = 0LL;
    result = (_QWORD *)a1[2];
    *result = 0LL;
    v2 = (_QWORD *)a1[3];
    while ( v2 )
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
      result = (_QWORD *)std::_Deallocate<16>(v3, 24LL);
    }
  }
  return result;
}
