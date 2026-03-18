/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180295D90
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@$$QEAV21@@Z @ 0x180295FF4 (--$emplace_back@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@@-.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@2@_K1@Z @ 0x1801D815C (-_Change_array@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x180295EC4 (--$_Uninitialized_move@PEAV-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1802964E8 (--1_Reallocation_guard@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache.c)
 */

char *__fastcall std::vector<std::unique_ptr<CCheckMPOCache>>::_Emplace_reallocate<std::unique_ptr<CCheckMPOCache>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
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
  __int64 v15; // rcx
  __int64 v16; // rsi
  _QWORD *v17; // r8
  char *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a3;
  v16 = (__int64)v14;
  *a3 = 0LL;
  v17 = v14;
  v22[0] = a1;
  v18 = &v14[8 * v5];
  v22[2] = v3;
  *(_QWORD *)v18 = v15;
  v19 = a1[1];
  v20 = *a1;
  v24 = v18 + 8;
  v23 = v18;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<std::unique_ptr<CCheckMPOCache> *,std::allocator<std::unique_ptr<CCheckMPOCache>>>(
      v20,
      a2,
      v14);
    v19 = a1[1];
    v17 = v18 + 8;
    v20 = a2;
    v23 = (_QWORD *)v16;
  }
  std::_Uninitialized_move<std::unique_ptr<CCheckMPOCache> *,std::allocator<std::unique_ptr<CCheckMPOCache>>>(
    v20,
    v19,
    v17);
  v22[1] = 0LL;
  std::vector<std::unique_ptr<CCheckMPOCache>>::_Change_array((__int64)a1, v16, v9, v3);
  std::vector<std::unique_ptr<CCheckMPOCache>>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v18;
}
