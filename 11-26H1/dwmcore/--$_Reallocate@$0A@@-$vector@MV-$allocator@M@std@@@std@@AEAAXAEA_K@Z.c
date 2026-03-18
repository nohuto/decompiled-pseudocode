/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@MV?$allocator@M@std@@@std@@AEAAXAEA_K@Z @ 0x1801CD8A8
 * Callers:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18003EFA8 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801CD860 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1801D0068 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x1801E1ADC (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Uninitialized_move@PEAMV?$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV?$allocator@M@0@@Z @ 0x18021914C (--$_Uninitialized_move@PEAMV-$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV-$allocator@M@0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1802316F0 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<float>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
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

  v4 = (a1[1] - *a1) >> 2;
  size_of = std::_Get_size_of_n<4>(*a2);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v6);
  v8 = a1[1];
  v9 = v7;
  v13[2] = *a2;
  v10 = *a1;
  v13[0] = a1;
  std::_Uninitialized_move<float *>(v10, v8, v7);
  v11 = *a2;
  v13[1] = 0LL;
  std::vector<unsigned int>::_Change_array(a1, v9, v4, v11);
  return std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(v13);
}
