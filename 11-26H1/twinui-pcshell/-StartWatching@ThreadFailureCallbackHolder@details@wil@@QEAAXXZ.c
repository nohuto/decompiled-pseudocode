/*
 * XREFs of ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690
 * Callers:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180015874 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x1800422D4 (-StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1800434A0 (-StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180043DB4 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::Invoke @ 0x180044170 (CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___--Invoke.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1800590A0 (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180068138 (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x1800683D8 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     ??4?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800760B4 (--4-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180076500 (--4-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800766FC (--4-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??4?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077174 (--4-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007A744 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ @ 0x180096E38 (-StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800B287C (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800B51EC (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800BBA44 (-StartActivity@EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800BDBFC (-StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180140BA4 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1801683C0 (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x18017B58C (-StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x18017BC84 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180186154 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_180186154.c)
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x1801DB9F4 (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 *     ??4?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801DD220 (--4-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??4?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801DD300 (--4-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x180202010 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     ?StartActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAAX_NPEBG@Z @ 0x180298FA8 (-StartActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelem.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802A1678 (--4-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEA.c)
 *     ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180324398 (-StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplicati.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x180328874 (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z @ 0x18032F420 (-StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z.c)
 *     ?StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z @ 0x18035418C (-StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z.c)
 *     ?StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180375A1C (-StartActivity@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x180398D78 (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803B9310 (-StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExpe.c)
 *     ?StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z @ 0x1803C5A58 (-StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ @ 0x1803ECF30 (-StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z @ 0x1803FC74C (-StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z.c)
 *     ?StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050A2A4 (-StartActivity@VAPositioner_AppAddedToTaskbarActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18050AA1C (-StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x18051BD4C (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ @ 0x18057B62C (-StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ.c)
 *     ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x1805A1E3C (-StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z.c)
 *     ?StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ @ 0x1805F739C (-StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805F9F38 (-StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1805FCBD4 (-StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x18067F308 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ @ 0x18069729C (-StartActivity@PinningActivity@TaskbarPinningTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18028C95C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$GetProcAddress@P6AJPEAX0@_E@details@wil@@YAP6AJPEAX0@_EPEAUHINSTANCE__@@PEBD@Z @ 0x1802D432C (--$GetProcAddress@P6AJPEAX0@_E@details@wil@@YAP6AJPEAX0@_EPEAUHINSTANCE__@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ThreadFailureCallbackHolder::StartWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  __int64 v2; // rbp
  unsigned __int64 CurrentThreadId; // rbx
  unsigned __int64 v4; // r15
  __int64 i; // rax
  _QWORD *v6; // rcx
  HANDLE ProcessHeap; // rsi
  char *v8; // rdi
  void (__fastcall *ProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z)(HANDLE, char *); // rax
  HMODULE ModuleHandleW; // rax
  signed __int64 v11; // rax
  const struct wil::FailureInfo *v12; // rdx
  _BYTE v13[160]; // [rsp+20h] [rbp-B8h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    memset_0(v13, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v13, v12);
  }
  v2 = wil::details::g_pThreadFailureCallbacks;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    v4 = 8 * (CurrentThreadId % 0xA);
    for ( i = *(_QWORD *)(v4 + v2); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      {
        v6 = (_QWORD *)(i + 16);
        goto LABEL_8;
      }
    }
    ProcessHeap = GetProcessHeap();
    v8 = (char *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
    ProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z = (void (__fastcall *)(HANDLE, char *))`wil::details::ProcessHeapAlloc'::`2'::pfnRtlDisownModuleHeapAllocation;
    if ( `wil::details::ProcessHeapAlloc'::`2'::pfnRtlDisownModuleHeapAllocation
      || !`wil::details::ProcessHeapAlloc'::`2'::fetchedRtlDisownModuleHeapAllocation
      && ((ModuleHandleW = GetModuleHandleW(L"ntdll.dll")) != 0LL
        ? (void (__fastcall *)(HANDLE, char *))(ProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z = (void (__fastcall *)(HANDLE, char *))___GetProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z(ModuleHandleW),
                                                `wil::details::ProcessHeapAlloc'::`2'::pfnRtlDisownModuleHeapAllocation = (__int64)ProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z)
        : (ProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z = (void (__fastcall *)(HANDLE, char *))`wil::details::ProcessHeapAlloc'::`2'::pfnRtlDisownModuleHeapAllocation),
          `wil::details::ProcessHeapAlloc'::`2'::fetchedRtlDisownModuleHeapAllocation = 1,
          ProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z) )
    {
      ProcAddress_P6AJPEAX0__E_details_wil__YAP6AJPEAX0__EPEAUHINSTANCE____PEBD_Z(ProcessHeap, v8);
    }
    if ( v8 )
    {
      *(_DWORD *)v8 = CurrentThreadId;
      *((_DWORD *)v8 + 1) = 0;
      *((_QWORD *)v8 + 1) = 0LL;
      v6 = v8 + 16;
      *((_QWORD *)v8 + 2) = 0LL;
      do
      {
        v11 = *(_QWORD *)(v4 + v2);
        *((_QWORD *)v8 + 1) = v11;
      }
      while ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + v2), (signed __int64)v8, v11) );
    }
    else
    {
      v6 = 0LL;
    }
LABEL_8:
    *(_QWORD *)this = v6;
    if ( v6 )
    {
      *((_QWORD *)this + 2) = *v6;
      *v6 = this;
      *((_DWORD *)this + 6) = GetCurrentThreadId();
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
}
