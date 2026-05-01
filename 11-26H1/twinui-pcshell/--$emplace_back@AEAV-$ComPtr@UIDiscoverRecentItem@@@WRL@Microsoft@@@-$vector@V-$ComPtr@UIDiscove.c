/*
 * XREFs of ??$emplace_back@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@AEAV234@@Z @ 0x1803EB388
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803EC028 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1803EAA38 (--$_Emplace_reallocate@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::emplace_back<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = (__int64 *)a1[1];
  if ( v4 == (__int64 *)a1[2] )
    return std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
             a1,
             v4,
             a2);
  v5 = *a2;
  *v4 = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = a1[1];
  a1[1] = v6 + 8;
  return (__int64 *)v6;
}
