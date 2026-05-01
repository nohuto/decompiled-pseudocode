/*
 * XREFs of ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1804F8DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801D39FC (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804E97AC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1804F39D4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804F3A90 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0I_ea_1804F3A90.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3CB0 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1804F7D50 (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1804F7F28 (-Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1804F9918 (-StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1804F9F5C (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FBE88 (-TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1804FC18C (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1804FC564 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModePositioner::ShellTrackedWindowPosChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        int a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  TabletModePositioner *v9; // rsi
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64 *); // rdx
  HWND WindowForView; // rax
  struct IUnknown *v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[41]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v15[42]; // [rsp+180h] [rbp+80h] BYREF

  if ( *((_DWORD *)this + 18) != 2 )
  {
    v9 = (TabletModePositioner *)((char *)this - 160);
    if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v10, (struct IApplicationView *)v10);
      if ( !GetPropW(WindowForView, (LPCWSTR)0xA91D) )
      {
        v12 = (struct IUnknown *)*((_QWORD *)this + 33);
        if ( v12 && SHIsSameObject(v12, (struct IUnknown *)a2) && EqualRect((const RECT *)this + 19, a4) )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 33);
          SetRectEmpty((LPRECT)this + 19);
        }
        else
        {
          wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v15);
          v15[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::StartActivity(
            (TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v15,
            a2,
            a3,
            a4,
            a5);
          if ( TabletModePositioner::IsWindowStateStale(
                 v13,
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                 a4,
                 a5) )
          {
            TabletModeTraceLogging::ShellTrackedWindowPosChanged::StaleState((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v15);
          }
          else if ( a5 )
          {
            if ( a5 == 1 )
            {
              wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
                (struct wil::details::IFailureCallback *)v14,
                (__int64)v15);
              v14[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::Maximized((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v14);
              TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v14);
            }
            else if ( a5 == 2 )
            {
              wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
                (struct wil::details::IFailureCallback *)v14,
                (__int64)v15);
              v14[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
              TabletModePositioner::ViewMinimized(v9, a2, v14);
            }
          }
          else
          {
            wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
              (struct wil::details::IFailureCallback *)v14,
              (__int64)v15);
            v14[0] = &TabletModeTraceLogging::ShellTrackedWindowPosChanged::`vftable';
            TabletModePositioner::ViewRestored(v9, a2, v14);
          }
          TabletModePositioner::TryClearOldFullScreenView(v9, a2);
          wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
          TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((TabletModeTraceLogging::ShellTrackedWindowPosChanged *)v15);
        }
      }
    }
  }
}
