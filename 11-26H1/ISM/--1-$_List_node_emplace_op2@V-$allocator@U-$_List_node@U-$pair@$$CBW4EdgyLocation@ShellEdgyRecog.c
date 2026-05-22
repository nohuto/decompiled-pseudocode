/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800991B8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_ShellEdgyRecognizer::EdgyLocation_std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration____std::_Uhash_compare_enum_ShellEdgyRecognizer::EdgyLocation_std::hash_enum_ShellEdgyRecognizer::EdgyLocation__std::equal_to_enum_ShellEdgyRecognizer::EdgyLocation____std::allocator_std::pair_enum_ShellEdgyRecognizer::EdgyLocation_const__std::vector_ShellGesturesProcessor::GestureRegistration_std::allocator_ShellGesturesProcessor::GestureRegistration________0___::_Try_emplace_enum_ShellEdgyRecognizer::EdgyLocation_const_&__::_1_::dtor$0 @ 0x1801D60AC (_std--_Hash_std--_Umap_traits_enum_ShellEdgyRecognizer--EdgyLocation_std--vector_Sh_ea_1801D60AC.c)
 * Callees:
 *     ?_Tidy@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXXZ @ 0x18002F870 (-_Tidy@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegistration@S.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::vector<ShellGesturesProcessor::GestureRegistration>::_Tidy((_QWORD *)(v2 + 24));
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>(a1);
}
