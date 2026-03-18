/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180054D24
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800548C0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAPEAPEAVCPrimitiveColor@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVCPrimitiveColor@@@0@@Z @ 0x1800FC2C0 (--$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180151340 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18018EFBC (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PEAV1@_KAEAV?$allocator@VCMilPoint2F@@@0@@Z @ 0x18019A748 (--$_Uninitialized_value_construct_n@V-$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PE.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA@XZ @ 0x180226CE8 (--1_Reallocation_guard@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@st.c)
 */

__int64 __fastcall std::vector<CMilPoint2F>::_Resize_reallocate<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  SIZE_T size_of; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v4 = (a1[1] - *a1) >> 3;
  v5 = std::vector<CMilPoint2F>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<8>(v5);
  v12[0] = a1;
  v12[2] = v5;
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v13 = v7 + 8 * v4;
  v8 = std::_Uninitialized_value_construct_n<std::allocator<CMilPoint2F>>(v13, a2 - v4);
  v9 = a1[1];
  v10 = *a1;
  v14 = v8;
  std::_Uninitialized_move<CPrimitiveColor * *>(v10, v9, v7);
  std::vector<CVectorShape *>::_Change_array(a1, v7, a2, v5, a1, 0LL, v5, v13, v14);
  return std::vector<CColorGradientStop *>::_Reallocation_guard::~_Reallocation_guard(v12);
}
