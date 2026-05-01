/*
 * XREFs of ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C1804
 * Callers:
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1800BD6CC (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1801FA930 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802E9770 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18035EE14 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803657C0 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1803F1FB0 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1803F3060 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1803F3450 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803F80F0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040C4E0 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?IsRemoteDesktopConnected@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180481470 (-IsRemoteDesktopConnected@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@Compos.c)
 *     ?IsRemoteDesktopDisconnecting@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x1804816F0 (-IsRemoteDesktopDisconnecting@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@Co.c)
 *     ?RemoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1804824B0 (-RemoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@I.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@ZPEAU786@@details@wil@@YA?AV?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@1@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@P83456@EAAJPEAU?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@6@PEAUEventRegistrationToken@@@ZP83456@EAAJU9@@Z1@Z @ 0x18052D3D0 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UIRemoteSessionWindowManager@Shell@I.c)
 *     ??4?$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18052EB00 (--4-$unique_winrt_event_token@UIRemoteSessionWindowManager@Shell@Internal@Windows@@@wil@@QEAAAEA.c)
 *     ?RuntimeClassInitialize@?$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@@details@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18069AF24 (-RuntimeClassInitialize@-$EventRegistration@UIImmersiveShellHookService@@UIImmersiveShellHookNot.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
