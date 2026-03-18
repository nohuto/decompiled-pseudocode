/*
 * XREFs of ??$?0AEBI@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@AEBI@Z @ 0x180261844
 * Callers:
 *     ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x18020CDD4 (--$_Emplace@AEBI@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAA-A.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

__int64 *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  _DWORD *v7; // rax
  __int64 v8; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL, a2);
  a1[1] = (__int64)v7;
  v8 = 0LL;
  v7[7] = *a4;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8) = a3;
  *(_QWORD *)(a1[1] + 16) = a3;
  do
    *(_BYTE *)(a1[1] + v8++ + 24) = 0;
  while ( v8 < 2 );
  return a1;
}
