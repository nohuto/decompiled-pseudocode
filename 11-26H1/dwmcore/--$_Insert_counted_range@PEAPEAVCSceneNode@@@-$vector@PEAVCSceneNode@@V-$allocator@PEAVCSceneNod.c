/*
 * XREFs of ??$_Insert_counted_range@PEAPEAVCSceneNode@@@?$vector@PEAVCSceneNode@@V?$allocator@PEAVCSceneNode@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCSceneNode@@@std@@@std@@@1@PEAPEAVCSceneNode@@_K@Z @ 0x1801E7940
 * Callers:
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x180209630 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180151340 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<CSceneNode *>::_Insert_counted_range<CSceneNode * *>(
        _QWORD *a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rsi
  _BYTE *v6; // r12
  __int64 v8; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rbp
  char *v16; // r15
  size_t v17; // r8
  const void *v18; // rdx
  char *v19; // rcx
  signed __int64 v20; // r15
  unsigned __int64 v21; // rbp
  char *v22; // rdi
  __int64 v23; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = (_BYTE *)a1[1];
    v6 = (_BYTE *)*a1;
    v8 = a1[2];
    if ( a4 <= (v8 - (__int64)v4) >> 3 )
    {
      v20 = 8 * a4;
      v21 = (v4 - a2) >> 3;
      if ( a4 >= v21 )
      {
        v22 = &a2[v20];
        memmove_0(&a2[v20], a2, v4 - a2);
        a1[1] = &v22[8 * v21];
      }
      else
      {
        memmove_0(v4, &v4[-v20], 8 * a4);
        a1[1] = &v4[8 * (v20 >> 3)];
        memmove_0(&a2[v20], a2, &v4[-v20] - a2);
      }
      memmove_0(a2, a3, v20);
    }
    else
    {
      v11 = (v4 - v6) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v11 )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v12 = a4 + v11;
      v13 = (v8 - (__int64)v6) >> 3;
      v25 = v12;
      v14 = v13 >> 1;
      if ( v13 <= 0x1FFFFFFFFFFFFFFFLL - (v13 >> 1) )
      {
        v15 = v12;
        if ( v14 + v13 >= v12 )
          v15 = v14 + v13;
        if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
          std::_Throw_bad_array_new_length();
      }
      else
      {
        v15 = 0x1FFFFFFFFFFFFFFFLL;
      }
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(8 * v15, v12);
      v23 = (a2 - v6) >> 3;
      memmove_0(&v16[8 * v23], a3, 8 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v17 = v4 - v6;
        v18 = v6;
        v19 = v16;
      }
      else
      {
        memmove_0(v16, v6, a2 - v6);
        v17 = v4 - a2;
        v18 = a2;
        v19 = &v16[8 * a4 + 8 * v23];
      }
      memmove_0(v19, v18, v17);
      std::vector<CVectorShape *>::_Change_array((__int64)a1, (__int64)v16, v25, v15);
    }
  }
}
