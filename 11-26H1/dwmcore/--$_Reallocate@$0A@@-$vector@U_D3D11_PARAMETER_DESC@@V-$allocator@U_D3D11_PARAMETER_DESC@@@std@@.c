/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAXAEA_K@Z @ 0x18014850C
 * Callers:
 *     ?reserve@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAX_K@Z @ 0x180148310 (-reserve@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAAX.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x1801512A0 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180196E1C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@QEAU12@0PEAU12@AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x1801A5A84 (--$_Uninitialized_move@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@Y.c)
 *     ??1_Reallocation_guard@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAA@XZ @ 0x18025F4CC (--1_Reallocation_guard@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@st.c)
 */

__int64 __fastcall std::vector<_D3D11_PARAMETER_DESC>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 v6; // rdx
  LPVOID v7; // rax
  __int64 v8; // rdx
  LPVOID v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  size_of = std::_Get_size_of_n<56>(*a2);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v6);
  v8 = a1[1];
  v9 = v7;
  v13[2] = *a2;
  v10 = *a1;
  v13[0] = a1;
  std::_Uninitialized_move<CContent::LayoutData *>(v10, v8, v7);
  v11 = *a2;
  v13[1] = 0LL;
  std::vector<CShapeRenderTask>::_Change_array(a1, v9, v4, v11);
  return std::vector<_D3D11_PARAMETER_DESC>::_Reallocation_guard::~_Reallocation_guard(v13);
}
