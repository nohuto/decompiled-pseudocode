/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800A75F4
 * Callers:
 *     ?AddWindowWorker@CUIHierarchy@@AEAAXV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z @ 0x1800A7E18 (-AddWindowWorker@CUIHierarchy@@AEAAXV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x1800999EC (--$_Uninitialized_move@PEAV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UCUIWindo.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800A7C2C (--1_Reallocation_guard@-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICur.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K1@Z @ 0x1800A9478 (-_Change_array@-$vector@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UCUIWindow@.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<CUIWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CUIWindow> const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 *v16; // r14
  _QWORD *v17; // rdx
  __int64 *v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 *v23; // [rsp+38h] [rbp-40h]
  __int64 *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
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
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21 = a1;
  v22 = v3;
  v16 = &v13[v5];
  *v16 = v14;
  v24 = v16 + 1;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v16);
  v17 = (_QWORD *)a1[1];
  v18 = v15;
  v19 = (_QWORD *)*a1;
  v23 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<CUIWindow> *,std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(
      v19,
      a2,
      v15);
    v17 = (_QWORD *)a1[1];
    v18 = v16 + 1;
    v19 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<CUIWindow> *,std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(
    v19,
    v17,
    v18);
  std::vector<Microsoft::WRL::ComPtr<CUIWindow>>::_Change_array(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v16;
}
