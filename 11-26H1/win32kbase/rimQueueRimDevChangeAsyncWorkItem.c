/*
 * XREFs of rimQueueRimDevChangeAsyncWorkItem @ 0x140092458
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x140205800 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

_UNKNOWN **__fastcall rimQueueRimDevChangeAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2, int a3)
{
  void *v3; // rdi
  _QWORD *v6; // rax
  int v7; // edx
  int v8; // r8d
  _QWORD *v9; // rbx
  _UNKNOWN **result; // rax
  char v11; // r15
  bool v12; // r12
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx

  v3 = *(void **)(a2 + 32);
  v6 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x70707352u);
  v9 = v6;
  if ( v6 )
  {
    v6[1] = v6;
    *v6 = v6;
    if ( ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 77LL);
    v9[3] = a1;
    if ( v3 )
    {
      if ( ObReferenceObjectByPointer(v3, 3u, ExRawInputManagerObjectType, 0) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 92LL);
      v9[7] = v3;
    }
    *((_DWORD *)v9 + 24) = a3;
    *((_DWORD *)v9 + 8) = 0;
    *((_DWORD *)v9 + 4) = 2;
    *((_DWORD *)v9 + 28) = 0;
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, (char **)v9);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v11 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v11 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v8);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v15,
                            v14,
                            *(_QWORD *)(UserSessionState + 19368),
                            2);
    }
  }
  return result;
}
