/*
 * XREFs of ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18051AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801C99B8 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1805150A4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180515178 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0I_ea_180515178.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1805153AC (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x180519534 (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x180519710 (-Maximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x18051B6C0 (-StaleState@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x18051BD4C (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18051C2F0 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x18051DDD8 (-TryClearOldFullScreenView@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18051E0EC (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18051E4D8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
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

  v9 = (TabletModePositioner *)((char *)this - 160);
  if ( *((_DWORD *)this + 18) != 2 && TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 160)) )
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
               &a4->left,
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
