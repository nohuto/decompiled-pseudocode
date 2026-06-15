/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F8DF4
 * Callers:
 *     _lambda_249a22bcff1aef3e1794295476d640d0_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x1800F86A0 (_lambda_249a22bcff1aef3e1794295476d640d0_--operator()_Microsoft--WRL--WeakRef_const__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x180043A80 (-_Change_array@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x1800AC3F4 (--$_Uninitialized_move@PEAVWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@st.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D1DFC (--1_Reallocation_guard@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-40h]
  _QWORD *v22; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = a1[2] - *a1;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = &v13[v6];
  v20[0] = a1;
  v20[2] = v8;
  v22 = v14 + 1;
  v15 = *a3;
  *v14 = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v21 = v14;
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL::WeakRef *>(v18, a2, v13);
    v21 = v13;
    v17 = v14 + 1;
    v16 = a1[1];
    v18 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::WeakRef *>(v18, v16, v17);
  v20[1] = 0LL;
  std::vector<Microsoft::WRL::WeakRef>::_Change_array((__int64)a1, (__int64)v13, v9, v8);
  std::vector<Microsoft::WRL::WeakRef>::_Reallocation_guard::~_Reallocation_guard((__int64)v20);
  return v14;
}
