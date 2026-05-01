/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180481A8C
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801B0D40 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 * Callees:
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x180228484 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0AEBI$$Z$$V@?$pair@$$CBIUViewState@KeyboardHosting@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBI@1@V?$tuple@$$V@1@@Z @ 0x180481A68 (--$-0AEBI$$Z$$V@-$pair@$$CBIUViewState@KeyboardHosting@@@std@@QEAA@Upiecewise_construct_t@1@V-$t.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,KeyboardHosting::ViewState>,void *>>>(
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
  size_of = std::_Get_size_of_n<96>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  a1[1] = v7;
  v9 = *a4;
  ____0AEBI__Z__V___pair___CBIUViewState_KeyboardHosting___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBI_1_V__tuple___V_1__Z(
    (__int64)v7 + 16,
    v9,
    (__int64)&v9);
  return a1;
}
