/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x1802323C0
 * Callers:
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x1806A87B9 (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x1806ABF26 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$29 @ 0x1806ABF38 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$29.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x1806B28EE (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x1806B3C6C (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x1806B4567 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$4 @ 0x1806B4579 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$4.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x1806B9D3A (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x1806C1F3D (_UwpWindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x1806C1F4F (_UwpWindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x1806C2380 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$27.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x1806C2392 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
