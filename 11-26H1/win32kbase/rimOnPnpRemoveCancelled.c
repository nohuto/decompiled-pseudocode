/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x14020BD00
 * Callers:
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  char v5; // di
  _UNKNOWN **v6; // r8
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // di
  char v12; // si
  __int64 v13; // rax
  void *v15; // rcx
  NTSTATUS v16; // eax
  void *v17; // rcx
  char v18; // di
  char v19; // si
  __int64 v20; // rax

  if ( (*(_DWORD *)(a2 + 168) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 805);
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 806);
  v4 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = &WPP_RECORDER_INITIALIZED;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(
                         (_DWORD)WPP_GLOBAL_Control,
                         (unsigned int)&WPP_GLOBAL_Control,
                         (unsigned int)&WPP_RECORDER_INITIALIZED);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      34,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
    v6 = &WPP_RECORDER_INITIALIZED;
  }
  *(_DWORD *)(a2 + 168) &= ~4u;
  if ( (*(_DWORD *)(a2 + 168) & 0x40) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v12,
        *(_QWORD *)(v13 + 19368),
        4u,
        1u,
        0x23u,
        (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
        a1,
        a2,
        0);
    }
    return 0LL;
  }
  else
  {
    v15 = *(void **)(a2 + 232);
    if ( v15 )
    {
      v16 = IoUnregisterPlugPlayNotification(v15);
      v17 = *(void **)(a2 + 32);
      v4 = v16;
      *(_QWORD *)(a2 + 232) = 0LL;
      ObfDereferenceObject(v17);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (LODWORD(v15) = *((_DWORD *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v15 & 1) == 0)
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)v15, (_DWORD)WPP_GLOBAL_Control, (_DWORD)v6);
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        *(_QWORD *)(v20 + 19368),
        4u,
        1u,
        0x24u,
        (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
        a1,
        a2,
        v4);
    }
    return v4;
  }
}
