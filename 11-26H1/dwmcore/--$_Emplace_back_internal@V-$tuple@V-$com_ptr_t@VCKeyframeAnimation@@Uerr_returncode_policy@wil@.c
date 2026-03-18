/*
 * XREFs of ??$_Emplace_back_internal@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@AEAAX$$QEAV?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@1@@Z @ 0x180260138
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801B18E0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Growmap@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180261310 (-_Growmap@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::_Emplace_back_internal<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rsi
  SIZE_T size_of; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = a1[3] + a1[4];
  v6 = v4 & v5;
  if ( !*(_QWORD *)(a1[1] + 8 * (v4 & v5)) )
  {
    size_of = std::_Get_size_of_n<40>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v6) = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v8);
  }
  v9 = a2[2];
  v10 = *(_QWORD **)(a1[1] + 8 * (v5 & (a1[2] - 1LL)));
  a2[2] = 0LL;
  v11 = a2[1];
  a2[1] = 0LL;
  v12 = *a2;
  *a2 = 0LL;
  *v10 = v12;
  v10[1] = v11;
  v10[2] = v9;
  v13 = a2[3];
  a2[3] = 0LL;
  v10[3] = v13;
  result = a2[4];
  a2[4] = 0LL;
  v10[4] = result;
  ++a1[4];
  return result;
}
