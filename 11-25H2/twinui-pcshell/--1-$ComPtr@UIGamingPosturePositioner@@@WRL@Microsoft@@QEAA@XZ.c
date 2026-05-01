/*
 * XREFs of ??1?$ComPtr@UIGamingPosturePositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x1802E3B80
 * Callers:
 *     _CApplicationManager::SetActiveApp_::_1_::dtor$0 @ 0x1806B9D5E (_CApplicationManager--SetActiveApp_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$2 @ 0x1806BC6B6 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::HandleGamingPostureHotkey_::_1_::dtor$0 @ 0x1806BCEB6 (_GamingOverlayExperienceManager--HandleGamingPostureHotkey_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$1 @ 0x1806BD59B (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$1.c)
 *     _RdpShellExtensionHost::CreateRdpShellExtension_::_1_::dtor$0 @ 0x1806DCCC8 (_RdpShellExtensionHost--CreateRdpShellExtension_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IGamingPosturePositioner>::~ComPtr<IGamingPosturePositioner>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IGameInput>::InternalRelease(a1);
}
