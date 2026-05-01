/*
 * XREFs of ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x180028F3C
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803E29A0 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x180029090 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18002A268 (_anonymous_namespace_--IsAppInBlackList.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v4; // rcx
  char *v5; // rdx
  char *v6; // rcx
  __int64 v7; // rax
  const WCHAR *v8; // r9
  __int64 v9; // r8
  signed __int64 v10; // r9
  const WCHAR *v11; // rbx
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // rdx
  const wchar_t *v15; // r8
  signed __int64 v16; // rcx
  RTL_SRWLOCK *v17; // rbx
  std::_Ref_count_base *v18; // rcx

  v4 = *a2;
  if ( *((_QWORD *)*a2 + 3) > 7uLL )
    v4 = *(const WCHAR **)v4;
  if ( CallerIdentity::IsShellExperienceAppId(v4, (const unsigned __int16 *)a2) )
    goto LABEL_16;
  v5 = *(char **)(a1 + 208);
  v6 = (char *)*a2;
  if ( v5 && *(_WORD *)v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v5[2 * v7] );
    v8 = *a2;
    v9 = *((_QWORD *)v6 + 2);
    if ( *((_QWORD *)v6 + 3) > 7uLL )
      v8 = *(const WCHAR **)v6;
    if ( v9 == v7 )
    {
      v10 = (char *)v8 - v5;
      while ( v9 )
      {
        if ( *(_WORD *)&v5[v10] != *(_WORD *)v5 )
          goto LABEL_19;
        --v9;
        v5 += 2;
      }
      goto LABEL_16;
    }
  }
LABEL_19:
  v14 = *((_QWORD *)v6 + 2);
  if ( *((_QWORD *)v6 + 3) > 7uLL )
    v6 = *(char **)v6;
  if ( v14 == 26 )
  {
    v15 = L"Microsoft.Windows.Explorer";
    v16 = v6 - (char *)L"Microsoft.Windows.Explorer";
    while ( v14 )
    {
      if ( *(const wchar_t *)((char *)v15 + v16) != *v15 )
        goto LABEL_15;
      --v14;
      ++v15;
    }
    goto LABEL_16;
  }
LABEL_15:
  v11 = *a2;
  if ( (unsigned __int8)anonymous_namespace_::IsAppInBlackList(*a2) )
  {
LABEL_16:
    v12 = (std::_Ref_count_base *)a2[1];
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    return 0;
  }
  v17 = (RTL_SRWLOCK *)(v11 + 24);
  AcquireSRWLockShared(v17);
  if ( *((int *)*a2 + 8) < 15 )
  {
    if ( v17 )
      ReleaseSRWLockShared(v17);
    goto LABEL_16;
  }
  if ( v17 )
    ReleaseSRWLockShared(v17);
  v18 = (std::_Ref_count_base *)a2[1];
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  return 1;
}
