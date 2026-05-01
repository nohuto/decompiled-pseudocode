/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1803E13F4
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803E29A0 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x18022896C (--$_Uninitialized_move@PEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@@Z @ 0x1802A563C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAXPE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  __int64 *result; // rax
  void *v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]

  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  v14 = &v12[v5];
  try
  {
    v15 = *a3;
    *v14 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v21 = v14;
    v16 = *(_QWORD **)(a1 + 8);
    v17 = v13;
    v18 = *(_QWORD **)a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        v18,
        a2,
        v13);
      v21 = v13;
      v17 = v14 + 1;
      v16 = *(_QWORD **)(a1 + 8);
      v18 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
      v18,
      v16,
      v17);
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[v8];
    *(_QWORD *)(a1 + 16) = &v13[v7];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(v21, v14 + 1);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v7));
    throw;
  }
  return result;
}
