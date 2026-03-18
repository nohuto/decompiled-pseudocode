/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1401ECF1C
 * Callers:
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401F0B64 (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(_DWORD *Object)
{
  char v2; // bl
  bool v3; // si
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  void *v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  char v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // bl
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(Object, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      55,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
  if ( Object[264] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1791);
  if ( (Object[21] & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1792);
  v9 = RIMDiscoverDevicesOfInputType(Object);
  if ( v9 < 0 )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v8 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v8 & 1) == 0)
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(v8, WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19336),
        4,
        1,
        56,
        (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 19336),
      4,
      1,
      57,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
  return (unsigned int)v9;
}
