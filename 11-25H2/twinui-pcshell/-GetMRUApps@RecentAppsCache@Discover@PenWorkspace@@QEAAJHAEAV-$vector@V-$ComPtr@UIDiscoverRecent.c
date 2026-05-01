/*
 * XREFs of ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803E29A0
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1803DF7D0 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x180028F3C (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18002A0C0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180234740 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1803E13F4 (--$_Emplace_reallocate@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1803E21CC (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803E2618 (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetMRUApps(RTL_SRWLOCK *this, int a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  int v4; // r13d
  PenWorkspace::Discover::RecentAppsCache *v5; // r14
  int SortedAppList; // esi
  __int64 v7; // rdx
  void *v8; // rbx
  void *v10; // rsi
  __int64 v11; // r12
  unsigned __int128 v12; // kr10_16
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  unsigned __int128 v15; // kr20_16
  const WCHAR **v16; // rax
  _QWORD *v17; // rax
  const char *v18; // r9
  _QWORD *v19; // rdx
  _QWORD *v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+38h] [rbp-70h] BYREF
  __int64 v22; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int128 v23; // [rsp+58h] [rbp-50h] BYREF
  __int64 v24; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v29; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = (PenWorkspace::Discover::RecentAppsCache *)this;
  v23 = 0LL;
  v24 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64)&v23);
  if ( SortedAppList < 0 )
  {
    v7 = 177LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    v8 = (void *)v23;
    if ( (_QWORD)v23 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v23, *((__int64 *)&v23 + 1));
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v24 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return (unsigned int)SortedAppList;
  }
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::EnsureUnifiedTileManager(v5);
  if ( SortedAppList < 0 )
  {
    v7 = 179LL;
    goto LABEL_3;
  }
  v12 = v23;
  v11 = v12 >> 64;
  v10 = (void *)v12;
  v15 = v23;
  v14 = (_QWORD *)(v15 >> 64);
  v13 = (_QWORD *)v15;
  v20 = (_QWORD *)*((_QWORD *)&v23 + 1);
  while ( v13 != v14 )
  {
    v16 = (const WCHAR **)std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                            &v21,
                            v13);
    if ( PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem((__int64)v5, v16) )
    {
      v29 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
      v17 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v22, v13);
      if ( (int)PenWorkspace::Discover::RecentAppsCache::CreateRecentItem((__int64)v5, (__int64)v17, &v29) >= 0 )
      {
        try
        {
          v19 = (_QWORD *)v3[1];
          if ( v19 == (_QWORD *)v3[2] )
          {
            std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
              (__int64)v3,
              v19,
              &v29);
          }
          else
          {
            *v19 = v29;
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
            v3[1] += 8LL;
          }
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xC4,
            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            v18);
          v5 = (PenWorkspace::Discover::RecentAppsCache *)this;
          v3 = a3;
          v4 = a2;
          v11 = *((_QWORD *)&v23 + 1);
          v10 = (void *)v23;
          v14 = v20;
          goto LABEL_20;
        }
        if ( (int)((__int64)(v3[1] - *v3) >> 3) >= v4 )
        {
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
          break;
        }
      }
LABEL_20:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v29);
    }
    v13 += 2;
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v10, v11);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v24 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return 0LL;
}
