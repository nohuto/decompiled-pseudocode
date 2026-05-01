/*
 * XREFs of ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18002E834
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803EC028 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18002DA14 (_anonymous_namespace_--IsAppInBlackList.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x18002E6B4 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

char __fastcall PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(__int64 a1, const WCHAR **a2)
{
  const WCHAR *v4; // rcx
  _WORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r10
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  RTL_SRWLOCK *v16; // rdi
  std::_Ref_count_base *v17; // rcx

  v4 = *a2;
  if ( *((_QWORD *)*a2 + 3) > 7uLL )
    v4 = *(const WCHAR **)v4;
  if ( CallerIdentity::IsShellExperienceAppId(v4, (const unsigned __int16 *)a2) )
    goto LABEL_13;
  v5 = *(_WORD **)(a1 + 208);
  if ( v5 && *v5 )
  {
    v6 = std::_WChar_traits<wchar_t>::length(v5);
    v9 = v8[2];
    if ( v8[3] > 7uLL )
      v8 = (_QWORD *)*v8;
    if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(v8, v9, v7, v6) )
      goto LABEL_13;
  }
  v10 = std::_WChar_traits<wchar_t>::length(L"Microsoft.Windows.Explorer");
  v13 = v12[2];
  if ( v12[3] > 7uLL )
    v12 = (_QWORD *)*v12;
  if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(v12, v13, v11, v10)
    || anonymous_namespace_::IsAppInBlackList(*a2) )
  {
    goto LABEL_13;
  }
  v16 = (RTL_SRWLOCK *)(*a2 + 24);
  AcquireSRWLockShared(v16);
  if ( *((int *)*a2 + 8) < 15 )
  {
    if ( v16 )
      ReleaseSRWLockShared(v16);
LABEL_13:
    v14 = (std::_Ref_count_base *)a2[1];
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    return 0;
  }
  if ( v16 )
    ReleaseSRWLockShared(v16);
  v17 = (std::_Ref_count_base *)a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  return 1;
}
