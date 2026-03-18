/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180284880
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1802180FC (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@AEB_K@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@AEAA@AEAV?$tuple@AEB_K@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18028490C (--$-0V-$tuple@AEB_K@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@.c)
 */

__int64 *std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  char *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 *v11; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, __int64 *);
  *a1 = a2;
  a1[1] = 0LL;
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL, a2);
  v6 = v11;
  a1[1] = (__int64)v5;
  v9 = *v6;
  ____0V__tuple_AEB_K_std__V__tuple___V_1__0A___Z_S___pair___CB_KV__shared_ptr___BY0A_E_std___std__AEAA_AEAV__tuple_AEB_K_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
    v5 + 32,
    (__int64 *)va);
  *(_QWORD *)a1[1] = a3;
  v7 = 0LL;
  *(_QWORD *)(a1[1] + 8) = a3;
  *(_QWORD *)(a1[1] + 16) = a3;
  do
    *(_BYTE *)(a1[1] + v7++ + 24) = 0;
  while ( v7 < 2 );
  return a1;
}
