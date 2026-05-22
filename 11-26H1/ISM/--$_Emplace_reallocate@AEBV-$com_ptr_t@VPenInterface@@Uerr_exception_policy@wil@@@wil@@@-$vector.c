/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800BCAF0
 * Callers:
 *     ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BD2E0 (-AttachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 *     ?AttachInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180194C8C (-AttachInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18008A168 (-_Change_array@-$vector@V-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180096D94 (--$_Uninitialized_move@PEAV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800B1C50 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<PenInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenInterface,wil::err_exception_policy> const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rsi
  __int64 *v16; // r15
  __int64 *v17; // rdx
  __int64 *v18; // r8
  __int64 *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
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
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21[0] = a1;
  v21[2] = v3;
  v16 = &v13[v5];
  v23 = v16 + 1;
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(v16, v14);
  v17 = *(__int64 **)(a1 + 8);
  v18 = v15;
  v19 = *(__int64 **)a1;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<PenInterface,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>(
      v19,
      a2,
      v15);
    v17 = *(__int64 **)(a1 + 8);
    v18 = v16 + 1;
    v19 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<wil::com_ptr_t<PenInterface,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<PenInterface,wil::err_exception_policy>>>(
    v19,
    v17,
    v18);
  v21[1] = 0LL;
  std::vector<wil::com_ptr_t<PenInterface,wil::err_exception_policy>>::_Change_array((__int64 **)a1, v15, v9, v3);
  std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v16;
}
