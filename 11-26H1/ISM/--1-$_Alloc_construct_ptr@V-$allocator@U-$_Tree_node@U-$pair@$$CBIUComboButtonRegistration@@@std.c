/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008B548
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180133C18 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UCallbackData@CallOnThreadExit@@PEAX@std@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801AA38C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUComboButtonRegistration@@@std@@PEA.c)
 *     _std::list_CallOnThreadExit::CallbackData_std::allocator_CallOnThreadExit::CallbackData___::_Emplace___::_1_::dtor$1 @ 0x1801DB0D7 (_std--list_CallOnThreadExit--CallbackData_std--allocator_CallOnThreadExit--CallbackData___--_Emp.c)
 *     _std::map_unsigned_int_ComboButtonRegistration_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__ComboButtonRegistration_____::_Try_emplace_unsigned_int_const_&__::_1_::dtor$2 @ 0x1801DCD1B (_std--map_unsigned_int_ComboButtonRegistration_std--less_unsigned_int__std--allocator_std--pair_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x70);
}
