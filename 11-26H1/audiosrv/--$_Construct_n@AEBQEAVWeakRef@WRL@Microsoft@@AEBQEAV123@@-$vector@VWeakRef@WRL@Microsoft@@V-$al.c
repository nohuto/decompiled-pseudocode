/*
 * XREFs of ??$_Construct_n@AEBQEAVWeakRef@WRL@Microsoft@@AEBQEAV123@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAX_KAEBQEAVWeakRef@WRL@Microsoft@@1@Z @ 0x1801108A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Copy @ 0x1801144A0 (std--_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_--_Copy.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1?$_Tidy_guard@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x180110D5C (--1-$_Tidy_guard@V-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<Microsoft::WRL::WeakRef>::_Construct_n<Microsoft::WRL::WeakRef * const &,Microsoft::WRL::WeakRef * const &>(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  unsigned __int64 size_of; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 *i; // rdi
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v9;
    a1[1] = v9;
    a1[2] = &v9[a2];
    v10 = *a4;
    for ( i = *a3; i != v10; ++i )
    {
      v12 = *i;
      *v9 = *i;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      ++v9;
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v9, v9);
    a1[1] = v9;
    v13 = 0LL;
    std::_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>::~_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>(&v13);
  }
}
