/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18018FB44
 * Callers:
 *     ?EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018FAAC (-EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPE.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@QEAV1@AEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18004F930 (--$_Destroy_range@V-$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@Q.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCAnimationDependency@@@std@@@std@@YAPEAVCAnimationDependency@@PEAV1@_KAEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18018FC64 (--$_Uninitialized_value_construct_n@V-$allocator@VCAnimationDependency@@@std@@@std@@YAPEAVCAnima.c)
 *     ??0CAnimationDependency@@QEAA@AEBV0@@Z @ 0x1801AD6B0 (--0CAnimationDependency@@QEAA@AEBV0@@Z.c)
 *     ?_Change_array@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAXQEAVCAnimationDependency@@_K1@Z @ 0x1801B2E8C (-_Change_array@-$vector@VCAnimationDependency@@V-$allocator@VCAnimationDependency@@@std@@@std@@A.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@QEAA@XZ @ 0x18022BF94 (--1_Reallocation_guard@-$vector@VCAnimationDependency@@V-$allocator@VCAnimationDependency@@@std@.c)
 */

__int64 __fastcall std::vector<CAnimationDependency>::_Resize_reallocate<std::_Value_init_tag>(
        const struct CAnimationDependency **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  __int64 v12; // rdx
  CAnimationDependency *v13; // rax
  CAnimationDependency *v14; // r15
  __int64 v15; // rax
  const struct CAnimationDependency *v16; // r12
  CAnimationDependency *v17; // rsi
  const struct CAnimationDependency *v18; // rbp
  const struct CAnimationDependency **v20; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-38h]
  CAnimationDependency *v22; // [rsp+38h] [rbp-30h]
  __int64 v23; // [rsp+40h] [rbp-28h]

  v4 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      a2,
      a3,
      a4);
  v7 = a1[1] - *a1;
  v8 = (a1[2] - *a1) >> 4;
  v9 = v7 >> 4;
  v10 = v8 >> 1;
  if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v4 = v10 + v8;
    if ( v10 + v8 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v13 = (CAnimationDependency *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v12);
  v20 = a1;
  v21 = v4;
  v22 = (CAnimationDependency *)((char *)v13 + 16 * v9);
  v14 = v13;
  v15 = std::_Uninitialized_value_construct_n<std::allocator<CAnimationDependency>>(v22);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  v23 = v15;
  while ( v18 != v16 )
  {
    CAnimationDependency::CAnimationDependency(v17, v18);
    v17 = (CAnimationDependency *)((char *)v17 + 16);
    v18 = (const struct CAnimationDependency *)((char *)v18 + 16);
  }
  std::_Destroy_range<std::allocator<CAnimationDependency>>(v17, v17);
  std::vector<CAnimationDependency>::_Change_array(a1, v14, a2, v4, v20, 0LL, v21, v22, v23);
  return std::vector<CAnimationDependency>::_Reallocation_guard::~_Reallocation_guard(&v20);
}
