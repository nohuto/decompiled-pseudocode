/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800615C8
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x180045388 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DF8C0 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180062ED8 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180063EE8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x180095980 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x1800959C0 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@AEAAXQEAPEAVCAnimatedTransitionVisual@@_K1@Z @ 0x180096ECC (-_Change_array@-$vector@PEAVCAnimatedTransitionVisual@@V-$allocator@PEAVCAnimatedTransitionVisua.c)
 */

_QWORD *__fastcall std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rsi
  _QWORD *v14; // r14
  void *v15; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + 8 * v5);
  *v14 = *a3;
  v15 = *(void **)a1;
  if ( a2 == *(_QWORD *)(a1 + 8) )
  {
    std::_Copy_memmove<tagRECT *,tagRECT *>(v15);
  }
  else
  {
    std::_Uninitialized_move<CDWMDisplay const * *>(v15, a2, v13);
    std::_Uninitialized_move<CDWMDisplay const * *>(a2, *(_QWORD *)(a1 + 8), v14 + 1);
  }
  std::vector<CAnimatedTransitionVisual *>::_Change_array(a1, v13, v9, v3);
  return v14;
}
