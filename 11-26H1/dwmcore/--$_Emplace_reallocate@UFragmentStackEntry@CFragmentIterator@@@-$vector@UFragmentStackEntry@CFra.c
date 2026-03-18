/*
 * XREFs of ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1801AC95C
 * Callers:
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1802B39A4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAXQEAUFragmentStackEntry@CFragmentIterator@@_K1@Z @ 0x180151210 (-_Change_array@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@.c)
 *     ??$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@YAPEAUFragmentStackEntry@CFragmentIterator@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentStackEntry@CFragmentIterator@@@0@@Z @ 0x18019B0FC (--$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntr.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Simple_reallocation_guard@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18022F5A4 (--1_Simple_reallocation_guard@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
        void **a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  SIZE_T size_of; // rax
  __int64 v14; // rdx
  char *v15; // rax
  __int128 v16; // xmm0
  char *v17; // r14
  __int64 v18; // rsi
  char *v19; // r8
  __int64 v20; // rdx
  void *v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v24; // [rsp+38h] [rbp-40h]
  _OWORD *v25; // [rsp+40h] [rbp-38h]

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - (_QWORD)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      a2,
      a3,
      a4);
  v10 = v7 + 1;
  v11 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v14);
  v16 = *a3;
  v23[0] = a1;
  v17 = &v15[v5 & 0xFFFFFFFFFFFFFFF0uLL];
  v23[2] = v4;
  v18 = (__int64)v15;
  v24 = v17;
  v19 = v15;
  *(_OWORD *)v17 = v16;
  v20 = (__int64)a1[1];
  v21 = *a1;
  v25 = v17 + 16;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<CFragmentIterator::FragmentStackEntry *>(v21, a2, v15);
    v20 = (__int64)a1[1];
    v19 = v17 + 16;
    v21 = (void *)a2;
    v24 = (char *)v18;
  }
  std::_Uninitialized_move<CFragmentIterator::FragmentStackEntry *>(v21, v20, v19);
  v23[1] = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Change_array((__int64)a1, v18, v10, v4);
  std::vector<tagRECT>::_Simple_reallocation_guard::~_Simple_reallocation_guard(v23);
  return v17;
}
