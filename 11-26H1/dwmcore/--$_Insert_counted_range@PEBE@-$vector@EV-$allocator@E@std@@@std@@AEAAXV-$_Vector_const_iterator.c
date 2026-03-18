/*
 * XREFs of ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x180052FBC
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180052E94 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x180053160 (-AppendSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1800533A4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x1801C4A38 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1801514A0 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x1801ABED8 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x1801AD0FC (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x18022FB94 (--1_Reallocation_guard@-$vector@EV-$allocator@E@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(
        char **a1,
        char *a2,
        const void *a3,
        size_t a4)
{
  char *v4; // rsi
  char *v7; // r12
  char *v10; // rcx
  __int64 v11; // r15
  char *v12; // rdi
  char *v13; // r8
  char *v14; // rcx
  char *v15; // rdi
  char **v16; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T v17; // [rsp+30h] [rbp-58h]
  char *v18; // [rsp+38h] [rbp-50h]
  char *v19; // [rsp+40h] [rbp-48h]
  SIZE_T v20; // [rsp+90h] [rbp+8h]
  char *v21; // [rsp+98h] [rbp+10h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= a1[2] - v4 )
    {
      if ( a4 >= v4 - a2 )
      {
        a1[1] = (char *)std::_Uninitialized_move<unsigned char *>(a2, v4, &a2[a4]);
      }
      else
      {
        v15 = &v4[-a4];
        a1[1] = (char *)std::_Uninitialized_move<unsigned char *>(&v4[-a4], a1[1], a1[1]);
        memmove_0(&v4[-(v15 - a2)], a2, v15 - a2);
      }
      memmove_0(a2, a3, a4);
    }
    else
    {
      v10 = (char *)(v4 - v7);
      if ( a4 > 0x7FFFFFFFFFFFFFFFLL - (v4 - v7) )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v21 = &v10[a4];
      v20 = std::vector<unsigned char>::_Calculate_growth(a1, &v10[a4]);
      v16 = a1;
      v11 = std::_Allocate<16,std::_Default_allocate_traits>(v20);
      v12 = &a2[v11 - (_QWORD)v7];
      v17 = v20;
      v19 = &v12[a4];
      memmove_0(v12, a3, a4);
      v18 = v12;
      if ( a4 == 1 && a2 == v4 )
      {
        v13 = (char *)v11;
        v14 = v7;
      }
      else
      {
        std::_Uninitialized_move<unsigned char *>(v7, a2, v11);
        v13 = &v12[a4];
        v18 = (char *)v11;
        v14 = a2;
      }
      std::_Uninitialized_move<unsigned char *>(v14, v4, v13);
      std::vector<unsigned char>::_Change_array(a1, v11, v21, v20, v16, 0LL, v17, v18, v19);
      std::vector<unsigned char>::_Reallocation_guard::~_Reallocation_guard(&v16);
    }
  }
}
