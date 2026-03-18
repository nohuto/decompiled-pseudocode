/*
 * XREFs of ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x18023E898
 * Callers:
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x18003EFA8 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18023F808 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x180251E70 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1801D0068 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801E0BF8 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x1801E1ADC (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Uninitialized_move@PEAMV?$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV?$allocator@M@0@@Z @ 0x18021914C (--$_Uninitialized_move@PEAMV-$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV-$allocator@M@0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1802316F0 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(void **a1, __int64 a2, int *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  SIZE_T size_of; // rax
  __int64 v11; // rdx
  char *v12; // rax
  int v13; // ecx
  __int64 v14; // rdi
  char *v15; // r8
  char *v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  _DWORD *v22; // [rsp+40h] [rbp-38h]

  v5 = (a2 - (__int64)*a1) >> 2;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<float>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<4>(v9);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  v13 = *a3;
  v14 = (__int64)v12;
  v20[0] = a1;
  v15 = v12;
  v20[2] = v9;
  v16 = &v12[4 * v5];
  *(_DWORD *)v16 = v13;
  v17 = (__int64)a1[1];
  v18 = *a1;
  v22 = v16 + 4;
  v21 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<float *>(v18, a2, v12);
    v17 = (__int64)a1[1];
    v15 = v16 + 4;
    v18 = (void *)a2;
    v21 = (char *)v14;
  }
  std::_Uninitialized_move<float *>(v18, v17, v15);
  v20[1] = 0LL;
  std::vector<unsigned int>::_Change_array((__int64)a1, v14, v8, v9);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard((__int64)v20);
  return v16;
}
