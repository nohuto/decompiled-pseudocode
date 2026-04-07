/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9BC0
 * Callers:
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800DC210 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800DC570 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DC890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18008AA1C (-_Change_array@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800BDA6C (--$_Uninitialized_move@PEAV-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800BDAF8 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 */

CBaseObject **__fastcall std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
        __int64 a1,
        CBaseObject **a2,
        CBaseObject **a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  CBaseObject **v13; // rax
  CBaseObject *v14; // rcx
  __int64 v15; // rsi
  CBaseObject **v16; // r8
  CBaseObject **v17; // r15
  CBaseObject **v18; // rdx
  CBaseObject **v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  CBaseObject **v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
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
  v13 = (CBaseObject **)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64)v13;
  *a3 = 0LL;
  v16 = v13;
  v21[0] = a1;
  v17 = &v13[v5];
  v21[2] = v3;
  *v17 = v14;
  v18 = *(CBaseObject ***)(a1 + 8);
  v19 = *(CBaseObject ***)a1;
  v23 = v17 + 1;
  v22 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CVisual,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
      v19,
      a2,
      v13);
    v18 = *(CBaseObject ***)(a1 + 8);
    v16 = v17 + 1;
    v19 = a2;
    v22 = (CBaseObject **)v15;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CVisual,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
    v19,
    v18,
    v16);
  v21[1] = 0LL;
  std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Change_array(a1, v15, v9, v3);
  std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v17;
}
