/*
 * XREFs of ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801B589C
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801518B4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18021F828 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 *     ??$emplace_back@AEA_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAAEA_KAEA_K@Z @ 0x180243F38 (--$emplace_back@AEA_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAAEA_KAEA_K@Z.c)
 *     ?GetOverlayVisuals@COverlayContext@@QEBAXAEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180247790 (-GetOverlayVisuals@COverlayContext@@QEBAXAEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@st.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV?$vector@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@V?$allocator@U?$pair@PEAVCManipulation@@PEAVCInteraction@@@std@@@2@@std@@@Z @ 0x18028E2F4 (-ProcessSetManipulations@InteractionSourceManager@@QEAAXAEBV-$vector@U-$pair@PEAVCManipulation@@.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x180295918 (--1CFlipAwayFence@@QEAA@XZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAPEAPEAVCPrimitiveColor@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVCPrimitiveColor@@@0@@Z @ 0x1800FC2C0 (--$_Uninitialized_move@PEAPEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x180151340 (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18018EFBC (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA@XZ @ 0x180226CE8 (--1_Reallocation_guard@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@st.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
        void **a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  SIZE_T size_of; // rax
  __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  char *v16; // r8
  char *v17; // rsi
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - (__int64)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      0x1FFFFFFFFFFFFFFFLL,
      a2,
      a3,
      a4);
  v9 = v7 + 1;
  v10 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v10);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v12);
  v14 = *a3;
  v15 = (__int64)v13;
  v21[0] = a1;
  v16 = v13;
  v21[2] = v10;
  v17 = &v13[8 * v6];
  *(_QWORD *)v17 = v14;
  v18 = (__int64)a1[1];
  v19 = *a1;
  v23 = v17 + 8;
  v22 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CPrimitiveColor * *>(v19, a2, v13);
    v18 = (__int64)a1[1];
    v16 = v17 + 8;
    v19 = (void *)a2;
    v22 = (char *)v15;
  }
  std::_Uninitialized_move<CPrimitiveColor * *>(v19, v18, v16);
  v21[1] = 0LL;
  std::vector<CVectorShape *>::_Change_array((__int64)a1, v15, v9, v10);
  std::vector<CColorGradientStop *>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v17;
}
