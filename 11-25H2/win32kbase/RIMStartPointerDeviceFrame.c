/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x140030008
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400303D4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x14002EF30 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1400F4B04 (-StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z.c)
 *     ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x140100620 (-StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // esi
  char v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  _QWORD *HoldingFrame; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  v4 = 0;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      48,
      (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids);
  }
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( HoldingFrame )
    goto LABEL_43;
  v13 = Win32AllocPoolZInitImpl(0x100uLL, 0x58uLL, 0x66687352u);
  HoldingFrame = v13;
  if ( v13 )
  {
    v13[3] = *(_QWORD *)(a2 + 16);
    v14 = (_QWORD *)(a1 + 728);
    v15 = *(_QWORD *)(a1 + 728);
    if ( *(_QWORD *)(v15 + 8) != a1 + 728 )
      __fastfail(3u);
    *HoldingFrame = v15;
    HoldingFrame[1] = v14;
    *(_QWORD *)(v15 + 8) = HoldingFrame;
    *v14 = HoldingFrame;
  }
  if ( HoldingFrame )
  {
LABEL_43:
    if ( *((_DWORD *)HoldingFrame + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 802LL);
    if ( *((_DWORD *)HoldingFrame + 11) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 803LL);
    if ( *((_DWORD *)HoldingFrame + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 804LL);
    if ( *((_DWORD *)HoldingFrame + 10) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 805LL);
    if ( HoldingFrame[9] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 806LL);
    if ( HoldingFrame[10] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 807LL);
    if ( HoldingFrame[4] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 808LL);
    if ( HoldingFrame[7] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 809LL);
    if ( HoldingFrame[8] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 810LL);
    *((_DWORD *)HoldingFrame + 4) = 1;
    v4 = 1;
    HoldingFrame[4] = a3;
  }
  InputTraceLogging::RIM::StartFrame((const struct RIMDEV *)a2, (const struct RIMHOLDINGFRAME *)HoldingFrame);
  InputTraceLogging::TelemetryDebug::RIM::StartFrame(a3);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v17 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 19336),
      4,
      1,
      49,
      (__int64)&WPP_f2670351d78231c653e591cd52a969fd_Traceguids,
      v4);
  }
  return v4;
}
