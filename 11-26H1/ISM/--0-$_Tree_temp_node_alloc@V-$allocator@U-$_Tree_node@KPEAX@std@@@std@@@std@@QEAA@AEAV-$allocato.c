/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@KPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@KPEAX@std@@@1@@Z @ 0x1801094CC
 * Callers:
 *     ??$?0AEBK@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@KPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@KPEAX@std@@@1@PEAU?$_Tree_node@KPEAX@1@AEBK@Z @ 0x180108304 (--$-0AEBK@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@KPEAX@std@@@std@@@std@@QEAA@AEAV-$allocat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned long,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned long,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  return a1;
}
