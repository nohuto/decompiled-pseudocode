/*
 * XREFs of ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x180644B14
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B9C94 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAPEAURemoteSystem@RemoteSystemData@@QEAU12@0PEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806458A8 (--$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSyste.c)
 *     ??$construct@URemoteSystem@RemoteSystemData@@AEAU12@@?$_Default_allocator_traits@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@SAXAEAV?$allocator@URemoteSystem@RemoteSystemData@@@1@QEAURemoteSystem@RemoteSystemData@@AEAU34@@Z @ 0x180645D4C (--$construct@URemoteSystem@RemoteSystemData@@AEAU12@@-$_Default_allocator_traits@V-$allocator@UR.c)
 *     ??1_Reallocation_guard@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAA@XZ @ 0x18064A3B4 (--1_Reallocation_guard@-$vector@URemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@Remot.c)
 *     ?_Change_array@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAXQEAURemoteSystem@RemoteSystemData@@_K1@Z @ 0x180652B14 (-_Change_array@-$vector@URemoteSystem@RemoteSystemData@@V-$allocator@URemoteSystem@RemoteSystemD.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<RemoteSystemData::RemoteSystem>::_Emplace_reallocate<RemoteSystemData::RemoteSystem &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 5;
  v8 = 0x7FFFFFFFFFFFFFFLL;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = &v13[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  v20 = a1;
  v21 = v13;
  v22 = v8;
  v24 = v14 + 32;
  std::_Default_allocator_traits<std::allocator<RemoteSystemData::RemoteSystem>>::construct<RemoteSystemData::RemoteSystem,RemoteSystemData::RemoteSystem &>(
    v15,
    v14,
    a3);
  v23 = v14;
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<RemoteSystemData::RemoteSystem *>(v18, a2, v13);
    v23 = v13;
    v17 = v14 + 32;
    v16 = a1[1];
    v18 = a2;
  }
  std::_Uninitialized_move<RemoteSystemData::RemoteSystem *>(v18, v16, v17);
  v21 = 0LL;
  std::vector<RemoteSystemData::RemoteSystem>::_Change_array(a1, v13, v9, v8);
  std::vector<RemoteSystemData::RemoteSystem>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
