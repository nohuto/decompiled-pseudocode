/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVISwapChainRealization@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVISwapChainRealization@@@Z @ 0x1801CEEB0
 * Callers:
 *     ??$emplace_back@AEAPEAVISwapChainRealization@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVISwapChainRealization@@@Z @ 0x180295F9C (--$emplace_back@AEAPEAVISwapChainRealization@@@-$vector@V-$com_ptr_t@VIOverlayPlaneResource@@Uer.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009DAC8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uer.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800D6E3C (-_Change_array@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18018EFBC (-_Calculate_growth@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18022A31C (--1_Reallocation_guard@-$vector@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Window.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IOverlayPlaneResource,wil::err_returncode_policy>>::_Emplace_reallocate<ISwapChainRealization * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  SIZE_T size_of; // rax
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *v13; // rbp
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<CMilPoint2F>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v19[0] = a1;
  v19[2] = v9;
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  v13 = &v12[a2 - v3];
  v14 = *a3;
  v21 = v13 + 1;
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    v13,
    (v14 + 16) & -(__int64)(v14 != 0));
  v15 = a1[1];
  v16 = v12;
  v17 = *a1;
  v20 = v13;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>>(
      v17,
      a2,
      v12);
    v15 = a1[1];
    v16 = v13 + 1;
    v17 = a2;
    v20 = v12;
  }
  std::_Uninitialized_move<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>>(
    v17,
    v15,
    v16);
  v19[1] = 0LL;
  std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::_Change_array(
    (__int64)a1,
    (__int64)v12,
    v8,
    v9);
  std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v13;
}
