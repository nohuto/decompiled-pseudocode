/*
 * XREFs of rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140154200
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x140205800 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

_UNKNOWN **__fastcall rimQueueUpdateInputGlolbalsAsyncWorkItem(struct RawInputManagerObject *a1, __int64 a2)
{
  void *v2; // rdi
  _QWORD *v4; // rax
  int v5; // edx
  int v6; // r8d
  _QWORD *v7; // rbx
  unsigned int v8; // eax
  _UNKNOWN **result; // rax
  char v10; // r14
  bool v11; // r12
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  v2 = *(void **)(a2 + 32);
  v4 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x70707352u);
  v7 = v4;
  if ( v4 )
  {
    v4[1] = v4;
    *v4 = v4;
    if ( ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 77LL);
    v7[3] = a1;
    if ( v2 )
    {
      if ( ObReferenceObjectByPointer(v2, 3u, ExRawInputManagerObjectType, 0) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 92LL);
      v7[7] = v2;
    }
    *((_DWORD *)v7 + 24) = 0;
    *((_DWORD *)v7 + 8) = 0;
    *((_DWORD *)v7 + 4) = 5;
    *((_DWORD *)v7 + 28) = 0;
    v8 = *((_DWORD *)a1 + 277) + 1;
    *((_DWORD *)a1 + 277) = v8;
    if ( v8 > *((_DWORD *)a1 + 278) )
      *((_DWORD *)a1 + 278) = v8;
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, (char **)v7);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v10 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v14,
                            v13,
                            *(_QWORD *)(UserSessionState + 19368),
                            2);
    }
  }
  return result;
}
