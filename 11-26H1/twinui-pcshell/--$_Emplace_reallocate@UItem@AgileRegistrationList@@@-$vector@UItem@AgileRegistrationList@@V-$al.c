/*
 * XREFs of ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x180084E60
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180084CE4 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAXQEAUItem@AgileRegistrationList@@_K1@Z @ 0x18008526C (-_Change_array@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x1801CD4A4 (--$_Uninitialized_move@PEAUItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA@XZ @ 0x1802DD9E8 (--1_Reallocation_guard@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistratio.c)
 */

unsigned __int64 __fastcall std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        _QWORD *a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  int v14; // ecx
  unsigned __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r11
  unsigned __int64 v21; // r10
  __int64 v22; // r10
  _QWORD *v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]
  unsigned __int64 v27; // [rsp+40h] [rbp-28h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v24 = a1;
  v25 = v3;
  v26 = v15;
  v16 = v13;
  *(_DWORD *)v15 = v14;
  v17 = *((_QWORD *)a3 + 1);
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)(v15 + 8) = v17;
  v18 = a1[1];
  v19 = *a1;
  v27 = v15 + 16;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<AgileRegistrationList::Item *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v20;
    v19 = a2;
    v26 = v21;
  }
  std::_Uninitialized_move<AgileRegistrationList::Item *>(v19, v18, v16);
  std::vector<AgileRegistrationList::Item>::_Change_array(a1, v22, v9, v3, v24, 0LL, v25, v26, v27);
  std::vector<AgileRegistrationList::Item>::_Reallocation_guard::~_Reallocation_guard(&v24);
  return v15;
}
