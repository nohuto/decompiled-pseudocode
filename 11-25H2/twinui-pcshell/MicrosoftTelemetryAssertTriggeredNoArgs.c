/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C
 * Callers:
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180084F98 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180085C90 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180108C7C (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_N@Z @ 0x1801949D4 (-GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA-AU-$pair@W4SnapRegion@@UCRect@Geom.c)
 *     ?ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU34@1HHHH@Z @ 0x180194E28 (-ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapR.c)
 *     ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801CC4A0 (-CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrappe.c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801F1EA0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@PEAI2@Z @ 0x18022E428 (-GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@P.c)
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18029C9E8 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     wil::details::lambda_call__lambda_dca440f115cf5346cc67ffa75a0e5732___::_lambda_call__lambda_dca440f115cf5346cc67ffa75a0e5732___ @ 0x1802CE4B8 (wil--details--lambda_call__lambda_dca440f115cf5346cc67ffa75a0e5732___--_lambda_call__lambda_dca4.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18039301C (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18048B830 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x18048BDA0 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18048BF30 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     ?GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180499450 (-GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorIn.c)
 *     ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180562920 (-ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z.c)
 *     ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x180569DF0 (-ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGrippe.c)
 *     _lambda_21db7767322f1ff1c886f131a6440c5a_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18056AB5C (_lambda_21db7767322f1ff1c886f131a6440c5a_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE0U_GUID@@@Z @ 0x180652290 (-Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activatio.c)
 *     ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x180652330 (-InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@Ap.c)
 *     ?get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x1806527F0 (-get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@.c)
 *     ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z @ 0x180652840 (-get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activat.c)
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x180652880 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x180652B10 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180652C50 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 *     ?RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x1806530D8 (-RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Window.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x18065A330 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 *     ?CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x1806A1ED0 (-CreateSplashScreen@CImmersiveWindowFactoryBase@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x1806A2150 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 *     _TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::catch$1 @ 0x1806CF4E7 (_TouchEdgeGripperHost--EnsureXamlHostThreadStarted_--_1_--catch$1.c)
 *     _TouchEdgeGripperHost::XamlHostThreadProc_::_1_::catch$27 @ 0x1806CF5E9 (_TouchEdgeGripperHost--XamlHostThreadProc_--_1_--catch$27.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int MicrosoftTelemetryAssertTriggeredNoArgs()
{
  FARPROC ProcAddress; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v3; // [rsp+30h] [rbp-30h]
  __int64 v4; // [rsp+40h] [rbp-20h]
  __int64 v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+50h] [rbp-10h]
  unsigned __int64 retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v6 = 1;
        v2[1] = &_ImageBase;
        v4 = 0LL;
        v3 = retaddr;
        v5 = -1LL;
        v2[0] = 11LL;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v2);
      }
    }
  }
  return (int)ProcAddress;
}
