/*
 * XREFs of ??$_Insert_counted_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@_K@Z @ 0x180052A20
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180051CD0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAPEAPEAVCPrimitiveColor@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVCPrimitiveColor@@@0@@Z @ 0x1800FC2C0 (--$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180151340 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18018EFBC (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA@XZ @ 0x180226CE8 (--1_Reallocation_guard@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@st.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<CMilPoint2F>::_Insert_counted_range<CMilPoint2F *>(
        char **a1,
        char *a2,
        const void *a3,
        unsigned __int64 a4)
{
  char *v4; // rsi
  char *v7; // r12
  __int64 v10; // rcx
  SIZE_T size_of; // rax
  __int64 v12; // r15
  __int64 v13; // r8
  void *v14; // rdi
  __int64 v15; // r8
  char *v16; // rcx
  size_t v17; // r15
  char **v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+98h] [rbp+10h]
  unsigned __int64 v24; // [rsp+A8h] [rbp+20h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= (a1[2] - v4) >> 3 )
    {
      v17 = 8 * a4;
      if ( a4 >= (v4 - a2) >> 3 )
      {
        a1[1] = (char *)std::_Uninitialized_move<CPrimitiveColor * *>(a2, v4, &a2[v17]);
      }
      else
      {
        a1[1] = (char *)std::_Uninitialized_move<CPrimitiveColor * *>(&v4[-v17], a1[1], a1[1]);
        memmove_0(&a2[v17], a2, &v4[-v17] - a2);
      }
      memmove_0(a2, a3, v17);
    }
    else
    {
      v10 = (v4 - v7) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v10 )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v24 = v10 + a4;
      v23 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v10 + a4);
      size_of = std::_Get_size_of_n<8>(v23);
      v12 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
      v19 = v23;
      v18 = a1;
      v13 = (a2 - v7) >> 3;
      v14 = (void *)(v12 + 8 * v13);
      v22 = v12 + 8 * (v13 + a4);
      v21 = v22;
      memmove_0(v14, a3, 8 * a4);
      v20 = (__int64)v14;
      if ( a4 == 1 && a2 == v4 )
      {
        v15 = v12;
        v16 = v7;
      }
      else
      {
        std::_Uninitialized_move<CPrimitiveColor * *>(v7, a2, v12);
        v15 = v22;
        v16 = a2;
        v20 = v12;
      }
      std::_Uninitialized_move<CPrimitiveColor * *>(v16, v4, v15);
      std::vector<CVectorShape *>::_Change_array(a1, v12, v24, v23, v18, 0LL, v19, v20, v21);
      std::vector<CColorGradientStop *>::_Reallocation_guard::~_Reallocation_guard(&v18);
    }
  }
}
