/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801DF634
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x18029A1C8 (--$emplace_back@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180217FA4 (-_Change_array@-$vector@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18021C6A4 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18029A678 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@w.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rsi
  _QWORD *v17; // r8
  char *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  char *v24; // [rsp+38h] [rbp-40h]
  _QWORD *v25; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a3;
  v16 = v14;
  *a3 = 0LL;
  v17 = v14;
  v22 = a1;
  v18 = &v14[8 * v5];
  v23 = v3;
  *(_QWORD *)v18 = v15;
  v19 = a1[1];
  v20 = *a1;
  v25 = v18 + 8;
  v24 = v18;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>>(
      v20,
      a2,
      v14);
    v19 = a1[1];
    v17 = v18 + 8;
    v20 = a2;
    v24 = v16;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>>(
    v20,
    v19,
    v17);
  std::vector<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>::_Change_array(
    a1,
    v16,
    v9,
    v3,
    v22,
    0LL,
    v23,
    v24,
    v25);
  std::vector<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>::_Reallocation_guard::~_Reallocation_guard(&v22);
  return v18;
}
