/*
 * XREFs of rimFakePnpRemoveComplete @ 0x14020B834
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMCloseDev @ 0x1400933FC (RIMCloseDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2)
{
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  char v9; // bl
  char v10; // si
  __int64 v11; // rax
  int v13; // ecx
  unsigned int v14; // ebp
  int v15; // r8d
  char v16; // bl
  char v17; // si
  __int64 v18; // rax

  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 770);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(
                         (_DWORD)WPP_GLOBAL_Control,
                         (unsigned int)&WPP_GLOBAL_Control,
                         (unsigned int)&WPP_RECORDER_INITIALIZED);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      31,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v10,
        *(_QWORD *)(v11 + 19368),
        4u,
        1u,
        0x20u,
        (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
        a1,
        a2,
        0);
    }
    return 0LL;
  }
  else
  {
    v14 = RIMCloseDev(a2);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v13 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v13 & 1) == 0)
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(v13, (_DWORD)WPP_GLOBAL_Control, v15);
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v17,
        *(_QWORD *)(v18 + 19368),
        4u,
        1u,
        0x21u,
        (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
        a1,
        a2,
        v14);
    }
    return v14;
  }
}
