/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180100A44
 * Callers:
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x180100C18 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 *     _lambda_44fd5c58d02accc22ae075b126dea950_::operator() @ 0x180100D74 (_lambda_44fd5c58d02accc22ae075b126dea950_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x180043A80 (-_Change_array@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800AB24C (--$_Uninitialized_move@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISa.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D1DFC (--1_Reallocation_guard@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@st.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
        __int64 *a1,
        __int64 a2,
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
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-40h]
  __int64 *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
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
  *v16 = v14;
  v23 = v16 + 1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v16);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
      v19,
      a2,
      v15);
    v17 = a1[1];
    v18 = v16 + 1;
    v19 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
    v19,
    v17,
    v18);
  v21[1] = 0LL;
  std::vector<Microsoft::WRL::WeakRef>::_Change_array((__int64)a1, (__int64)v15, v9, v3);
  std::vector<Microsoft::WRL::WeakRef>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v16;
}
