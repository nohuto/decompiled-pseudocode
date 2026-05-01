/*
 * XREFs of ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18016B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F71C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007903C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ @ 0x180515318 (--1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180517A98 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18051B8D0 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18051E2F8 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  TabletModePositioner *v4; // rdi
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  _QWORD v10[42]; // [rsp+20h] [rbp-168h] BYREF

  v4 = (TabletModePositioner *)(a1 - 136);
  if ( *(_DWORD *)(a1 - 136 + 232) == 1 )
  {
    if ( *(_DWORD *)(a1 + 100) == 1 )
    {
      v6 = a3 - 1;
      if ( !v6 )
        goto LABEL_10;
      v7 = v6 - 3;
      if ( !v7 )
        goto LABEL_10;
      v8 = v7 - 3;
      if ( !v8 || (v9 = v8 - 1) == 0 )
      {
        wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)v10,
          (__int64)"ApplicationViewChangedFocus");
        v10[0] = &TabletModeTraceLogging::ApplicationViewChangedFocus::`vftable';
        TabletModeTraceLogging::ApplicationViewChangedFocus::StartActivity(
          (TabletModeTraceLogging::ApplicationViewChangedFocus *)v10,
          a2);
        TabletModePositioner::ForegroundViewChanged(v4, a2);
        wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
        TabletModeTraceLogging::ApplicationViewChangedFocus::~ApplicationViewChangedFocus((TabletModeTraceLogging::ApplicationViewChangedFocus *)v10);
        return 0LL;
      }
      if ( v9 == 3 )
LABEL_10:
        TabletModePositioner::ViewRemoved((TabletModePositioner *)(a1 - 136), a2);
    }
    return 0LL;
  }
  return 2147947423LL;
}
