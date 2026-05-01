/*
 * XREFs of ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1803412F8
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x180398BF8 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     _ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride_::_1_::dtor$2 @ 0x1806B3649 (_ToastSettingsHelper--IsStackedPriorityToastsDisabledViaRegistryOverride_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::GetNonServiceProcessListAndIds_::_1_::dtor$2 @ 0x1806BCD7F (_GamingOverlayExperienceManager--GetNonServiceProcessListAndIds_--_1_--dtor$2.c)
 *     _CopilotHotkeyManager::LaunchCustomUriAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1806D9FE2 (_CopilotHotkeyManager--LaunchCustomUriAsync$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>(__int64 a1)
{
  std::wstring::_Tidy_deallocate((void **)(a1 + 8));
}
