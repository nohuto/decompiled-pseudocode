/*
 * XREFs of ??1?$ComPtr@UIFullscreenShellHostManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802DD1F4
 * Callers:
 *     _CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss_::_1_::dtor$0 @ 0x1806E0DB2 (_CBaseTrayFlyoutExperienceManager--UpdateFocusOnDismiss_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$2 @ 0x1806E39E2 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::HandleGamingPostureHotkey_::_1_::dtor$0 @ 0x1806E43EC (_GamingOverlayExperienceManager--HandleGamingPostureHotkey_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$1 @ 0x1806E4C74 (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$1.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$1 @ 0x1806EE6E2 (_XamlLauncherState--ShowStartView_--_1_--dtor$1.c)
 *     _RdpShellExtensionHost::CreateRdpShellExtension_::_1_::dtor$0 @ 0x1807058EF (_RdpShellExtensionHost--CreateRdpShellExtension_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IFullscreenShellHostManager>::~ComPtr<IFullscreenShellHostManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(a1);
}
