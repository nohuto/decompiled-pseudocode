/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1400F9BCC
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z @ 0x1400F9FB4 (-StartFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@@Z.c)
 *     ?StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1400FA10C (-StartFrame@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, const struct RIMDEV *a2, unsigned __int64 a3)
{
  unsigned int v4; // ebp
  char v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 *v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  int v15; // edx
  int v16; // r8d
  char v17; // bl
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v23; // rax
  __int64 v24; // rax

  v4 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      48,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids);
  }
  v12 = (__int64 *)(a1 + 728);
  v13 = *(_QWORD *)(a1 + 728);
  v14 = (_QWORD *)((char *)a2 + 16);
  if ( (__int64 *)v13 != v12 )
  {
    while ( *(_QWORD *)(v13 + 24) != *v14 )
    {
      v13 = *(_QWORD *)v13;
      if ( (__int64 *)v13 == v12 )
        goto LABEL_39;
    }
    if ( v13 )
      goto LABEL_9;
  }
LABEL_39:
  v23 = Win32AllocPoolZInitImpl(256LL, 0x58uLL, 0x66687352u);
  v13 = v23;
  if ( v23 )
  {
    *(_QWORD *)(v23 + 24) = *v14;
    v24 = *v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      __fastfail(3u);
    *(_QWORD *)v13 = v24;
    *(_QWORD *)(v13 + 8) = v12;
    *(_QWORD *)(v24 + 8) = v13;
    *v12 = v13;
  }
  if ( v13 )
  {
LABEL_9:
    if ( *(_DWORD *)(v13 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 794LL);
    if ( *(_DWORD *)(v13 + 44) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 795LL);
    if ( *(_DWORD *)(v13 + 48) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 796LL);
    if ( *(_DWORD *)(v13 + 40) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 797LL);
    if ( *(_QWORD *)(v13 + 72) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 798LL);
    if ( *(_QWORD *)(v13 + 80) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 799LL);
    if ( *(_QWORD *)(v13 + 32) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 800LL);
    if ( *(_QWORD *)(v13 + 56) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 801LL);
    if ( *(_QWORD *)(v13 + 64) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 802LL);
    *(_DWORD *)(v13 + 16) = 1;
    v4 = 1;
    *(_QWORD *)(v13 + 32) = a3;
  }
  InputTraceLogging::RIM::StartFrame(a2, (const struct RIMHOLDINGFRAME *)v13);
  InputTraceLogging::TelemetryDebug::RIM::StartFrame(a3);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v17 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 19368),
      4,
      1,
      49,
      (__int64)&WPP_3860bf17919d3cb2acb39c2fdc2a9255_Traceguids,
      v4);
  }
  return v4;
}
