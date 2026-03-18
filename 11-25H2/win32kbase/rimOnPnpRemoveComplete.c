/*
 * XREFs of rimOnPnpRemoveComplete @ 0x14002E724
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x14002E240 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     RIMRemoveDevOfInputType @ 0x1401D5944 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMCloseDev @ 0x14013F5A8 (RIMCloseDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(char a1, __int64 a2)
{
  char v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  char v9; // di
  bool v10; // si
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  unsigned int v15; // eax
  __int64 v16; // rdx
  void *v17; // rcx
  unsigned int v18; // esi
  NTSTATUS v19; // eax
  void *v20; // rcx
  unsigned int v21; // eax
  char v22; // di
  bool v23; // bp
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  if ( (*(_DWORD *)(a2 + 168) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 711LL);
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 712LL);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      28,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
  *(_DWORD *)(a2 + 168) &= ~8u;
  if ( (*(_DWORD *)(a2 + 168) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 19336),
        4,
        1,
        29,
        (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
        a1,
        a2,
        0);
    }
    return 0LL;
  }
  else
  {
    v15 = RIMCloseDev(a2);
    v17 = *(void **)(a2 + 232);
    v18 = v15;
    if ( v17 )
    {
      v19 = IoUnregisterPlugPlayNotification(v17);
      *(_DWORD *)(a2 + 184) &= ~0x20u;
      v18 = v19;
      v20 = *(void **)(a2 + 32);
      v21 = *(_DWORD *)(a2 + 168) & 0xFFFFFB7F | 0x400;
      *(_QWORD *)(a2 + 232) = 0LL;
      *(_DWORD *)(a2 + 168) = v21;
      ObfDereferenceObject(v20);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 19336),
        4,
        1,
        30,
        (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
        a1,
        a2,
        v18);
    }
    return v18;
  }
}
