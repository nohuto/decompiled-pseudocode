/*
 * XREFs of ?_Check_grow_by_1@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAAXXZ @ 0x18010A1DC
 * Callers:
 *     ??$_Emplace@AEBK@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@KPEAX@std@@_N@1@AEBK@Z @ 0x1801088BC (--$_Emplace@AEBK@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@IEAA-A.c)
 * Callees:
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B15CC (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Check_grow_by_1(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_tree_length_error();
  return result;
}
