/*
 * XREFs of ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1803422A0
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1803A1248 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     _ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride_::_1_::dtor$2 @ 0x1806DA9D1 (_ToastSettingsHelper--IsStackedPriorityToastsDisabledViaRegistryOverride_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::GetNonServiceProcessListAndIds_::_1_::dtor$2 @ 0x1806E42B5 (_GamingOverlayExperienceManager--GetNonServiceProcessListAndIds_--_1_--dtor$2.c)
 *     _CopilotHotkeyManager::LaunchCustomUriAsync_::_1_::dtor$2 @ 0x180702A0E (_CopilotHotkeyManager--LaunchCustomUriAsync_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>(__int64 a1)
{
  return std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 8));
}
