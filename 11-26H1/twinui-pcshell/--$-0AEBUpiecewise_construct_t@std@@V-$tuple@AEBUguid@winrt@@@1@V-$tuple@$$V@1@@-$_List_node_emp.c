/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUguid@winrt@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUguid@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18057C37C
 * Callers:
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1800CC270 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EABB8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0AEBUguid@winrt@@$$Z$$V@?$pair@$$CBUguid@winrt@@_K@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBUguid@winrt@@@1@V?$tuple@$$V@1@@Z @ 0x18057C2F8 (--$-0AEBUguid@winrt@@$$Z$$V@-$pair@$$CBUguid@winrt@@_K@std@@QEAA@Upiecewise_construct_t@1@V-$tup.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int64 size_of; // rax
  void *v7; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  a1[1] = v7;
  v9 = *a4;
  ____0AEBUguid_winrt____Z__V___pair___CBUguid_winrt___K_std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBUguid_winrt___1_V__tuple___V_1__Z(
    (__int64)v7 + 16,
    v9,
    (__int64)&v9);
  return a1;
}
