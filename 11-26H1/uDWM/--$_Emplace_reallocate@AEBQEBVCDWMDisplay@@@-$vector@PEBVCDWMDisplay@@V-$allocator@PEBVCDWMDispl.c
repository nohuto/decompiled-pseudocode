/*
 * XREFs of ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B2990
 * Callers:
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006D24 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180058214 (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1800884DC (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ?_Change_array@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@AEAAXQEAPEAVCAnimatedTransitionVisual@@_K1@Z @ 0x180089B68 (-_Change_array@-$vector@PEAVCAnimatedTransitionVisual@@V-$allocator@PEAVCAnimatedTransitionVisua.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x18009D780 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ??1_Reallocation_guard@?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAA@XZ @ 0x18009E548 (--1_Reallocation_guard@-$vector@UDWM_CAPTURE_TOKEN@@V-$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@.c)
 */

char *__fastcall std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(
        void **a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  char *v14; // r8
  char *v15; // rsi
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]

  v5 = (a2 - (__int64)*a1) >> 3;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = (__int64)v11;
  v19[0] = a1;
  v14 = v11;
  v19[2] = v9;
  v15 = &v11[8 * v5];
  *(_QWORD *)v15 = v12;
  v16 = (__int64)a1[1];
  v17 = *a1;
  v21 = v15 + 8;
  v20 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CDWMDisplay const * *>(v17, a2, v11);
    v16 = (__int64)a1[1];
    v14 = v15 + 8;
    v17 = (void *)a2;
    v20 = (char *)v13;
  }
  std::_Uninitialized_move<CDWMDisplay const * *>(v17, v16, v14);
  v19[1] = 0LL;
  std::vector<CAnimatedTransitionVisual *>::_Change_array((__int64)a1, v13, v8, v9);
  std::vector<DWM_CAPTURE_TOKEN>::_Reallocation_guard::~_Reallocation_guard((__int64)v19);
  return v15;
}
