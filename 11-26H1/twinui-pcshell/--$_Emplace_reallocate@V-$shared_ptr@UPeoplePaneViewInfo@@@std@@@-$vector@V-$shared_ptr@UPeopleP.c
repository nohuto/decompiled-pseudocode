/*
 * XREFs of ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x180409958
 * Callers:
 *     ?push_back@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@2@@Z @ 0x18040DE24 (-push_back@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeopleP.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x180090FAC (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UGameMruItem@@@2@_K1@Z @ 0x18013A720 (-_Change_array@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruIte.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801F9A20 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$shared_ptr@VCAppThumbnailWindow@@@std@@V?$allocator@V?$shared_ptr@VCAppThumbnailWindow@@@std@@@2@@std@@QEAA@XZ @ 0x180317A08 (--1_Reallocation_guard@-$vector@V-$shared_ptr@VCAppThumbnailWindow@@@std@@V-$allocator@V-$shared.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned __int64 size_of; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // r8
  char *v15; // rdx
  char *v16; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-40h]
  _QWORD *v20; // [rsp+40h] [rbp-38h]

  v4 = (unsigned __int64)&a2[-*a1];
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v18[0] = a1;
  v18[2] = v9;
  v12 = (_QWORD *)((char *)v11 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v13 = (__int64)v11;
  v19 = v12;
  v14 = v11;
  *v12 = 0LL;
  v12[1] = 0LL;
  *v12 = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v15 = (char *)a1[1];
  v16 = (char *)*a1;
  v20 = v12 + 2;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
      v16,
      a2,
      v11);
    v15 = (char *)a1[1];
    v14 = v12 + 2;
    v16 = a2;
    v19 = (_QWORD *)v13;
  }
  std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
    v16,
    v15,
    v14);
  v18[1] = 0LL;
  std::vector<std::shared_ptr<GameMruItem>>::_Change_array(a1, v13, v8, v9);
  std::vector<std::shared_ptr<CAppThumbnailWindow>>::_Reallocation_guard::~_Reallocation_guard((__int64)v18);
  return v12;
}
