/*
 * XREFs of ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180293F84
 * Callers:
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802904F4 (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034AC28 (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 *     ??1GamepadButtonTracker@@QEAA@XZ @ 0x18035B53C (--1GamepadButtonTracker@@QEAA@XZ.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___::Invoke @ 0x180374AA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_180374AA0.c)
 *     ?InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x1804D8B00 (-InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnk.c)
 *     ??0GamingPosturePositioner@@QEAA@XZ @ 0x1804E1340 (--0GamingPosturePositioner@@QEAA@XZ.c)
 *     ??1GamingPosturePositioner@@UEAA@XZ @ 0x1804E172C (--1GamingPosturePositioner@@UEAA@XZ.c)
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x180539EF8 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 *     ?FailfastWithContextCallback@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1805684F0 (-FailfastWithContextCallback@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180568600 (-RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?IsWipUser@AIXPolicyHelper@@YA_NXZ @ 0x18056E7A0 (-IsWipUser@AIXPolicyHelper@@YA_NXZ.c)
 *     ?Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x18059EF00 (-Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x1805FE0C8 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180601124 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x18062CB54 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x180667738 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$9 @ 0x1806B243E (_CopilotHotkeyManager--InvokeCopilotOrCustomOption_--_1_--dtor$9.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateModifiedPropertiesAndNotify_::_1_::dtor$5 @ 0x1806BD64F (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--UpdateModifiedP.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___::Invoke_::_1_::dtor$0 @ 0x1806BD661 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1806BD661.c)
 *     _GamepadButtonTracker::GamepadButtonTracker_::_1_::dtor$4 @ 0x1806BE154 (_GamepadButtonTracker--GamepadButtonTracker_--_1_--dtor$4.c)
 *     _AIXPolicyHelper::IsWipUser_::_1_::dtor$0 @ 0x1806C9B84 (_AIXPolicyHelper--IsWipUser_--_1_--dtor$0.c)
 *     _wil::GetActivationFactory_Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics__::_1_::dtor$0 @ 0x1806CA421 (_wil--GetActivationFactory_Windows--Internal--GamingExperiences--Posture--IGamingPostureConfigur.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$6 @ 0x1806CA4C1 (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$6.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$9 @ 0x1806CA50C (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$9.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$18 @ 0x1806CA5ED (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$18.c)
 *     _VirtualDesktopGestureContext::Commit_::_1_::dtor$3 @ 0x1806CBFE0 (_VirtualDesktopGestureContext--Commit_--_1_--dtor$3.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$8 @ 0x1806D9E13 (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$8.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$9 @ 0x1806D9E2C (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$9.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$0 @ 0x1806DD1C2 (_CreatePlaceholderPidl_--_1_--dtor$0.c)
 *     _CreatePlaceholderPidl_::_1_::dtor$1 @ 0x1806DD1D4 (_CreatePlaceholderPidl_--_1_--dtor$1.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$25 @ 0x1806DD33C (_GetPidlsFromTaskbarLayout_--_1_--dtor$25.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
