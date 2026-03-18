/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXAEA_K@Z @ 0x180034298
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180033A40 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXQEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_K1@Z @ 0x180192278 (-_Change_array@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULTIPLAN.c)
 *     ??$_Uninitialized_move@PEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@YAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU1@0PEAU1@AEAV?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@0@@Z @ 0x1801A4F9C (--$_Uninitialized_move@PEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULTIPL.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAA@XZ @ 0x1802A5A44 (--1_Reallocation_guard@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_M.c)
 */

__int64 __fastcall std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0xF0F0F0F0F0F0F0F1uLL * ((a1[1] - *a1) >> 3);
  if ( *a2 > 0x1E1E1E1E1E1E1E1uLL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(136LL * *a2);
  v6 = a1[1];
  v7 = v5;
  v11[2] = *a2;
  v8 = *a1;
  v11[0] = a1;
  std::_Uninitialized_move<_DXGI_PRESENT_MULTIPLANE_OVERLAY *>(v8, v6, v5);
  v9 = *a2;
  v11[1] = 0LL;
  std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Change_array(a1, v7, v4, v9);
  return std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Reallocation_guard::~_Reallocation_guard(v11);
}
