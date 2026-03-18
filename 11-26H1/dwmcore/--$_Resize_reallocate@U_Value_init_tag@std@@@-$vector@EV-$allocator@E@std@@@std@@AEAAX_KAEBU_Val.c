/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CA790
 * Callers:
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1801A4940 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?GetTipPoints@CGenericInkTipPointSource@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@PEAI11@Z @ 0x1801CA600 (-GetTipPoints@CGenericInkTipPointSource@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@PEAI11@Z.c)
 *     ?ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z @ 0x18026C720 (-ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z.c)
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x18026C8FC (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1801514A0 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x1801ABED8 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x1801AD0FC (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??1_Reallocation_guard@?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x18022FB94 (--1_Reallocation_guard@-$vector@EV-$allocator@E@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(void **a1, unsigned __int64 a2)
{
  signed __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  char *v7; // rax
  char *v8; // rdi
  char *v9; // rbp
  __int64 v10; // rdx
  _QWORD v12[6]; // [rsp+20h] [rbp-48h] BYREF

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v5 = std::vector<unsigned char>::_Calculate_growth(a1, a2);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(v5, v6);
  v12[0] = a1;
  v12[2] = v5;
  v8 = &v7[v4];
  v9 = v7;
  v12[3] = &v7[v4];
  memset_0(&v7[v4], 0, a2 - v4);
  v10 = (__int64)a1[1];
  v12[4] = &v8[a2 - v4];
  std::_Uninitialized_move<unsigned char *>(*a1, v10, v9);
  v12[1] = 0LL;
  std::vector<unsigned char>::_Change_array((__int64)a1, (__int64)v9, a2, v5);
  return std::vector<unsigned char>::_Reallocation_guard::~_Reallocation_guard(v12);
}
