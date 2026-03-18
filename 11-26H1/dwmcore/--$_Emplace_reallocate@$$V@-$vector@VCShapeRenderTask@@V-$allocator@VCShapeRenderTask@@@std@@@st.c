/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x18019B2E0
 * Callers:
 *     ??$emplace_back@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAAEAVCShapeRenderTask@@XZ @ 0x1802AA6F8 (--$emplace_back@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@QEAA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x1801512A0 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

char *__fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<>(const void **a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  __int64 v4; // rdx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rdi
  void *v13; // rcx
  char *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v2 = *a1;
  v4 = (unsigned __int128)((a2 - (_BYTE *)*a1) * (__int128)0x4924924924924925LL) >> 64;
  v6 = ((unsigned __int64)v4 >> 63) + (v4 >> 4);
  v7 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x492492492492492LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      v4,
      0x492492492492492LL,
      v2);
  v8 = v7 + 1;
  v9 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - v2) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x492492492492492LL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x492492492492492LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x492492492492492LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(56 * v11, v10);
  v13 = v12;
  v14 = &v12[56 * v6];
  *(_DWORD *)v14 = 0;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v12, v16, a2 - v16);
    v13 = v14 + 56;
    v17 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v13, v16, v17);
  std::vector<CShapeRenderTask>::_Change_array((__int64)a1, (__int64)v12, v8, v11);
  return v14;
}
