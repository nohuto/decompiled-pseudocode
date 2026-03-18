/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1400F955C
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x140071E80 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1401B5F48 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400F577C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1400F92B0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400F9A08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimSetContactKeepAliveState @ 0x1400FA6D4 (rimSetContactKeepAliveState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  __int64 v10; // r9
  __int16 v11; // r8
  _DWORD *v12; // r14
  int v13; // edx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rdi
  char v20; // bp
  char v21; // bl
  bool v22; // si
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  PVOID Buffer; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+98h] [rbp+10h] BYREF
  ULONG v28; // [rsp+A0h] [rbp+18h] BYREF

  v5 = a2[57];
  Buffer = 0LL;
  v28 = 0;
  if ( !*(_QWORD *)(v5 + 792) )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1913LL);
  }
  if ( (a3[8] & 2) == 0 )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1914LL);
  }
  if ( (a3[8] & 4) != 0 )
  {
    LODWORD(v27) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1915LL);
  }
  v10 = a5;
  a3[591] |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v10);
  v11 = *((_WORD *)a3 + 1212);
  v12 = a3 + 604;
  v13 = *(_DWORD *)(v5 + 24);
  v27 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v13, v11, (int *)&v27, a3 + 606, 1);
  v15 = RIMAddSimulatedPointerDeviceData(v14, v5, (__int64)a3, (__int64)(a3 + 606), (CHAR **)&Buffer, &v28);
  v19 = (char *)Buffer;
  v20 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        47,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        v20);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, Buffer, v28, v12);
  }
  if ( v19 )
    GreDeleteFastMutex(v19, v16, v17, v18);
}
