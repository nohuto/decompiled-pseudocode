/*
 * XREFs of ?IsTouchEdgeGestureAllowed@TouchEdgeGestureProcessor@@AEAA_NXZ @ 0x1800FC1A0
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800FB944 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??$SubSystemHostType@AEAW4WIN32_SUBSYSTEM_HOST_TYPE@@@TouchEdgeGestureTelemetry@@SAXAEAW4WIN32_SUBSYSTEM_HOST_TYPE@@@Z @ 0x1800FC288 (--$SubSystemHostType@AEAW4WIN32_SUBSYSTEM_HOST_TYPE@@@TouchEdgeGestureTelemetry@@SAXAEAW4WIN32_S.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800FC738 (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ??$AllowEdgeSwipe@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x1800FC7E4 (--$AllowEdgeSwipe@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D8D8C (IsQueryWin32SubsystemHostPresent.c)
 */

char __fastcall TouchEdgeGestureProcessor::IsTouchEdgeGestureAllowed(TouchEdgeGestureProcessor *this)
{
  struct wil::details::IFailureCallback *v1; // rax
  char v2; // bl
  int Win32SubsystemHost; // edi
  char v4; // di
  int v6; // [rsp+20h] [rbp-50h] BYREF
  const char *v7; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  char v9; // [rsp+38h] [rbp-38h]
  char v10[48]; // [rsp+40h] [rbp-30h] BYREF
  TouchEdgeGestureProcessor *v11; // [rsp+80h] [rbp+10h] BYREF
  int v12; // [rsp+88h] [rbp+18h] BYREF

  v11 = this;
  v1 = (struct wil::details::IFailureCallback *)wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
                                                  this,
                                                  _lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  v2 = 0;
  v7 = "TouchEdgeGestureProcessor::IsTouchEdgeGestureAllowed";
  v9 = 0;
  v6 = 0;
  v8 = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v10,
    v1,
    (struct wil::CallContextInfo *)&v6,
    1);
  if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() )
    Win32SubsystemHost = QueryWin32SubsystemHost();
  else
    Win32SubsystemHost = 0;
  LODWORD(v11) = Win32SubsystemHost;
  TouchEdgeGestureTelemetry::SubSystemHostType<enum WIN32_SUBSYSTEM_HOST_TYPE &>(&v11);
  if ( Win32SubsystemHost != 1 )
  {
    LOBYTE(v11) = 1;
    v12 = 1;
    v4 = 1;
    if ( (int)PolicyManager_GetPolicyInt(L"LockDown", L"AllowEdgeSwipe", &v12) >= 0 && v12 != 1 )
    {
      LOBYTE(v11) = 0;
      v4 = 0;
    }
    TouchEdgeGestureTelemetry::AllowEdgeSwipe<bool &>(&v11);
    v2 = v4;
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)&v6);
  return v2;
}
