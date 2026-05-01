/*
 * XREFs of ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x1806230B4
 * Callers:
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x180623008 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x18063391C (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x180636294 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$5 @ 0x18070263E (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$5.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$17 @ 0x180702833 (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$17.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TargetAppExtensionDetails::~TargetAppExtensionDetails(TargetAppExtensionDetails *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 33);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 28);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 23);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 18);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 13);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
  std::wstring::_Tidy_deallocate(this);
}
