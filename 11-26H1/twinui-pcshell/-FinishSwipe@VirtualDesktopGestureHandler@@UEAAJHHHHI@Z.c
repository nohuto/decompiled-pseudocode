/*
 * XREFs of ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18055F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18055DCC0 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18055DD4C (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 *     ?Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3@W4GestureEndState@3@@Z @ 0x1805630EC (-Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::FinishSwipe(
        VirtualDesktopGestureHandler *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  char *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  VirtualDesktopGestureContext *v9; // rcx
  int v10; // eax
  _BYTE v12[80]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = (char *)this + 88;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (__int64)this + 88,
    (__int64)v12);
  v7 = 0;
  if ( !*((_QWORD *)this + 5) )
  {
    v8 = 1664LL;
LABEL_5:
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_9;
  }
  v9 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 10);
  if ( !v9 )
  {
    v8 = 1665LL;
    goto LABEL_5;
  }
  v10 = VirtualDesktopGestureContext::Commit(
          v9,
          (struct IVirtualDesktopGestureHandlerPrivate *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
          a4,
          0);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x683,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v10);
    VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 16), 0);
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::Stop(v6, 0LL, 0LL);
LABEL_9:
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v12);
  return v7;
}
