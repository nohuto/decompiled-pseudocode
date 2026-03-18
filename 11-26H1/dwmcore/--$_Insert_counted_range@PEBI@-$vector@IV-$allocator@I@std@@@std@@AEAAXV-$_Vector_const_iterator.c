/*
 * XREFs of ??$_Insert_counted_range@PEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@I@std@@@std@@@1@PEBI_K@Z @ 0x1801E7B2C
 * Callers:
 *     ??$insert@PEBM$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1@Z @ 0x18024570C (--$insert@PEBM$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     ??$insert@V?$span_iterator@$$CBM@details@gsl@@$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@$$CBM@details@gsl@@1@Z @ 0x18028283C (--$insert@V-$span_iterator@$$CBM@details@gsl@@$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1801D0068 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801E0BF8 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x1801E1ADC (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Uninitialized_move@PEAMV?$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV?$allocator@M@0@@Z @ 0x18021914C (--$_Uninitialized_move@PEAMV-$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV-$allocator@M@0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1802316F0 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<unsigned int>::_Insert_counted_range<unsigned int const *>(
        char **a1,
        char *a2,
        const void *a3,
        unsigned __int64 a4)
{
  char *v4; // rsi
  char *v7; // r12
  __int64 v10; // rcx
  SIZE_T size_of; // rax
  __int64 v12; // rdx
  char *v13; // r15
  __int64 v14; // r8
  char *v15; // rdi
  char *v16; // r8
  char *v17; // rcx
  size_t v18; // r15
  _QWORD v19[3]; // [rsp+20h] [rbp-68h] BYREF
  char *v20; // [rsp+38h] [rbp-50h]
  char *v21; // [rsp+40h] [rbp-48h]
  char *v22; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+98h] [rbp+10h]
  __int64 v24; // [rsp+A8h] [rbp+20h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= (a1[2] - v4) >> 2 )
    {
      v18 = 4 * a4;
      if ( a4 >= (v4 - a2) >> 2 )
      {
        a1[1] = (char *)std::_Uninitialized_move<float *>(a2, v4, &a2[v18]);
      }
      else
      {
        a1[1] = (char *)std::_Uninitialized_move<float *>(&v4[-v18], a1[1], a1[1]);
        memmove_0(&a2[v18], a2, &v4[-v18] - a2);
      }
      memmove_0(a2, a3, v18);
    }
    else
    {
      v10 = (v4 - v7) >> 2;
      if ( a4 > 0x3FFFFFFFFFFFFFFFLL - v10 )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v24 = v10 + a4;
      v23 = std::vector<float>::_Calculate_growth(a1, v10 + a4);
      size_of = std::_Get_size_of_n<4>(v23);
      v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v12);
      v19[2] = v23;
      v19[0] = a1;
      v14 = (a2 - v7) >> 2;
      v15 = &v13[4 * v14];
      v22 = &v13[4 * v14 + 4 * a4];
      v21 = v22;
      memmove_0(v15, a3, 4 * a4);
      v20 = v15;
      if ( a4 == 1 && a2 == v4 )
      {
        v16 = v13;
        v17 = v7;
      }
      else
      {
        std::_Uninitialized_move<float *>(v7, a2, v13);
        v16 = v22;
        v17 = a2;
        v20 = v13;
      }
      std::_Uninitialized_move<float *>(v17, v4, v16);
      v19[1] = 0LL;
      std::vector<unsigned int>::_Change_array((__int64)a1, (__int64)v13, v24, v23);
      std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard(v19);
    }
  }
}
