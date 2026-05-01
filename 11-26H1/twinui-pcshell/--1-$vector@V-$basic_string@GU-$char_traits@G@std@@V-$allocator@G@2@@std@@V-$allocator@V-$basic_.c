/*
 * XREFs of ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18029EC34
 * Callers:
 *     _VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry_::_1_::dtor$0 @ 0x1806DF3BD (_VirtualPinnedAppsHandler--LoadPinnedAppsFromRegistry_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$54 @ 0x1806E3EF6 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$54.c)
 *     _UwpAppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1806E435B (_UwpAppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$2 @ 0x1806E7971 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$2 @ 0x1806E7983 (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$0 @ 0x1806E7995 (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$0.c)
 *     _AppUsageTracker::GetActiveApps_::_1_::dtor$0 @ 0x1806F4D8C (_AppUsageTracker--GetActiveApps_--_1_--dtor$0.c)
 *     _Win32AppStateManager::GetActiveApps_::_1_::dtor$0 @ 0x1806F50D5 (_Win32AppStateManager--GetActiveApps_--_1_--dtor$0.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$23 @ 0x180702879 (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$23.c)
 *     _CopilotHotkeyManager::SchemaNameAreRegisteredProtocol_::_1_::dtor$2 @ 0x180702EA7 (_CopilotHotkeyManager--SchemaNameAreRegisteredProtocol_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<std::wstring>::~vector<std::wstring>(__int64 a1)
{
  return std::vector<std::wstring>::_Tidy(a1);
}
