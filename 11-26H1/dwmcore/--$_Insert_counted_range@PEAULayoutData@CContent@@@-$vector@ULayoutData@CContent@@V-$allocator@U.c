/*
 * XREFs of ??$_Insert_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@_K@Z @ 0x18026DB18
 * Callers:
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18026DD48 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18018FCBC (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180196E1C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@QEAU12@0PEAU12@AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x1801A5A84 (--$_Uninitialized_move@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@Y.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x1801C5918 (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 *     ??1_Reallocation_guard@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAA@XZ @ 0x18025F4CC (--1_Reallocation_guard@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@st.c)
 *     ??$_Uninitialized_copy_n@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x18026DD18 (--$_Uninitialized_copy_n@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<CContent::LayoutData>::_Insert_counted_range<CContent::LayoutData *>(
        char **a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  char *v4; // rsi
  char *v6; // r12
  __int64 v10; // rcx
  SIZE_T size_of; // rax
  __int64 v12; // rdx
  char *v13; // r15
  char *v14; // r8
  char *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // rdi
  _QWORD v19[3]; // [rsp+20h] [rbp-68h] BYREF
  char *v20; // [rsp+38h] [rbp-50h]
  char *v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+A8h] [rbp+20h]

  if ( a4 )
  {
    v4 = a1[1];
    v6 = *a1;
    if ( a4 <= (a1[2] - v4) / 56 )
    {
      v16 = (__int64)a1[1];
      v17 = 56 * a4;
      if ( a4 >= 0x6DB6DB6DB6DB6DB7LL * ((v4 - a2) >> 3) )
      {
        a1[1] = std::_Uninitialized_move<CContent::LayoutData *>(a2, v16, &a2[v17]);
      }
      else
      {
        v18 = &v4[-v17];
        a1[1] = std::_Uninitialized_move<CContent::LayoutData *>(&v4[-v17], v16, v4);
        memmove_0(&v4[-(v18 - a2)], a2, v18 - a2);
      }
      std::_Uninitialized_copy_n<CContent::LayoutData *>(a3, a4, a2);
    }
    else
    {
      v10 = 0x6DB6DB6DB6DB6DB7LL * ((v4 - v6) >> 3);
      if ( a4 > 0x492492492492492LL - v10 )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v23 = v10 + a4;
      v22 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v10 + a4);
      size_of = std::_Get_size_of_n<56>(v22);
      v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v12);
      v19[0] = a1;
      v21 = &v13[56 * a4 + 8 * ((a2 - v6) >> 3)];
      v19[2] = v22;
      std::_Uninitialized_copy_n<CContent::LayoutData *>(a3, a4, &v13[8 * ((a2 - v6) >> 3)]);
      v20 = &v13[8 * ((a2 - v6) >> 3)];
      if ( a4 == 1 && a2 == v4 )
      {
        v14 = v13;
        v15 = v6;
      }
      else
      {
        std::_Uninitialized_move<CContent::LayoutData *>(v6, (__int64)a2, v13);
        v14 = &v13[56 * a4 + 8 * ((a2 - v6) >> 3)];
        v15 = a2;
        v20 = v13;
      }
      std::_Uninitialized_move<CContent::LayoutData *>(v15, (__int64)v4, v14);
      v19[1] = 0LL;
      std::vector<CContent::LayoutData>::_Change_array((__int64)a1, (__int64)v13, v23, v22);
      std::vector<_D3D11_PARAMETER_DESC>::_Reallocation_guard::~_Reallocation_guard((__int64)v19);
    }
  }
}
