/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800568E0
 * Callers:
 *     ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056338 (-GetTightDirtyRects@-$CTargetDirtyBase@$07@@QEAA_NPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@.c)
 *     ?GetDirtyRects@COverlaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056520 (-GetDirtyRects@COverlaySwapChain@@UEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180172968 (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@AEAAXQEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@_K1@Z @ 0x180151600 (-_Change_array@-$vector@V-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@R.c)
 *     ??$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@YAPEAUFragmentStackEntry@CFragmentIterator@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentStackEntry@CFragmentIterator@@@0@@Z @ 0x18019B0FC (--$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntr.c)
 *     ??1_Simple_reallocation_guard@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18022F5A4 (--1_Simple_reallocation_guard@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<tagRECT>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = v6;
  v12[2] = *a2;
  v9 = *a1;
  v12[0] = a1;
  std::_Uninitialized_move<CFragmentIterator::FragmentStackEntry *>(v9, v7, v6);
  v10 = *a2;
  v12[1] = 0LL;
  std::vector<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>>::_Change_array(
    a1,
    v8,
    v4,
    v10);
  return std::vector<tagRECT>::_Simple_reallocation_guard::~_Simple_reallocation_guard(v12);
}
