/*
 * XREFs of ??$_Emplace_reallocate@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@AEAAPEAUD2D_POINT_2F@@QEAU2@AEAU2@@Z @ 0x1801B768C
 * Callers:
 *     ??$emplace_back@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@QEAAAEAUD2D_POINT_2F@@AEAU2@@Z @ 0x180228CEC (--$emplace_back@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@std@@@st.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAPEAPEAVCPrimitiveColor@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVCPrimitiveColor@@@0@@Z @ 0x1800FC2C0 (--$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180151340 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA@XZ @ 0x180226CE8 (--1_Reallocation_guard@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@st.c)
 */

char *__fastcall std::vector<D2D_POINT_2F>::_Emplace_reallocate<D2D_POINT_2F &>(
        void **a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r15
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  SIZE_T size_of; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // xmm0_8
  __int64 v17; // rdi
  char *v18; // r8
  char *v19; // r15
  __int64 v20; // rdx
  void *v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v24; // [rsp+38h] [rbp-40h]
  _QWORD *v25; // [rsp+40h] [rbp-38h]

  v4 = 0x1FFFFFFFFFFFFFFFLL;
  v6 = (a2 - (__int64)*a1) >> 3;
  v8 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v8 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      a2,
      a3,
      a4);
  v10 = v8 + 1;
  v11 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v12 = v11 >> 1;
  if ( v11 <= 0x1FFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v4);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v14);
  v16 = *a3;
  v17 = (__int64)v15;
  v23[0] = a1;
  v18 = v15;
  v23[2] = v4;
  v19 = &v15[8 * v6];
  *(_QWORD *)v19 = v16;
  v20 = (__int64)a1[1];
  v21 = *a1;
  v25 = v19 + 8;
  v24 = v19;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<CPrimitiveColor * *>(v21, a2, v15);
    v20 = (__int64)a1[1];
    v18 = v19 + 8;
    v21 = (void *)a2;
    v24 = (char *)v17;
  }
  std::_Uninitialized_move<CPrimitiveColor * *>(v21, v20, v18);
  v23[1] = 0LL;
  std::vector<CVectorShape *>::_Change_array((__int64)a1, v17, v10, v4);
  std::vector<CColorGradientStop *>::_Reallocation_guard::~_Reallocation_guard(v23);
  return v19;
}
