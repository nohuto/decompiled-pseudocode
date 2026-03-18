/*
 * XREFs of ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@AEBU2@@Z @ 0x18019B164
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXQEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@_K1@Z @ 0x180151414 (-_Change_array@-$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTIPLANE_OV.c)
 *     ??$_Uninitialized_move@PEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@YAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU1@0PEAU1@AEAV?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@0@@Z @ 0x1801A44F4 (--$_Uninitialized_move@PEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTIPLANE_.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1801A4FF8 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAA@XZ @ 0x18023921C (--1_Reallocation_guard@-$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTI.c)
 */

char *__fastcall std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
        __int64 *a1,
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
  __int64 v18; // rsi
  _OWORD *v19; // r8
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v24[3]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD *v25; // [rsp+38h] [rbp-40h]
  _OWORD *v26; // [rsp+40h] [rbp-38h]

  v4 = 0x1FFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 7;
  if ( v7 == 0x1FFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      a2,
      a3,
      a4);
  v10 = v7 + 1;
  v11 = (a1[2] - *a1) >> 7;
  v12 = v11 >> 1;
  if ( v11 <= 0x1FFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<128>(v4);
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v14);
  v16 = *a3;
  v24[0] = a1;
  v17 = &v15[v5 & 0xFFFFFFFFFFFFFF80uLL];
  v24[2] = v4;
  v18 = (__int64)v15;
  v25 = v17;
  v19 = v15;
  *(_OWORD *)v17 = v16;
  v20 = a3[1];
  v26 = v17 + 128;
  *((_OWORD *)v17 + 1) = v20;
  *((_OWORD *)v17 + 2) = a3[2];
  *((_OWORD *)v17 + 3) = a3[3];
  *((_OWORD *)v17 + 4) = a3[4];
  *((_OWORD *)v17 + 5) = a3[5];
  *((_OWORD *)v17 + 6) = a3[6];
  *((_OWORD *)v17 + 7) = a3[7];
  v21 = a1[1];
  v22 = *a1;
  if ( a2 != v21 )
  {
    std::_Uninitialized_move<DWM_PRESENT_MULTIPLANE_OVERLAY *>(v22, a2, v15);
    v21 = a1[1];
    v19 = v17 + 128;
    v22 = a2;
    v25 = (_OWORD *)v18;
  }
  std::_Uninitialized_move<DWM_PRESENT_MULTIPLANE_OVERLAY *>(v22, v21, v19);
  v24[1] = 0LL;
  std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Change_array((__int64)a1, v18, v10, v4);
  std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Reallocation_guard::~_Reallocation_guard(v24);
  return v17;
}
