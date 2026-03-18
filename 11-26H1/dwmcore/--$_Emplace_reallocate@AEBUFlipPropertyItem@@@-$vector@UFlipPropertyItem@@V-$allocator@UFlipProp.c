/*
 * XREFs of ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1801AB130
 * Callers:
 *     ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801AADE0 (-CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z.c)
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1801FCCF0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?SendWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJXZ @ 0x180257DEC (-SendWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAUFlipPropertyItem@@_K1@Z @ 0x1801B3404 (-_Change_array@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAU.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B41F4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEBA_K_K@Z @ 0x1801B4A64 (-_Calculate_growth@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@AEBA_.c)
 *     ??$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@YAPEAU_DWMCaptureWindowInformation@@QEAU1@0PEAU1@AEAV?$allocator@U_DWMCaptureWindowInformation@@@0@@Z @ 0x1801B4AA0 (--$_Uninitialized_move@PEAU_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformat.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x1802461F4 (--1_Reallocation_guard@-$vector@UScribbleFrame@CComputeScribbleScheduler@@V-$allocator@UScribble.c)
 */

char *__fastcall std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  SIZE_T size_of; // rax
  __int64 v12; // rdx
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // rdi
  char *v16; // rsi
  _OWORD *v17; // r8
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-48h]
  char *v24; // [rsp+38h] [rbp-40h]
  _OWORD *v25; // [rsp+40h] [rbp-38h]

  v5 = a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      0x7FFFFFFFFFFFFFFLL,
      a2,
      a3,
      a4);
  v9 = v7 + 1;
  v10 = std::vector<FlipPropertyItem>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<32>(v10);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v12);
  v14 = *a3;
  v22 = a1;
  v15 = &v13[v5 & 0xFFFFFFFFFFFFFFE0uLL];
  v23 = v10;
  v16 = v13;
  v24 = v15;
  v17 = v13;
  *(_OWORD *)v15 = v14;
  v18 = a3[1];
  v25 = v15 + 32;
  *((_OWORD *)v15 + 1) = v18;
  v19 = a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v20, a2, v13);
    v19 = a1[1];
    v17 = v15 + 32;
    v20 = a2;
    v24 = v16;
  }
  std::_Uninitialized_move<_DWMCaptureWindowInformation *>(v20, v19, v17);
  std::vector<FlipPropertyItem>::_Change_array(a1, v16, v9, v10, v22, 0LL, v23, v24, v25);
  std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Reallocation_guard::~_Reallocation_guard(&v22);
  return v15;
}
