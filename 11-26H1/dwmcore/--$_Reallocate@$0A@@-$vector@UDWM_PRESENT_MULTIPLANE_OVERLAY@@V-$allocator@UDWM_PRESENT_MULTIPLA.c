/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800D6DA4
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXQEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@_K1@Z @ 0x180151414 (-_Change_array@-$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTIPLANE_OV.c)
 *     ??$_Uninitialized_move@PEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@YAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU1@0PEAU1@AEAV?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@0@@Z @ 0x1801A44F4 (--$_Uninitialized_move@PEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTIPLANE_.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1801A4FF8 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAA@XZ @ 0x18023921C (--1_Reallocation_guard@-$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@UDWM_PRESENT_MULTI.c)
 */

__int64 __fastcall std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 7;
  size_of = std::_Get_size_of_n<128>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = v6;
  v12[2] = *a2;
  v9 = *a1;
  v12[0] = a1;
  std::_Uninitialized_move<DWM_PRESENT_MULTIPLANE_OVERLAY *>(v9, v7, v6);
  v10 = *a2;
  v12[1] = 0LL;
  std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Change_array(a1, v8, v4, v10);
  return std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Reallocation_guard::~_Reallocation_guard(v12);
}
