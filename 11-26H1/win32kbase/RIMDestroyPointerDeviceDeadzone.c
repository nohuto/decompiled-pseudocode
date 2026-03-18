/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x140203770
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x14017F750 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // edi
  char v6; // si
  _UNKNOWN **v7; // rdx
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char **v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // bl
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v21; // bl
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx

  v4 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = &WPP_RECORDER_INITIALIZED;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      42,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    v7 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
  {
    v4 = -1073741811;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, a3);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 19368),
        3,
        1,
        43,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  else if ( a2 < 5 && (v12 = *(char ***)(a1 + 8LL * a2 + 392)) != 0LL )
  {
    RIMDeadzone::Release(v12);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8LL * a2 + 392) + 4LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1258);
    GreDeleteFastMutex(*(char **)(a1 + 8LL * a2 + 392), v13, v14, v15);
    *(_QWORD *)(a1 + 8LL * a2 + 392) = 0LL;
    --*(_DWORD *)(a1 + 432);
  }
  else
  {
    v4 = -1073741811;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v21 = 0;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v7, a3);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 19368),
      4,
      1,
      44,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v4);
  }
  return v4;
}
