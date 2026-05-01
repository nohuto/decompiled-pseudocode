/*
 * XREFs of ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x1803EC210
 * Callers:
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1803E8A80 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1802251A4 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::HaveUsedPen(RTL_SRWLOCK *this, int *a2)
{
  int SortedAppList; // eax
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 i; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  v8 = 0LL;
  v9 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v8);
  v4 = SortedAppList;
  if ( SortedAppList >= 0 )
  {
    v6 = v8;
    for ( i = v8; i != *((_QWORD *)&v8 + 1); i += 16LL )
    {
      if ( !*(_BYTE *)(*(_QWORD *)i + 44LL) && *(int *)(*(_QWORD *)i + 32LL) > 0 )
      {
        *a2 = 1;
        break;
      }
    }
    if ( v6 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v6, *((__int64 *)&v8 + 1));
      std::_Deallocate<16>((void *)v8, (struct std::nothrow_t *)((v9 - v8) & 0xFFFFFFFFFFFFFFF0uLL));
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
    if ( (_QWORD)v8 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v8, *((__int64 *)&v8 + 1));
      std::_Deallocate<16>((void *)v8, (struct std::nothrow_t *)((v9 - v8) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return v4;
  }
}
