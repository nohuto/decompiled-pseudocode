/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x1802D1840
 * Callers:
 *     _VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry_::_1_::dtor$0 @ 0x1806B80EB (_VirtualPinnedAppsHandler--LoadPinnedAppsFromRegistry_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$49 @ 0x1806BCB34 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$49.c)
 *     _GamingOverlayExperienceManager::GetSortedUniqueProcessList_::_1_::dtor$0 @ 0x1806BCE25 (_GamingOverlayExperienceManager--GetSortedUniqueProcessList_--_1_--dtor$0.c)
 *     _UwpAppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1806BFABA (_UwpAppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$2 @ 0x1806BFACC (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x1806BFADE (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x1806CC825 (_AppUsageTracker--GetActiveApps_--_1_--dtor$0.c)
 *     _Win32AppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1806CCB5C (_Win32AppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::SchemaNameAreRegisteredProtocol_::_1_::dtor$2 @ 0x1806DA2A0 (_CopilotHotkeyManager--SchemaNameAreRegisteredProtocol_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::wstring>::~vector<std::wstring>(__int64 a1)
{
  std::vector<std::wstring>::_Tidy(a1);
}
