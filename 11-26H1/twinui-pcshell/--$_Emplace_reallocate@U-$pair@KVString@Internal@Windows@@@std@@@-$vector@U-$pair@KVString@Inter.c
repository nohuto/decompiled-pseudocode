/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@KVString@Internal@Windows@@@std@@@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAPEAU?$pair@KVString@Internal@Windows@@@1@QEAU21@$$QEAU21@@Z @ 0x18030F3C0
 * Callers:
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x18004F948 (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXQEAU?$pair@KVString@Internal@Windows@@@2@_K1@Z @ 0x180202230 (-_Change_array@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@I.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@YAPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x18020B410 (--$_Uninitialized_move@PEAU-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1803106EC (--1_Reallocation_guard@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KV.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Emplace_reallocate<std::pair<unsigned long,Windows::Internal::String>>(
        __int64 *a1,
        _QWORD *a2,
        int *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  int v14; // ecx
  char *v15; // r14
  __int64 v16; // rsi
  char *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v21[0] = a1;
  v16 = (__int64)v13;
  v21[2] = v3;
  v22 = (__int64)v15;
  v17 = v13;
  *(_DWORD *)v15 = v14;
  *((_QWORD *)v15 + 1) = *((_QWORD *)a3 + 1);
  *((_QWORD *)a3 + 1) = 0LL;
  v18 = (_QWORD *)a1[1];
  v19 = (_QWORD *)*a1;
  v23 = v15 + 16;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<std::pair<unsigned long,Windows::Internal::String> *,std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
      v19,
      a2,
      v13);
    v18 = (_QWORD *)a1[1];
    v17 = v15 + 16;
    v19 = a2;
    v22 = v16;
  }
  std::_Uninitialized_move<std::pair<unsigned long,Windows::Internal::String> *,std::allocator<std::pair<unsigned long,Windows::Internal::String>>>(
    v19,
    v18,
    v17);
  v21[1] = 0LL;
  std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Change_array(a1, v16, v9, v3);
  std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v15;
}
