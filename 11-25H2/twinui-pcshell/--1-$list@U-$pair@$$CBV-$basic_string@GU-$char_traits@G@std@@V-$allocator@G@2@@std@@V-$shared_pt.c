/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1801B0DC0
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$10 @ 0x1806A92FB (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B0E18 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_t_ea_1801B0E18.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::~list<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>(
        void **a1)
{
  std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x40);
}
