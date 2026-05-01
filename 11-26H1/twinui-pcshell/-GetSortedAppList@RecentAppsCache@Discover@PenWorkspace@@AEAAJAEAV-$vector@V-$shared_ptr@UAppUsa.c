/*
 * XREFs of ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1802251A4
 * Callers:
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180039A1C (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803EC028 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x1803EC210 (-HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@QEAV21@AEBV21@@Z @ 0x180241638 (--$_Emplace_reallocate@AEBV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@-$vector@V-$.c)
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1802B2518 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(RTL_SRWLOCK *a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // r15
  RTL_SRWLOCK *v5; // rdi
  _QWORD *Ptr; // rsi
  _QWORD *i; // rbx
  _QWORD *v8; // rcx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  v4 = a2;
  v5 = a1 + 21;
  AcquireSRWLockShared(a1 + 21);
  Ptr = a1[3].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v8 = (_QWORD *)v2[1];
    if ( v8 == (_QWORD *)v2[2] )
    {
      try
      {
        std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::_Emplace_reallocate<std::shared_ptr<PenWorkspace::Discover::AppUsageData> const &>(
          v2,
          v2[1],
          i + 6);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xEA,
          (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          v9);
        v2 = a2;
        v4 = a2;
        goto LABEL_9;
      }
    }
    else
    {
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v8, i + 6);
      v2[1] += 16LL;
    }
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
LABEL_9:
  std::_Sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
    *v4,
    v2[1],
    (__int64)(v2[1] - *v4) >> 4,
    anonymous_namespace_::CompareAppUsageTimes);
  return 0LL;
}
