/*
 * XREFs of ?GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1804AA300
 * Callers:
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804A8234 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x180029AD8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180237ECC (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023A2D4 (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806851D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=2
float __fastcall MultitaskingViewGestureHandlerHelpers::GetTaskbarHeight(
        HMONITOR hMonitor,
        __int64 **a2,
        const struct winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection *a3)
{
  float v5; // xmm6_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  float *v8; // rbx
  const char *v9; // r9
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // [rsp+28h] [rbp-19h] BYREF
  __int128 v12; // [rsp+30h] [rbp-11h] BYREF
  __int128 v13; // [rsp+40h] [rbp-1h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v5 = FLOAT_100_0;
  v11 = 0LL;
  if ( !winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2, &v11) )
    MicrosoftTelemetryAssertTriggeredNoArgs(v7, v6);
  v11 = 0LL;
  if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2, &v11) )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
      a2,
      &v11,
      (__int64)hMonitor);
    v8 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                    (__int64 *)&v11,
                    &v12);
    v5 = v8[3]
       - *((float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                      (__int64 *)&v11,
                      &v13)
         + 3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  }
  else
  {
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(hMonitor, &mi) )
      return (float)(mi.rcMonitor.bottom + mi.rcWork.top - mi.rcWork.bottom - mi.rcMonitor.top);
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x128,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
        v9);
  }
  return v5;
}
