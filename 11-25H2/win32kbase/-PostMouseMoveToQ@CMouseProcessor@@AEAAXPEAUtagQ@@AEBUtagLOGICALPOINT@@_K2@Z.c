/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2@Z @ 0x140221A60
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EBE5C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetUnavailableInputSource @ 0x1400C3540 (SetUnavailableInputSource.c)
 *     HasHidTable @ 0x1400E6884 (HasHidTable.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x140196714 (ApiSetEditionPostMouseMoveToQ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  char v11; // di
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  if ( (*((_DWORD *)a2 + 103) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5974);
  if ( (unsigned int)HasHidTable(*((_QWORD *)a2 + 12), (__int64)a2)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 464LL) + 824LL) + 100LL) & 2) != 0 )
  {
    v10 = (_DWORD *)((char *)a2 + 436);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        6,
        58,
        (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
    }
    v10 = (_DWORD *)((char *)a2 + 436);
    ApiSetEditionPostMouseMoveToQ(
      (__int64)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      a4,
      a5,
      *((_QWORD *)this + 460),
      (__int64)a2 + 436);
  }
  *((_DWORD *)a2 + 103) &= ~0x20u;
  SetUnavailableInputSource(v10);
}
