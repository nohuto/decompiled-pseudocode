/*
 * XREFs of ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180059160 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180059DB0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x1800728C0 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ @ 0x1800772B0 (-DismissView@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180077C80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180094210 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x180094920 (-AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z.c)
 *     ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180094D90 (-IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180096330 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z @ 0x18009AD10 (-SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18009C350 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x18009CCD0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x18012A3A0 (-HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z.c)
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x180169900 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1801A2B60 (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1801AEED0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801C1220 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ?CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DF060 (-CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAU.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DF120 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?GetViewType@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1801EFE60 (-GetViewType@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@.c)
 *     ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801F1CD0 (-DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180200B90 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x1802033B0 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     ?IsViewVisible@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJPEAH@Z @ 0x180206D80 (-IsViewVisible@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJPEAH@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180215450 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180226F08 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180253A10 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x18027D5E0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1802E6D74 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?NotifyRaiseDesktopCompleted@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x1804967F0 (-NotifyRaiseDesktopCompleted@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1804A0C60 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x1804A1710 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1804AE1A0 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804AEF10 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x1804AF700 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804AFDF0 (-Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2060 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x1804E2370 (-EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ.c)
 *     ?GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitionTargetSpecialFlags@@@Z @ 0x1804E2430 (-GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitio.c)
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2A00 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 *     ?ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ @ 0x1805134E0 (-ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ.c)
 *     ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180522DF0 (-AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENC.c)
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180522FE0 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x180523E00 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180523F10 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1805241E0 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180525670 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x180525B20 (-SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z.c)
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180526020 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180526180 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x180526BB0 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x180526EC0 (-SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayout.c)
 *     ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x180527160 (-SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1390 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A1590 (-DisplaySettingsChange@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_D.c)
 *     ?OnMonitorFrameDismissAnimationCompleted@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1EA0 (-OnMonitorFrameDismissAnimationCompleted@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A2598 (-RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A2870 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 *     ?ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A3670 (-ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A3720 (-ViewLoaded@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x1806A6050 (-DismissViewAnimated@TaskViewHost@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A60E0 (-DisplaySettingsChange@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHA.c)
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1806A65F0 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 *     ?IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x1806A6890 (-IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?MonitorAdded@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806A6910 (-MonitorAdded@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnMonitorFrameDismissAnimationCompleted@TaskViewHost@@UEAAJXZ @ 0x1806A6CE0 (-OnMonitorFrameDismissAnimationCompleted@TaskViewHost@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A71A0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x1806A7AF0 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 *     ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1806A7CA0 (-ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?VirtualDesktopDestroyBegin@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1806A7F00 (-VirtualDesktopDestroyBegin@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopDestroyFailed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1806A7F60 (-VirtualDesktopDestroyFailed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1806A7FC0 (-VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?CurrentVirtualDesktopChanged@XamlSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1806A92D0 (-CurrentVirtualDesktopChanged@XamlSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A9350 (-DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_D.c)
 *     ?MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806A97E0 (-MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _lambda_0448dd6b07ee8d154ed22029eec6a770_::operator() @ 0x1806AC5B4 (_lambda_0448dd6b07ee8d154ed22029eec6a770_--operator().c)
 *     _lambda_070e192e9fba98d43315428c14debf7b_::operator() @ 0x1806AC638 (_lambda_070e192e9fba98d43315428c14debf7b_--operator().c)
 *     _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x1806AC6C4 (_lambda_28e2deb1c60008eafa8d487ea9ad6bb5_--operator().c)
 *     _lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator() @ 0x1806AC83C (_lambda_72e1dcf1d191a1fe628d31ef24d41038_--operator().c)
 *     _lambda_828944ce103634e2e050a423f7a4c10d_::operator() @ 0x1806AC8D0 (_lambda_828944ce103634e2e050a423f7a4c10d_--operator().c)
 *     _lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator() @ 0x1806AC95C (_lambda_941eca72fc43b2c4835a5fc6680f0a4a_--operator().c)
 *     _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x1806ACA28 (_lambda_95528747bebe02d956eab525d53e8eb3_--operator().c)
 *     _lambda_ca880a75b2c5520c482e457acf4bf272_::operator() @ 0x1806ACB08 (_lambda_ca880a75b2c5520c482e457acf4bf272_--operator().c)
 *     _lambda_ec805711c79670d05ccf93f6b458b0f9_::operator() @ 0x1806ACB94 (_lambda_ec805711c79670d05ccf93f6b458b0f9_--operator().c)
 *     ?DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806ADCE0 (-DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AE900 (-MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x1806AF230 (-Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall CObjectWithThreadUseDetection::TryEnterOnCurrentThread(__int64 a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // esi
  int v6; // eax
  DWORD CurrentThreadId; // ebp
  HRESULT ApartmentType; // ebx
  int v10; // ecx
  APTTYPE pAptType; // [rsp+30h] [rbp-248h] BYREF
  APTTYPEQUALIFIER pAptQualifier[3]; // [rsp+34h] [rbp-244h] BYREF
  WCHAR Filename[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 44);
  v5 = -2147417842;
  if ( v2 != 2 )
  {
    v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_3;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      v10 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v10;
    }
    else
    {
      v10 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v10 != 1 )
      goto LABEL_13;
    if ( v2 == 1 )
    {
      if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
        goto LABEL_13;
      }
      v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_3:
      if ( v6 != 1 )
        goto LABEL_13;
    }
  }
  if ( *(_DWORD *)(a1 + 40) != -3 )
  {
    pAptType = APTTYPE_STA;
    CurrentThreadId = 0;
    pAptQualifier[0] = APTTYPEQUALIFIER_NONE;
    ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
    if ( ApartmentType >= 0 )
    {
      switch ( pAptType )
      {
        case APTTYPE_MAINSTA:
        case APTTYPE_STA:
          CurrentThreadId = GetCurrentThreadId();
          goto LABEL_9;
        case APTTYPE_MTA:
LABEL_9:
          if ( CurrentThreadId != *(_DWORD *)(a1 + 40) )
            ApartmentType = -2147417842;
LABEL_11:
          if ( a2 == 1 )
          {
            if ( ApartmentType >= 0 )
              goto LABEL_13;
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC8,
              (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
              (const char *)(unsigned int)ApartmentType);
          }
          else if ( ApartmentType >= 0 )
          {
            goto LABEL_13;
          }
          return (unsigned int)ApartmentType;
        case APTTYPE_NA:
          CurrentThreadId = -1;
          goto LABEL_9;
      }
    }
    if ( ApartmentType < 0 )
      goto LABEL_11;
    goto LABEL_9;
  }
LABEL_13:
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)a1) )
    return 0;
  return v5;
}
