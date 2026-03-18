/*
 * XREFs of ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x180199AB0
 * Callers:
 *     ??$_Emplace_one_at_back@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAAEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@AEBU23@@Z @ 0x1801999C4 (--$_Emplace_one_at_back@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$v.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAXQEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@_K1@Z @ 0x1801525A4 (-_Change_array@-$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V-$allo.c)
 *     ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x1801BC398 (--$_Get_size_of_n@$0GI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@YAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU12@0PEAU12@AEAV?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@0@@Z @ 0x1801C36A8 (--$_Uninitialized_move@PEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V-$al.c)
 *     ??1_Reallocation_guard@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x1802318F4 (--1_Reallocation_guard@-$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@.c)
 */

char *__fastcall std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v4; // r9
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  SIZE_T size_of; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rdi
  char *v18; // r8
  char *v19; // r14
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v24[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]
  char *v26; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v6 = 0x276276276276276LL;
  v7 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 3);
  v9 = v4 / 104;
  if ( v7 == 0x276276276276276LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      (unsigned __int128)(v4 * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64,
      0x4EC4EC4EC4EC4EC5LL,
      v4);
  v10 = v7 + 1;
  v11 = 0x4EC4EC4EC4EC4EC5LL * ((a1[2] - *a1) >> 3);
  v12 = v11 >> 1;
  if ( v11 <= 0x276276276276276LL - (v11 >> 1) )
  {
    v6 = v12 + v11;
    if ( v12 + v11 < v10 )
      v6 = v10;
  }
  size_of = std::_Get_size_of_n<104>(v6);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v14);
  v16 = *a3;
  v17 = (__int64)v15;
  v24[0] = a1;
  v24[2] = v6;
  v18 = v15;
  v19 = &v15[104 * v9];
  v25 = (__int64)v19;
  *(_OWORD *)v19 = v16;
  v20 = a3[1];
  v26 = v19 + 104;
  *((_OWORD *)v19 + 1) = v20;
  *((_OWORD *)v19 + 2) = a3[2];
  *((_OWORD *)v19 + 3) = a3[3];
  *((_OWORD *)v19 + 4) = a3[4];
  *((_OWORD *)v19 + 5) = a3[5];
  *((_QWORD *)v19 + 12) = *((_QWORD *)a3 + 12);
  v21 = a1[1];
  v22 = *a1;
  if ( a2 != v21 )
  {
    std::_Uninitialized_move<CProcessResourceAttributionReporter::ProcessResourceUsageRecord *>(v22, a2, v15);
    v21 = a1[1];
    v18 = v19 + 104;
    v22 = a2;
    v25 = v17;
  }
  std::_Uninitialized_move<CProcessResourceAttributionReporter::ProcessResourceUsageRecord *>(v22, v21, v18);
  v24[1] = 0LL;
  std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Change_array((__int64)a1, v17, v10, v6);
  std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Reallocation_guard::~_Reallocation_guard(v24);
  return v19;
}
