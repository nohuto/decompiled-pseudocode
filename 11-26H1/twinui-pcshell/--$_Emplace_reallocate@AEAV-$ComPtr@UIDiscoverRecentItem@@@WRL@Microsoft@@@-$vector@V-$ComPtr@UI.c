/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1803EAA38
 * Callers:
 *     ??$emplace_back@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@AEAV234@@Z @ 0x1803EB388 (--$emplace_back@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIDiscove.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x180219B90 (--$_Uninitialized_move@PEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1803EB78C (--1_Reallocation_guard@-$vector@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V-$allocator@V-$.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@_K1@Z @ 0x1803ED6B8 (-_Change_array@-$vector@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  _QWORD *v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = &v13[v6];
  v20 = a1;
  v21 = v8;
  v23 = v14 + 1;
  v15 = *a3;
  *v14 = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v22 = v14;
  v16 = (_QWORD *)a1[1];
  v17 = v13;
  v18 = (_QWORD *)*a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
      v18,
      a2,
      v13);
    v22 = v13;
    v17 = v14 + 1;
    v16 = (_QWORD *)a1[1];
    v18 = a2;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
    v18,
    v16,
    v17);
  std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Change_array(a1, v13, v9, v8, v20, 0LL, v21, v22, v23);
  std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
