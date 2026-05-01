/*
 * XREFs of ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x1805FE164
 * Callers:
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x1805FE0C8 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180600690 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806106A8 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$5 @ 0x1806D9DC8 (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$5.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$11 @ 0x1806D9EE5 (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$11.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$31 @ 0x1806D9F4F (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$31.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TargetAppExtensionDetails::~TargetAppExtensionDetails(void **this)
{
  std::wstring::_Tidy_deallocate(this + 18);
  std::wstring::_Tidy_deallocate(this + 13);
  std::wstring::_Tidy_deallocate(this + 8);
  std::wstring::_Tidy_deallocate(this + 4);
  std::wstring::_Tidy_deallocate(this);
}
