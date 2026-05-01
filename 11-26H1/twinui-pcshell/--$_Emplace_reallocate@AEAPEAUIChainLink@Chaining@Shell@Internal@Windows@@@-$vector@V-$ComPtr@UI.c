/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1802FBA30
 * Callers:
 *     ??$emplace_back@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1802FBB64 (--$emplace_back@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@-$vector@V-$ComPtr@UIChainLi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x180219B3C (--$_Uninitialized_move@PEAV-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K1@Z @ 0x18022AFA8 (-_Change_array@-$vector@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskWin.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1802DDA24 (--1_Reallocation_guard@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$all.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::_Emplace_reallocate<Windows::Internal::Shell::Chaining::IChainLink * &>(
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
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 *v16; // r14
  _QWORD *v17; // rdx
  _QWORD *v18; // r8
  _QWORD *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-40h]
  __int64 *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
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
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21[0] = a1;
  v21[2] = v3;
  v16 = &v13[v5];
  *v16 = v14;
  v23 = v16 + 1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  v17 = (_QWORD *)a1[1];
  v18 = v15;
  v19 = (_QWORD *)*a1;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>>(
      v19,
      a2,
      v15);
    v17 = (_QWORD *)a1[1];
    v18 = v16 + 1;
    v19 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>>(
    v19,
    v17,
    v18);
  v21[1] = 0LL;
  std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Change_array(a1, (__int64)v15, v9, v3);
  std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v16;
}
