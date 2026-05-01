/*
 * XREFs of ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x18018149C
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180029C64 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x18002C2AC (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801812D0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@_K1@Z @ 0x1801EB1FC (-_Change_array@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAXQEAUguid@winrt@@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAURect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@YAPEAURect@Foundation@Windows@@QEAU123@0PEAU123@AEAV?$allocator@URect@Foundation@Windows@@@0@@Z @ 0x1802BDA2C (--$_Uninitialized_move@PEAURect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@XZ @ 0x180310764 (--1_Reallocation_guard@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@.c)
 */

_OWORD *__fastcall std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  __int128 v14; // xmm0
  _OWORD *v15; // r14
  __int64 v16; // rsi
  _OWORD *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  _OWORD *v23; // [rsp+38h] [rbp-40h]
  _OWORD *v24; // [rsp+40h] [rbp-38h]

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
  v21 = a1;
  v15 = (_OWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v22 = v3;
  v16 = v13;
  v23 = v15;
  v17 = (_OWORD *)v13;
  *v15 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v15 + 1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<Windows::Foundation::Rect *>(v19, a2, v13);
    v18 = a1[1];
    v17 = v15 + 1;
    v19 = a2;
    v23 = (_OWORD *)v16;
  }
  std::_Uninitialized_move<Windows::Foundation::Rect *>(v19, v18, v17);
  std::vector<winrt::guid>::_Change_array(a1, v16, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<Windows::Foundation::Rect>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v15;
}
