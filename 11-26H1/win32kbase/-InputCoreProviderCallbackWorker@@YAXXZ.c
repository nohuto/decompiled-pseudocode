/*
 * XREFs of ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401DA390 (W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 *     _lambda_2948d61e21ea889f487699dcf0f00513_::operator() @ 0x1401DA680 (_lambda_2948d61e21ea889f487699dcf0f00513_--operator().c)
 * Callees:
 *     UserIsDisconnectConnection @ 0x14002A9D0 (UserIsDisconnectConnection.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14008E5EC (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x14013AD20 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x14018DD60 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 *     RIMTraceAllDevices @ 0x1401C387C (RIMTraceAllDevices.c)
 *     ?Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z @ 0x1401C476C (-Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z.c)
 *     TraceRawMouseThrottlingThresholds @ 0x1401C5624 (TraceRawMouseThrottlingThresholds.c)
 *     ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x140222F0C (-ButtonState@Mouse@InputTraceLogging@@SAXK@Z.c)
 */

void __fastcall InputCoreProviderCallbackWorker(int a1, int a2, int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 MouseProcessor; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 UserSessionState; // rax
  _BYTE v15[264]; // [rsp+20h] [rbp-108h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 69856) && !UserIsDisconnectConnection(v4, v3, v5, v6) )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig(v8, v7, v9);
    CCursorClip::TraceCurrentState();
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
      InputTraceLogging::Mouse::ButtonState(*(_DWORD *)(MouseProcessor + 3780));
    TraceRawMouseThrottlingThresholds();
    UserSessionState = W32GetUserSessionState(v12, v11, v13);
    InputTraceLogging::PTP::Settings((const struct tagTOUCHPAD_PARAMETERS_V3 *)(UserSessionState + 16760));
    RIMTraceAllDevices();
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  }
}
