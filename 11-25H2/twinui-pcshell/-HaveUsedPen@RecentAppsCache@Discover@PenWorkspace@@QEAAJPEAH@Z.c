/*
 * XREFs of ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x1803E2BB0
 * Callers:
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1803DF970 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18002A0C0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180234740 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::HaveUsedPen(RTL_SRWLOCK *this, int *a2)
{
  int SortedAppList; // eax
  unsigned int v4; // edi
  void *v5; // rbx
  void *v7; // rbx
  __int128 i; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64)&v9);
  v4 = SortedAppList;
  if ( SortedAppList >= 0 )
  {
    v7 = (void *)v9;
    for ( i = v9; (_QWORD)i != *((_QWORD *)&v9 + 1); *(_QWORD *)&i = i + 16 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)i + 44LL) && *(int *)(*(_QWORD *)i + 32LL) > 0 )
      {
        *a2 = 1;
        break;
      }
    }
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v7, *((__int64 *)&i + 1));
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v10 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    v5 = (void *)v9;
    if ( (_QWORD)v9 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v9, *((__int64 *)&v9 + 1));
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)((v10 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return v4;
  }
}
