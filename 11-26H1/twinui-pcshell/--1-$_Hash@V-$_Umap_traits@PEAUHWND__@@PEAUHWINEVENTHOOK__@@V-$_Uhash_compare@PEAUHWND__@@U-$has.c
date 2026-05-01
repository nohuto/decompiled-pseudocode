/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18002A1D4
 * Callers:
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180029B3C (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180029C64 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18002BA30 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x18002C2AC (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ??1?$unordered_map@PEAUHWND__@@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@4@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@@std@@QEAA@XZ @ 0x1801F5620 (--1-$unordered_map@PEAUHWND__@@PEAUHWINEVENTHOOK__@@U-$hash@PEAUHWND__@@@std@@U-$equal_to@PEAUHW.c)
 *     ??1WindowsTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18065E964 (--1WindowsTracker@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$7 @ 0x1806CD8D4 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_ea_1806CD8D4.c)
 *     _dynamic_atexit_destructor_for__OwnedHWinEventHook_GamingOverlayExperienceManager_::m_eventHookOwners__ @ 0x180709030 (_dynamic_atexit_destructor_for__OwnedHWinEventHook_GamingOverlayExperienceManager_-_ea_180709030.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801D4DBC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExper.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::~_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>,void *>>>(
    v2,
    a1[1]);
  return std::_Deallocate<16>(a1[1], 32LL);
}
