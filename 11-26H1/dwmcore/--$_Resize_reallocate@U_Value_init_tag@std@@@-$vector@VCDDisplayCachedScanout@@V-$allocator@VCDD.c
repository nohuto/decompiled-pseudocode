/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180299DC8
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034B8C (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801B18E0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAVCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@QEAV1@0PEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180299F30 (--$_Uninitialized_move@PEAVCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@PEAV1@_KAEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180299FBC (--$_Uninitialized_value_construct_n@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDi.c)
 *     ??1_Reallocation_guard@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAA@XZ @ 0x18029A6F0 (--1_Reallocation_guard@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@.c)
 *     ?_Change_array@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAXQEAVCDDisplayCachedScanout@@_K1@Z @ 0x18029B34C (-_Change_array@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@st.c)
 */

__int64 __fastcall std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rdx
  char *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  CDDisplayCachedScanout *v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]

  v2 = 0x666666666666666LL;
  if ( a2 > 0x666666666666666LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v5 = a1[1] - *a1;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v7 = 0xCCCCCCCCCCCCCCCDuLL * (v5 >> 3);
  v8 = v6 >> 1;
  if ( v6 <= 0x666666666666666LL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<40>(v2);
  v16[0] = a1;
  v16[2] = v2;
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v10);
  v17 = (CDDisplayCachedScanout *)&v11[40 * v7];
  v12 = std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>(v17);
  v13 = a1[1];
  v14 = *a1;
  v18 = v12;
  std::_Uninitialized_move<CDDisplayCachedScanout *>(v14, v13, v11);
  std::vector<CDDisplayCachedScanout>::_Change_array(a1, v11, a2, v2, a1, 0LL, v2, v17);
  return std::vector<CDDisplayCachedScanout>::_Reallocation_guard::~_Reallocation_guard(v16);
}
