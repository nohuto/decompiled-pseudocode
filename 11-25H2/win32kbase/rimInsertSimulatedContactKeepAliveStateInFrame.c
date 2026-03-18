/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401F1C54
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1400320D4 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x14019BC10 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x14003034C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400770F8 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1401E2194 (RIMAddSimulatedPointerDeviceData.c)
 *     rimSetContactKeepAliveState @ 0x1401F20D0 (rimSetContactKeepAliveState.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  char *v16; // rsi
  char v17; // r15
  char v18; // bl
  bool v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  PVOID Buffer; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h] BYREF
  ULONG v25; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a2[57];
  Buffer = 0LL;
  v25 = 0;
  if ( !*(_QWORD *)(v5 + 792) )
  {
    LODWORD(v24) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1921);
  }
  if ( (a3[8] & 2) == 0 )
  {
    LODWORD(v24) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1922);
  }
  if ( (a3[8] & 4) != 0 )
  {
    LODWORD(v24) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1923);
  }
  v10 = a5;
  a3[591] |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v10);
  v11 = *(_DWORD *)(v5 + 24);
  v12 = *((unsigned __int16 *)a3 + 1212);
  v24 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v11, v12, (unsigned int *)&v24, a3 + 606, 1u);
  v14 = RIMAddSimulatedPointerDeviceData(v13, v5, (__int64)a3, (__int64)(a3 + 606), (CHAR **)&Buffer, &v25);
  v16 = (char *)Buffer;
  v17 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        47,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
        v17);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, (__int64)a2, (__int64)Buffer, v25, a3 + 604);
  }
  if ( v16 )
    GreDeleteFastMutex(v16);
}
