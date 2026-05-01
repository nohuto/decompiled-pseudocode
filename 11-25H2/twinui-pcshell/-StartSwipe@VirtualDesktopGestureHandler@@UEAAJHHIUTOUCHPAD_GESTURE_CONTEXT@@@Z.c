/*
 * XREFs of ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x18053F100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1801587C8 (--1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@$$V@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@SA?AV012@XZ @ 0x180537EF8 (--$Start@$$V@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@SA-AV012@XZ.c)
 *     ??4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x180538DD0 (--4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18053D064 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 *     ?TransferToMember@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA?AV123@XZ @ 0x18053F7A8 (-TransferToMember@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA-AV1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::StartSwipe(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  _BYTE v11[336]; // [rsp+20h] [rbp-2B8h] BYREF
  _BYTE v12[336]; // [rsp+170h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+0h]

  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::Start<>((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v11);
  v6 = VirtualDesktopGestureHandler::InitializeContext((VirtualDesktopGestureHandler *)a1, a4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x669,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v8);
    v9 = VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::TransferToMember(v11, v12);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::operator=((_QWORD *)(a1 + 88), v9);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v12);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x667,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v6);
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *)v11);
  return v7;
}
