/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14022432C
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x140119374 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     PostPendingMouseMove @ 0x140119440 (PostPendingMouseMove.c)
 * Callees:
 *     SetUnavailableInputSource @ 0x14006CD60 (SetUnavailableInputSource.c)
 *     HasHidTable @ 0x14006CFAC (HasHidTable.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x14012D2E8 (ApiSetEditionPostMouseMoveToQ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3,
        int a4,
        unsigned __int64 a5,
        const struct _InputDeviceHandle *a6)
{
  int v10; // edx
  int v11; // r8d
  _QWORD *v12; // rdi
  char v13; // di
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  const struct _InputDeviceHandle *v18; // [rsp+40h] [rbp-48h] BYREF
  __int128 v19; // [rsp+48h] [rbp-40h]

  if ( (*((_DWORD *)a2 + 109) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 6013);
  if ( (unsigned int)HasHidTable(*((_QWORD *)a2 + 12))
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 456LL) + 824LL) + 100LL) & 2) != 0 )
  {
    v12 = (_QWORD *)((char *)a2 + 460);
  }
  else
  {
    v18 = a6;
    v19 = 0LL;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        6,
        58,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    v12 = (_QWORD *)((char *)a2 + 460);
    ApiSetEditionPostMouseMoveToQ(
      (__int64)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      a4,
      a5,
      *((_QWORD *)this + 461),
      (__int64)a2 + 460,
      (__int64)&v18);
  }
  *((_DWORD *)a2 + 109) &= ~0x20u;
  SetUnavailableInputSource(v12);
}
