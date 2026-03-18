/*
 * XREFs of RIMActivatePointerDeviceDeadzone @ 0x1402031F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z @ 0x14020C0D8 (-ActivateTelemetrySession@RIMDeadzone@@QEAAXH@Z.c)
 */

__int64 __fastcall RIMActivatePointerDeviceDeadzone(__int64 a1, unsigned int a2, int a3)
{
  CTouchProcessor **v6; // rdx
  char v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  _DWORD *v12; // rdi
  unsigned int v13; // ebx
  char v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // di
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx

  v6 = &WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (unsigned int)&WPP_GLOBAL_Control, a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      36,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    v6 = &WPP_GLOBAL_Control;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 )
  {
    v13 = -1073741811;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_GLOBAL_Control, a3);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 19368),
        3,
        1,
        37,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  else if ( a2 < 5 && (v12 = *(_DWORD **)(a1 + 8LL * a2 + 392)) != 0LL )
  {
    v13 = 0;
    if ( v12[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 506);
    if ( v12[4] )
      v12[10] = a3;
    else
      v13 = -1073741823;
    RIMDeadzone::ActivateTelemetrySession(*(RIMDeadzone **)(a1 + 8LL * a2 + 392), a3);
  }
  else
  {
    v13 = -1073741811;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v19 = 0;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v6, a3);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v19;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 19368),
      4,
      1,
      38,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v13);
  }
  return v13;
}
