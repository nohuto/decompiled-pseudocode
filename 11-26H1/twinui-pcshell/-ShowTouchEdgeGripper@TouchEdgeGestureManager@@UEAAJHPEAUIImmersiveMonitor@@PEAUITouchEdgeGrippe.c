/*
 * XREFs of ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x18058DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$ShowTouchEdgeGripper@AEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@TouchEdgeGestureTelemetry@@SAXAEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@Z @ 0x18058CB7C (--$ShowTouchEdgeGripper@AEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@Tou.c)
 *     ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x180596B10 (-ShowGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PE.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806851D0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchEdgeGestureManager::ShowTouchEdgeGripper(
        TouchEdgeGestureManager *this,
        int a2,
        struct IImmersiveMonitor *a3,
        struct ITouchEdgeGripperEventHandler *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  unsigned int v11; // edi
  int v12; // ebx
  const char *v13; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+68h] [rbp+10h] BYREF
  struct IImmersiveMonitor *v17; // [rsp+70h] [rbp+18h]
  struct ITouchEdgeGripperEventHandler *v18; // [rsp+78h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v16 = a2;
  TouchEdgeGestureTelemetry::ShowTouchEdgeGripper<int &,IImmersiveMonitor * &,ITouchEdgeGripperEventHandler * &>((__int64)&v16);
  try
  {
    v10 = (_QWORD *)((char *)this + 72);
    if ( *((struct ITouchEdgeGripperEventHandler **)this + 9) != a4 )
    {
      if ( *v10 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 9);
      *v10 = a4;
      if ( a4 )
        (*(void (__fastcall **)(struct ITouchEdgeGripperEventHandler *))(*(_QWORD *)a4 + 8LL))(a4);
    }
    v11 = 0;
    v12 = a2 - 2;
    if ( v12 )
    {
      if ( v12 == 1 )
        v11 = 2;
      else
        MicrosoftTelemetryAssertTriggeredNoArgs(v9, v8);
    }
    else
    {
      v11 = 1;
    }
    TouchEdgeGripperHost::ShowGripperAsync(*((_QWORD *)this + 11), &v16, v11, a3, 0);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x45,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                           v13);
  }
  return result;
}
