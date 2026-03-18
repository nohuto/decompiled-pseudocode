/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXAEA_K@Z @ 0x18015C340
 * Callers:
 *     ?reserve@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z @ 0x18015C2EC (-reserve@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1@Z @ 0x1801C0FBC (-_Change_array@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801C8640 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU1@0PEAU1@AEAV?$allocator@UKernelTap@@@0@@Z @ 0x1801CE370 (--$_Uninitialized_move@PEAUKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU.c)
 *     ??1_Reallocation_guard@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA@XZ @ 0x1802461C8 (--1_Reallocation_guard@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<KernelTap>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 v6; // rdx
  LPVOID v7; // rax
  __int64 v8; // rdx
  LPVOID v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 2);
  size_of = std::_Get_size_of_n<12>(*a2);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v6);
  v8 = a1[1];
  v9 = v7;
  v13[2] = *a2;
  v10 = *a1;
  v13[0] = a1;
  std::_Uninitialized_move<KernelTap *>(v10, v8, v7);
  v11 = *a2;
  v13[1] = 0LL;
  std::vector<KernelTap>::_Change_array(a1, v9, v4, v11);
  return std::vector<KernelTap>::_Reallocation_guard::~_Reallocation_guard(v13);
}
