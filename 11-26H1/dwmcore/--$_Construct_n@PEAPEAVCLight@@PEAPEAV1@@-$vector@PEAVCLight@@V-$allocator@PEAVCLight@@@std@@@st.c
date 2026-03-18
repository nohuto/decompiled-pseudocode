/*
 * XREFs of ??$_Construct_n@PEAPEAVCLight@@PEAPEAV1@@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAX_K$$QEAPEAPEAVCLight@@1@Z @ 0x18025A510
 * Callers:
 *     ??$?0V?$span_iterator@PEAVCLight@@@details@gsl@@$0A@@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCLight@@@details@gsl@@0AEBV?$allocator@PEAVCLight@@@1@@Z @ 0x18025A460 (--$-0V-$span_iterator@PEAVCLight@@@details@gsl@@$0A@@-$vector@PEAVCLight@@V-$allocator@PEAVCLigh.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@@std@@QEAA@XZ @ 0x18025A6C4 (--1-$_Tidy_guard@V-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<CLight *>::_Construct_n<CLight * *,CLight * *>(
        _QWORD *a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  SIZE_T size_of; // rax
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdi
  char *v12; // rsi
  char *v13; // rcx
  void *v14; // rbx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(a2);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v9);
    v11 = *a4;
    *a1 = v10;
    a1[1] = v10;
    v12 = v10;
    v13 = &v10[8 * a2];
    v14 = *a3;
    a1[2] = v13;
    std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
      v14,
      v11,
      v10);
    v15 = 0LL;
    a1[1] = &v12[8 * ((v11 - (__int64)v14) >> 3)];
    std::_Tidy_guard<std::vector<CLight *>>::~_Tidy_guard<std::vector<CLight *>>(&v15);
  }
}
