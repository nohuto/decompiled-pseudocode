/*
 * XREFs of ??$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@?$vector@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@AEAAPEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x1801A8E60
 * Callers:
 *     ?RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8B30 (-RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@YAPEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@QEAU12@0PEAU12@AEAV?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@0@@Z @ 0x1801AB24C (--$_Uninitialized_move@PEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V-$.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1801B42E0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K1@Z @ 0x1801BF5D0 (-_Change_array@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@XZ @ 0x18025C9D0 (--1_Reallocation_guard@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@.c)
 */

char *__fastcall std::vector<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance>::_Emplace_reallocate<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance const &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4)
{
  __int64 v4; // rbx
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
  char *v18; // rsi
  _OWORD *v19; // r8
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v24; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h]
  char *v26; // [rsp+38h] [rbp-40h]
  _OWORD *v27; // [rsp+40h] [rbp-38h]

  v4 = 0x3FFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 6;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      a2,
      a3,
      a4);
  v10 = v7 + 1;
  v11 = (__int64)(a1[2] - *a1) >> 6;
  v12 = v11 >> 1;
  if ( v11 <= 0x3FFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v4);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v14);
  v16 = *a3;
  v24 = a1;
  v17 = &v15[v5 & 0xFFFFFFFFFFFFFFC0uLL];
  v25 = v4;
  v18 = v15;
  v26 = v17;
  v19 = v15;
  *(_OWORD *)v17 = v16;
  v20 = a3[1];
  v27 = v17 + 64;
  *((_OWORD *)v17 + 1) = v20;
  *((_OWORD *)v17 + 2) = a3[2];
  *((_OWORD *)v17 + 3) = a3[3];
  v21 = a1[1];
  v22 = *a1;
  if ( a2 != v21 )
  {
    std::_Uninitialized_move<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance *>(v22, a2, v15);
    v21 = a1[1];
    v19 = v17 + 64;
    v22 = a2;
    v26 = v18;
  }
  std::_Uninitialized_move<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance *>(v22, v21, v19);
  std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array(a1, v18, v10, v4, v24, 0LL, v25, v26, v27);
  std::vector<DISPLAYCONFIG_MODE_INFO>::_Reallocation_guard::~_Reallocation_guard(&v24);
  return v17;
}
