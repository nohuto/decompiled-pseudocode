/*
 * XREFs of ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x18030F4FC
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18004E77C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ?push_back@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAX$$QEAVString@Internal@Windows@@@Z @ 0x1801C5E40 (-push_back@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXQEAVString@Internal@Windows@@_K1@Z @ 0x18022B194 (-_Change_array@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1802C043C (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180310728 (--1_Reallocation_guard@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@.c)
 */

_QWORD *__fastcall std::vector<Windows::Internal::String>::_Emplace_reallocate<Windows::Internal::String>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  Windows::Internal::String *v13; // rax
  __int64 v14; // rcx
  Windows::Internal::String *v15; // rsi
  Windows::Internal::String *v16; // r8
  _QWORD *v17; // r15
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  Windows::Internal::String *v22; // [rsp+38h] [rbp-40h]
  _QWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
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
  v13 = (Windows::Internal::String *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21[0] = a1;
  v16 = v13;
  v21[2] = v3;
  v17 = (_QWORD *)((char *)v13 + 8 * v5);
  *v17 = v14;
  *a3 = 0LL;
  v18 = *(_QWORD **)(a1 + 8);
  v19 = *(_QWORD **)a1;
  v23 = v17 + 1;
  v22 = (Windows::Internal::String *)v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<Windows::Internal::String *>(v19, a2, v13);
    v18 = *(_QWORD **)(a1 + 8);
    v16 = (Windows::Internal::String *)(v17 + 1);
    v19 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<Windows::Internal::String *>(v19, v18, v16);
  v21[1] = 0LL;
  std::vector<Windows::Internal::String>::_Change_array((Windows::Internal::String **)a1, v15, v9, v3);
  std::vector<Windows::Internal::String>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v17;
}
