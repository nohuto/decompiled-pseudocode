/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@QEAV21@AEBV21@@Z @ 0x180241638
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1802251A4 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049AF88 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x180090FAC (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UGameMruItem@@@2@_K1@Z @ 0x18013A720 (-_Change_array@-$vector@V-$shared_ptr@UGameMruItem@@@std@@V-$allocator@V-$shared_ptr@UGameMruIte.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$shared_ptr@VCAppThumbnailWindow@@@std@@V?$allocator@V?$shared_ptr@VCAppThumbnailWindow@@@std@@@2@@std@@QEAA@XZ @ 0x180317A08 (--1_Reallocation_guard@-$vector@V-$shared_ptr@VCAppThumbnailWindow@@@std@@V-$allocator@V-$shared.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::_Emplace_reallocate<std::shared_ptr<PenWorkspace::Discover::AppUsageData> const &>(
        __int64 *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rsi
  char *v16; // rdx
  _QWORD *v17; // r8
  char *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-40h]
  _QWORD *v22; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*a1];
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
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20[0] = a1;
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v20[2] = v3;
  v15 = (_QWORD *)v13;
  v22 = v14 + 2;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v14, a3);
  v16 = (char *)a1[1];
  v17 = v15;
  v18 = (char *)*a1;
  v21 = v14;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
      v18,
      a2,
      v15);
    v16 = (char *)a1[1];
    v17 = v14 + 2;
    v18 = a2;
    v21 = v15;
  }
  std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
    v18,
    v16,
    v17);
  v20[1] = 0LL;
  std::vector<std::shared_ptr<GameMruItem>>::_Change_array(a1, (__int64)v15, v9, v3);
  std::vector<std::shared_ptr<CAppThumbnailWindow>>::_Reallocation_guard::~_Reallocation_guard(v20);
  return v14;
}
