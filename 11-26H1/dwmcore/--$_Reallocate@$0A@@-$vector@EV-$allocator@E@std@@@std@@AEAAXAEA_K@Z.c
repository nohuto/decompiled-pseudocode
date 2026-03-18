/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@EV?$allocator@E@std@@@std@@AEAAXAEA_K@Z @ 0x180055150
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x180055110 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1801514A0 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x1801AD0FC (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x18022FB94 (--1_Reallocation_guard@-$vector@EV-$allocator@E@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Reallocate<0>(__int64 *a1, SIZE_T *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  SIZE_T v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+40h] [rbp-8h]

  v3 = a1[1] - *a1;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(*a2);
  v6 = a1[1];
  v7 = v5;
  v8 = *a1;
  v11 = *a2;
  std::_Uninitialized_move<unsigned char *>(v8, v6, v5);
  std::vector<unsigned char>::_Change_array(a1, v7, v3, *a2, a1, 0LL, v11, v12, v13);
  return std::vector<unsigned char>::_Reallocation_guard::~_Reallocation_guard(&v10);
}
