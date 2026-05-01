/*
 * XREFs of ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803EC028
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1803E8910 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18002E834 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1802251A4 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace_back@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@AEAV234@@Z @ 0x1803EB388 (--$emplace_back@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIDiscove.c)
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1803EB82C (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803EBC8C (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetMRUApps(RTL_SRWLOCK *this, int a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  int v4; // r15d
  PenWorkspace::Discover::RecentAppsCache *v5; // rdi
  _QWORD *v6; // r12
  int SortedAppList; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r14
  unsigned __int128 v12; // kr10_16
  _QWORD *i; // rbx
  unsigned __int128 v14; // kr20_16
  const WCHAR **v15; // rax
  _QWORD *v16; // rax
  const char *v17; // r9
  _QWORD *v18; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int128 v22; // [rsp+60h] [rbp-58h] BYREF
  __int64 v23; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v28; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = (PenWorkspace::Discover::RecentAppsCache *)this;
  v6 = a3;
  v22 = 0LL;
  v23 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v22);
  if ( SortedAppList < 0 )
  {
    v8 = 177LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    if ( (_QWORD)v22 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v22, *((__int64 *)&v22 + 1));
      std::_Deallocate<16>((void *)v22, (struct std::nothrow_t *)((v23 - v22) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return (unsigned int)SortedAppList;
  }
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::EnsureUnifiedTileManager(v5);
  if ( SortedAppList < 0 )
  {
    v8 = 179LL;
    goto LABEL_3;
  }
  v12 = v22;
  v11 = (_QWORD *)(v12 >> 64);
  v10 = v12;
  v14 = v22;
  v18 = (_QWORD *)(v14 >> 64);
  for ( i = (_QWORD *)v14; i != v11; i += 2 )
  {
    v15 = (const WCHAR **)std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                            &v20,
                            i);
    if ( PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem((__int64)v5, v15) )
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
      v16 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v21, i);
      if ( (int)PenWorkspace::Discover::RecentAppsCache::CreateRecentItem((__int64)v5, (__int64)v16, &v28) >= 0 )
      {
        try
        {
          std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::emplace_back<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
            v3,
            &v28);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xC4,
            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            v17);
          v5 = (PenWorkspace::Discover::RecentAppsCache *)this;
          v3 = a3;
          v4 = a2;
          v11 = v18;
          v6 = a3;
          goto LABEL_15;
        }
        if ( (int)((__int64)(v3[1] - *v6) >> 3) >= v4 )
        {
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
          v10 = v22;
          break;
        }
      }
LABEL_15:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v28);
    }
    v10 = v22;
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v10, *((__int64 *)&v22 + 1));
    std::_Deallocate<16>((void *)v22, (struct std::nothrow_t *)((v23 - v22) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return 0LL;
}
