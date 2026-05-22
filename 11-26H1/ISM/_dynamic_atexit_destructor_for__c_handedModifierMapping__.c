/*
 * XREFs of _dynamic_atexit_destructor_for__c_handedModifierMapping__ @ 0x1801DDD90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@@Z @ 0x18008A208 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGI@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

void __fastcall dynamic_atexit_destructor_for__c_handedModifierMapping__()
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>(
    (__int64)&qword_180253EF0,
    (__int64)&qword_180253EF0,
    *(__int64 **)(qword_180253EF0 + 8));
  std::_Deallocate<16>((void *)qword_180253EF0, (struct std::nothrow_t *)0x28);
}
