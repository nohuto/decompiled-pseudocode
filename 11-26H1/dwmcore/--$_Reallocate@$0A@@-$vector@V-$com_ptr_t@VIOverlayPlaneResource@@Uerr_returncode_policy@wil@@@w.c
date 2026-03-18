/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800D71B8
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?reserve@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX_K@Z @ 0x1800D7170 (-reserve@-$vector@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009DAC8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uer.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800D6E3C (-_Change_array@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA@XZ @ 0x180226CE8 (--1_Reallocation_guard@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@st.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Reallocate<0>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // r9
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = (__int64)v6;
  v12[2] = *a2;
  v9 = *a1;
  v12[0] = a1;
  std::_Uninitialized_move<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>>(
    v9,
    v7,
    v6);
  v10 = *a2;
  v12[1] = 0LL;
  std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::_Change_array(
    (__int64)a1,
    v8,
    v4,
    v10);
  return std::vector<CColorGradientStop *>::_Reallocation_guard::~_Reallocation_guard(v12);
}
