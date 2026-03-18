/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801271B4
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180126E80 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0JA@@std@@YA_K_K@Z @ 0x18019E588 (--$_Get_size_of_n@$0JA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAXQEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K1@Z @ 0x1801B2180 (-_Change_array@-$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UDXGI_CHEC.c)
 *     ??$_Uninitialized_move@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@YAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU1@0PEAU1@AEAV?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@@Z @ 0x1801BD39C (--$_Uninitialized_move@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UDXGI_CH.c)
 *     ??1_Reallocation_guard@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@QEAA@XZ @ 0x1802A5A18 (--1_Reallocation_guard@-$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UD.c)
 */

__int64 __fastcall std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Reallocate<0>(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 v6; // rdx
  LPVOID v7; // rax
  __int64 v8; // rdx
  LPVOID v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0x8E38E38E38E38E39uLL * ((a1[1] - *a1) >> 4);
  size_of = std::_Get_size_of_n<144>(*a2);
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v6);
  v8 = a1[1];
  v9 = v7;
  v13[2] = *a2;
  v10 = *a1;
  v13[0] = a1;
  std::_Uninitialized_move<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>(v10, v8, v7);
  v11 = *a2;
  v13[1] = 0LL;
  std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Change_array(a1, v9, v4, v11);
  return std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Reallocation_guard::~_Reallocation_guard(v13);
}
