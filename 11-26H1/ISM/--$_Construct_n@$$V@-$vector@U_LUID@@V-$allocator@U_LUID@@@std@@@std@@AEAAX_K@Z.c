/*
 * XREFs of ??$_Construct_n@$$V@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAX_K@Z @ 0x1801A1D70
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x1800156F0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@@std@@QEAA@XZ @ 0x180160384 (--1-$_Tidy_guard@V-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy.c)
 */

void __fastcall std::vector<_LUID>::_Construct_n<>(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *v6; // rbx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(a2);
    v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v5;
    v6 = v5;
    a1[2] = &v5[8 * a2];
    memset_0(v5, 0, 8 * a2);
    v7 = 0LL;
    a1[1] = &v6[8 * a2];
    std::_Tidy_guard<std::vector<LightDismissClientProxy *>>::~_Tidy_guard<std::vector<LightDismissClientProxy *>>(&v7);
  }
}
