/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCCompositionSurfaceInfo@@@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180198D50
 * Callers:
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x180151698 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ??$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18022953C (--$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009DAC8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uer.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800D6E3C (-_Change_array@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18022A31C (--1_Reallocation_guard@-$vector@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Window.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::_Emplace_reallocate<CCompositionSurfaceInfo * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // r15
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  SIZE_T size_of; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 *v18; // r15
  __int64 *v19; // rdx
  __int64 *v20; // r8
  __int64 *v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-40h]
  _QWORD *v25; // [rsp+40h] [rbp-38h]

  v4 = 0x1FFFFFFFFFFFFFFFLL;
  v6 = a2 - *a1;
  v8 = a1[1] - *a1;
  if ( v8 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      a2,
      a3,
      a4);
  v10 = v8 + 1;
  v11 = a1[2] - *a1;
  v12 = v11 >> 1;
  if ( v11 <= 0x1FFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v4 = v12 + v11;
    if ( v12 + v11 < v10 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v4);
  v15 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v14);
  v16 = *a3;
  v17 = v15;
  v23[0] = a1;
  v23[2] = v4;
  v18 = &v15[v6];
  v25 = v18 + 1;
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    v18,
    v16);
  v19 = a1[1];
  v20 = v17;
  v21 = *a1;
  v24 = v18;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>>(
      v21,
      a2,
      v17);
    v19 = a1[1];
    v20 = v18 + 1;
    v21 = a2;
    v24 = v17;
  }
  std::_Uninitialized_move<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>>(
    v21,
    v19,
    v20);
  v23[1] = 0LL;
  std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::_Change_array(
    (__int64)a1,
    (__int64)v17,
    v10,
    v4);
  std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Reallocation_guard::~_Reallocation_guard(v23);
  return v18;
}
