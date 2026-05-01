/*
 * XREFs of ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x180569DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$ShowTouchEdgeGripper@AEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@TouchEdgeGestureTelemetry@@SAXAEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@Z @ 0x180568D54 (--$ShowTouchEdgeGripper@AEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@Tou.c)
 *     ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x180573504 (-ShowGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PE.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rsi
  unsigned int v13; // edi
  int v14; // ebx
  const char *v15; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+68h] [rbp+10h] BYREF
  struct IImmersiveMonitor *v19; // [rsp+70h] [rbp+18h]
  struct ITouchEdgeGripperEventHandler *v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v18 = a2;
  TouchEdgeGestureTelemetry::ShowTouchEdgeGripper<int &,IImmersiveMonitor * &,ITouchEdgeGripperEventHandler * &>((__int64)&v18);
  try
  {
    v12 = (_QWORD *)((char *)this + 72);
    if ( *((struct ITouchEdgeGripperEventHandler **)this + 9) != a4 )
    {
      if ( *v12 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 9);
      *v12 = a4;
      if ( a4 )
        (*(void (__fastcall **)(struct ITouchEdgeGripperEventHandler *))(*(_QWORD *)a4 + 8LL))(a4);
    }
    v13 = 0;
    v14 = a2 - 2;
    if ( v14 )
    {
      if ( v14 == 1 )
        v13 = 2;
      else
        MicrosoftTelemetryAssertTriggeredNoArgs(v9, v8, v10, v11);
    }
    else
    {
      v13 = 1;
    }
    TouchEdgeGripperHost::ShowGripperAsync(*((_QWORD *)this + 11), &v18, v13, a3, 0);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x45,
                           (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
                           v15);
  }
  return result;
}
