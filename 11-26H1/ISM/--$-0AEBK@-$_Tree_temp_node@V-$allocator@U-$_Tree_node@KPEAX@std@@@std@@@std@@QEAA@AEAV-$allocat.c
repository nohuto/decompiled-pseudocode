/*
 * XREFs of ??$?0AEBK@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@KPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@KPEAX@std@@@1@PEAU?$_Tree_node@KPEAX@1@AEBK@Z @ 0x180108304
 * Callers:
 *     ??$_Emplace@AEBK@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@KPEAX@std@@_N@1@AEBK@Z @ 0x1801088BC (--$_Emplace@AEBK@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@IEAA-A.c)
 * Callees:
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@KPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@KPEAX@std@@@1@@Z @ 0x1801094CC (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@KPEAX@std@@@std@@@std@@QEAA@AEAV-$allocato.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned long,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned long,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v7; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned long,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<unsigned long,void *>>>();
  v7 = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL) = *a4;
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  do
  {
    *(_BYTE *)(v7 + *(_QWORD *)(a1 + 8) + 24) = 0;
    ++v7;
  }
  while ( v7 < 2 );
  return a1;
}
