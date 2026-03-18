/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0
 * Callers:
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x140071E80 (rimProcessMissingPointerDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400F577C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1400F92B0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400F9A08 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMSetContactEndState @ 0x14019D4A8 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, _QWORD *a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  __int16 v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdi
  char v21; // bp
  char v22; // bl
  bool v23; // si
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  PVOID Buffer; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+10h] BYREF
  ULONG v29; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a2[57];
  Buffer = 0LL;
  v29 = 0;
  if ( !*(_QWORD *)(v6 + 792) )
  {
    LODWORD(v28) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2052LL);
  }
  if ( (a3[8] & 2) == 0 )
  {
    LODWORD(v28) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2054LL);
  }
  v11 = a6;
  v12 = a5;
  a3[591] |= 1u;
  RIMSetContactEndState(v6, (_DWORD)a3, a4, v12, v11);
  v13 = *((_WORD *)a3 + 1212);
  v14 = *(_DWORD *)(v6 + 24);
  v28 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v14, v13, (int *)&v28, a3 + 606, 2);
  if ( (a3[8] & 4) == 0 )
  {
    v16 = RIMAddSimulatedPointerDeviceData(v15, v6, (__int64)a3, (__int64)(a3 + 606), (CHAR **)&Buffer, &v29);
    v20 = (char *)Buffer;
    v21 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(UserSessionState + 19368),
          4,
          1,
          48,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v21);
      }
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, (__int64)a2, Buffer, v29, a3 + 604);
    }
    if ( v20 )
      GreDeleteFastMutex(v20, v17, v18, v19);
  }
}
