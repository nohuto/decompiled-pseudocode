/*
 * XREFs of ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800A9FFC
 * Callers:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x180017CBC (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180044914 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??R_lambda_e608e5034e30ee0eacecb96a86560567_@@QEBA@AEBUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1800A9A54 (--R_lambda_e608e5034e30ee0eacecb96a86560567_@@QEBA@AEBUIWindowTabsChangedEventArgsFactory@Shell@.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800A9ADC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801912C4 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801EA8C8 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285B50 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18035EB50 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1803E0DE0 (-GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 *     ?GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180499450 (-GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorIn.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804E6B58 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1805CF88C (-CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  unsigned int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *a1;
  v10 = 0LL;
  v8 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v5 + 48))(v3, a3, &v10);
  winrt::check_hresult(&v11, v6, &v8);
  *a2 = v10;
  return a2;
}
