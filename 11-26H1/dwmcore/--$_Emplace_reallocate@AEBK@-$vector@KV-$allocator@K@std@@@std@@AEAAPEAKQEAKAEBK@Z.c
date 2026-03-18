/*
 * XREFs of ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x1802314D4
 * Callers:
 *     std::_Func_impl_no_alloc__CProcessAttributionReporter::Report_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x18019E2F0 (std--_Func_impl_no_alloc__CProcessAttributionReporter--Report_--_2_--_lambda_1__voi_ea_18019E2F0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1801D0068 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x1801E1ADC (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Uninitialized_move@PEAMV?$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV?$allocator@M@0@@Z @ 0x18021914C (--$_Uninitialized_move@PEAMV-$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV-$allocator@M@0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1802316F0 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(void **a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  int v15; // ecx
  __int64 v16; // rdi
  char *v17; // r8
  char *v18; // r15
  __int64 v19; // rdx
  void *v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v23; // [rsp+38h] [rbp-40h]
  _DWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x3FFFFFFFFFFFFFFFLL;
  v5 = (a2 - (__int64)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a3;
  v16 = (__int64)v14;
  v22[0] = a1;
  v17 = v14;
  v22[2] = v3;
  v18 = &v14[4 * v5];
  *(_DWORD *)v18 = v15;
  v19 = (__int64)a1[1];
  v20 = *a1;
  v24 = v18 + 4;
  v23 = v18;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<float *>(v20, a2, v14);
    v19 = (__int64)a1[1];
    v17 = v18 + 4;
    v20 = (void *)a2;
    v23 = (char *)v16;
  }
  std::_Uninitialized_move<float *>(v20, v19, v17);
  v22[1] = 0LL;
  std::vector<unsigned int>::_Change_array((__int64)a1, v16, v9, v3);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v18;
}
