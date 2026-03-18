/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1400320D4 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x14003034C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400770F8 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMSetContactEndState @ 0x140183AE0 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1401E2194 (RIMAddSimulatedPointerDeviceData.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, _QWORD *a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  char *v18; // rdi
  char v19; // bp
  char v20; // bl
  bool v21; // si
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  PVOID Buffer[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a2[57];
  Buffer[0] = 0LL;
  v27 = 0;
  if ( !*(_QWORD *)(v6 + 792) )
  {
    LODWORD(v26) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2060LL);
  }
  if ( (a3[8] & 2) == 0 )
  {
    LODWORD(v26) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2062LL);
  }
  v11 = a6;
  v12 = a5;
  a3[591] |= 1u;
  RIMSetContactEndState(v6, (_DWORD)a3, a4, v12, v11);
  v13 = *(_DWORD *)(v6 + 24);
  v14 = *((unsigned __int16 *)a3 + 1212);
  v26 = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v13, v14, (unsigned int *)&v26, a3 + 606, 2u);
  if ( (a3[8] & 4) == 0 )
  {
    v16 = RIMAddSimulatedPointerDeviceData(v15, v6, (_DWORD)a3, (int)a3 + 2424, (__int64)Buffer, (__int64)&v27);
    v18 = (char *)Buffer[0];
    v19 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v20 = 0;
      }
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(UserSessionState + 19336),
          4,
          1,
          48,
          (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
          v19);
      }
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, (__int64)a2, (__int64)Buffer[0], v27, a3 + 604);
    }
    if ( v18 )
      GreDeleteFastMutex(v18);
  }
}
