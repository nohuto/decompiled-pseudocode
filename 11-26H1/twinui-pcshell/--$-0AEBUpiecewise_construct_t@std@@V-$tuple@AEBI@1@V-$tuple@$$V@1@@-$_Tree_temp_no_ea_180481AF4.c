/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180481AF4
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180215318 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EABB8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0AEBI$$Z$$V@?$pair@$$CBIUSize@Foundation@Windows@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBI@1@V?$tuple@$$V@1@@Z @ 0x180481A4C (--$-0AEBI$$Z$$V@-$pair@$$CBIUSize@Foundation@Windows@@@std@@QEAA@Upiecewise_construct_t@1@V-$tup.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  unsigned __int64 size_of; // rax
  void *v6; // rax
  __int64 i; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  __int64 *v11; // [rsp+50h] [rbp+28h]
  va_list va1; // [rsp+58h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, __int64 *);
  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  a1[1] = v6;
  v9 = *v11;
  ____0AEBI__Z__V___pair___CBIUSize_Foundation_Windows___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBI_1_V__tuple___V_1__Z(
    (__int64)v6 + 28,
    v9,
    (__int64)va);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
