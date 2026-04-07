/*
 * XREFs of ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800613E0
 * Callers:
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800661A8 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800682D4 (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180062ED8 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x180095980 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1800959C0 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180096034 (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ?_Change_array@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@AEAAXQEAPEAVCAnimatedTransitionVisual@@_K1@Z @ 0x180096ECC (-_Change_array@-$vector@PEAVCAnimatedTransitionVisual@@V-$allocator@PEAVCAnimatedTransitionVisua.c)
 */

__int64 __fastcall std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(
        void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 size_of; // rax
  __int64 v11; // rdi
  _QWORD *v12; // r14
  void *v13; // rcx

  v3 = *a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (_QWORD *)(v11 + 8 * ((a2 - v3) >> 3));
  *v12 = *a3;
  v13 = *a1;
  if ( a2 == a1[1] )
  {
    std::_Copy_memmove<tagRECT *,tagRECT *>(v13);
  }
  else
  {
    std::_Uninitialized_move<CDWMDisplay const * *>(v13, a2, v11);
    std::_Uninitialized_move<CDWMDisplay const * *>(a2, a1[1], v12 + 1);
  }
  std::vector<CAnimatedTransitionVisual *>::_Change_array(a1, v11, v8, v9);
  return v11 + 8 * ((a2 - v3) >> 3);
}
