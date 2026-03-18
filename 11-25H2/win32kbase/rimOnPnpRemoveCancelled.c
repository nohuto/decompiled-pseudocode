/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1401ED600
 * Callers:
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(char a1, __int64 a2)
{
  unsigned int v4; // ebp
  char v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  char v10; // di
  bool v11; // si
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  void *v16; // rcx
  NTSTATUS v17; // eax
  void *v18; // rcx
  char v19; // di
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx

  if ( (*(_DWORD *)(a2 + 168) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 800);
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 801);
  v4 = 0;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      34,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
  *(_DWORD *)(a2 + 168) &= ~4u;
  if ( (*(_DWORD *)(a2 + 168) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19336),
        4,
        1,
        35,
        (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
        a1,
        a2,
        0);
    }
    return 0LL;
  }
  else
  {
    v16 = *(void **)(a2 + 232);
    if ( v16 )
    {
      v17 = IoUnregisterPlugPlayNotification(v16);
      v18 = *(void **)(a2 + 32);
      v4 = v17;
      *(_QWORD *)(a2 + 232) = 0LL;
      ObfDereferenceObject(v18);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v16 = (void *)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v16 & 1) == 0)
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v19 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(v16, WPP_GLOBAL_Control);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 19336),
        4,
        1,
        36,
        (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
        a1,
        a2,
        v4);
    }
    return v4;
  }
}
