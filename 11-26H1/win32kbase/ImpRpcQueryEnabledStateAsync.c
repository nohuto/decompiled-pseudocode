/*
 * XREFs of ImpRpcQueryEnabledStateAsync @ 0x1400C05B8
 * Callers:
 *     ImpWorkerRoutine @ 0x1400BEB90 (ImpWorkerRoutine.c)
 *     ImpRpcAsyncResponseHandler @ 0x14024A738 (ImpRpcAsyncResponseHandler.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 ImpRpcQueryEnabledStateAsync()
{
  __int64 InputMonitorSessionState; // rdi
  _DWORD v2[2]; // [rsp+40h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-40h] BYREF
  void *v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+74h] [rbp-24h]
  _DWORD *v8; // [rsp+78h] [rbp-20h]
  __int64 v9; // [rsp+80h] [rbp-18h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 520) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_BYTE *)(InputMonitorSessionState + 560) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  Ndr64AsyncClientCall(
    (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
    3u,
    0LL,
    InputMonitorSessionState + 472,
    *(_QWORD *)(InputMonitorSessionState + 16),
    *(_QWORD *)(InputMonitorSessionState + 8),
    InputMonitorSessionState + 561);
  *(_BYTE *)(InputMonitorSessionState + 560) = 1;
  if ( (unsigned int)dword_1402AA1C0 > 5 )
  {
    v2[0] = 0;
    v8 = v2;
    v9 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_1402AA1C8;
    UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
    UserData.Reserved = 2;
    v5 = &unk_14028F143;
    v6 = 41;
    v7 = 1;
    v2[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return 0LL;
}
