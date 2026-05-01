/*
 * XREFs of ??0?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D8DC8
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18024B4C8 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6___::CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6_____lambda_acc696b87ca0019872947d555e7575b6___ @ 0x18039E15C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_acc696b87ca0019872947d555e7575b6___--CTaskW.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180029B90 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<tagRECT>::vector<tagRECT>(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  size_t size_of; // rax
  char *v6; // rax
  char *v7; // rdi
  size_t v8; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    size_of = std::_Get_size_of_n<16>((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4);
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v6;
    a1[1] = v6;
    v7 = v6;
    a1[2] = &v6[16 * v4];
    v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v6, *(const void **)a2, v8);
    a1[1] = &v7[v8 & 0xFFFFFFFFFFFFFFF0uLL];
  }
  return a1;
}
