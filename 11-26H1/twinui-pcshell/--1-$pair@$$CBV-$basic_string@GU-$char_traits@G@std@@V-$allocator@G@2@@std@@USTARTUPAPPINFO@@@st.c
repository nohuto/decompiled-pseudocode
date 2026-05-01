/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@QEAA@XZ @ 0x1801ECFDC
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180583BA8 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits_ea_180583BA8.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180583E10 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_180583E10.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$5 @ 0x1806CE048 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$5.c)
 * Callees:
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180030E00 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 */

__int64 __fastcall std::pair<std::wstring const,STARTUPAPPINFO>::~pair<std::wstring const,STARTUPAPPINFO>(_QWORD *a1)
{
  STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)(a1 + 4));
  return std::wstring::_Tidy_deallocate(a1);
}
