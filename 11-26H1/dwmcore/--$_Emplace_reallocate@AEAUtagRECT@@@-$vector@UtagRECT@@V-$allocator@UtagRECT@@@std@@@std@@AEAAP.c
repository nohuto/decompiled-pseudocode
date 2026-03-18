/*
 * XREFs of ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801E56BC
 * Callers:
 *     ??$emplace_back@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEAU2@@Z @ 0x1802346E0 (--$emplace_back@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagR.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@AEAAXQEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@_K1@Z @ 0x180151600 (-_Change_array@-$vector@V-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@R.c)
 *     ??$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@YAPEAUFragmentStackEntry@CFragmentIterator@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentStackEntry@CFragmentIterator@@@0@@Z @ 0x18019B0FC (--$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntr.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Calculate_growth@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z @ 0x1801D5BE4 (-_Calculate_growth@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??1_Simple_reallocation_guard@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18022F5A4 (--1_Simple_reallocation_guard@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(void **a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  SIZE_T size_of; // rax
  __int64 v11; // rdx
  char *v12; // rax
  __int128 v13; // xmm0
  char *v14; // rdi
  __int64 v15; // rsi
  char *v16; // r8
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  _OWORD *v22; // [rsp+40h] [rbp-38h]

  v4 = a2 - (_QWORD)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<tagRECT>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  v13 = *a3;
  v20[0] = a1;
  v14 = &v12[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v20[2] = v9;
  v15 = (__int64)v12;
  v21 = v14;
  v16 = v12;
  *(_OWORD *)v14 = v13;
  v17 = (__int64)a1[1];
  v18 = *a1;
  v22 = v14 + 16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CFragmentIterator::FragmentStackEntry *>(v18, a2, v12);
    v17 = (__int64)a1[1];
    v16 = v14 + 16;
    v18 = (void *)a2;
    v21 = (char *)v15;
  }
  std::_Uninitialized_move<CFragmentIterator::FragmentStackEntry *>(v18, v17, v16);
  v20[1] = 0LL;
  std::vector<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>>::_Change_array(
    (__int64)a1,
    v15,
    v8,
    v9);
  std::vector<tagRECT>::_Simple_reallocation_guard::~_Simple_reallocation_guard(v20);
  return v14;
}
