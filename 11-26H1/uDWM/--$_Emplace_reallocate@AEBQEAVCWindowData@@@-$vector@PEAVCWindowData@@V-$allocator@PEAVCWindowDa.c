/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18009D124
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x18002B330 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800760C0 (-OnProcessDisconnected@CCaptureManager@@UEAAJK@Z.c)
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18009E9D0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 *     ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z @ 0x1800A2D40 (-StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DC890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ?_Change_array@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@AEAAXQEAPEAVCAnimatedTransitionVisual@@_K1@Z @ 0x180089B68 (-_Change_array@-$vector@PEAVCAnimatedTransitionVisual@@V-$allocator@PEAVCAnimatedTransitionVisua.c)
 *     ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x18009D780 (--$_Uninitialized_move@PEAPEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCD.c)
 *     ??1_Reallocation_guard@?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAA@XZ @ 0x18009E548 (--1_Reallocation_guard@-$vector@UDWM_CAPTURE_TOKEN@@V-$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@.c)
 */

char *__fastcall std::vector<CWindowData *>::_Emplace_reallocate<CWindowData * const &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // r8
  char *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength((const char *)a1);
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
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64)v13;
  v21[0] = a1;
  v16 = v13;
  v21[2] = v3;
  v17 = &v13[8 * v5];
  *(_QWORD *)v17 = v14;
  v18 = *(_QWORD *)(a1 + 8);
  v19 = *(_QWORD *)a1;
  v23 = v17 + 8;
  v22 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CDWMDisplay const * *>(v19, a2, v13);
    v18 = *(_QWORD *)(a1 + 8);
    v16 = v17 + 8;
    v19 = a2;
    v22 = (_QWORD *)v15;
  }
  std::_Uninitialized_move<CDWMDisplay const * *>(v19, v18, v16);
  v21[1] = 0LL;
  std::vector<CAnimatedTransitionVisual *>::_Change_array(a1, v15, v9, v3);
  std::vector<DWM_CAPTURE_TOKEN>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v17;
}
