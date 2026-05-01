/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x18030F7E8
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18004E77C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXQEAVString@Internal@Windows@@_K1@Z @ 0x18022B194 (-_Change_array@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0PEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1802C043C (--$_Uninitialized_move@PEAVString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1802DDA9C (--1_Reallocation_guard@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<Windows::Internal::String>::_Reallocate<0>(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  Windows::Internal::String *v6; // rax
  _QWORD *v7; // rdx
  Windows::Internal::String *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = (Windows::Internal::String *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = *(_QWORD **)(a1 + 8);
  v8 = v6;
  v11[2] = *a2;
  v9 = *(_QWORD **)a1;
  v11[0] = a1;
  std::_Uninitialized_move<Windows::Internal::String *>(v9, v7, v6);
  v10 = *a2;
  v11[1] = 0LL;
  std::vector<Windows::Internal::String>::_Change_array((Windows::Internal::String **)a1, v8, v4, v10);
  std::vector<unsigned short *>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}
