/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x180132E28
 * Callers:
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180016D10 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K1@Z @ 0x18004B550 (-_Change_array@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800548E4 (--$_Uninitialized_move@PEAV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$all.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAA@XZ @ 0x1800A97D0 (--1_Reallocation_guard@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEA.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate<0>(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rbx
  unsigned __int64 size_of; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 *v10; // r10
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = *(_QWORD **)(a1 + 8);
  v11[2] = *a2;
  v8 = *(_QWORD **)a1;
  v11[0] = a1;
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> *,std::allocator<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>>(
    v8,
    v7,
    v6);
  v9 = *a2;
  v11[1] = 0LL;
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Change_array((__int64 **)a1, v10, v4, v9);
  std::vector<LampUpdateState>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}
