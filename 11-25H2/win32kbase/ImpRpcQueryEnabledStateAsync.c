/*
 * XREFs of ImpRpcQueryEnabledStateAsync @ 0x14014C094
 * Callers:
 *     ImpWorkerRoutine @ 0x1400881F0 (ImpWorkerRoutine.c)
 *     ImpRpcAsyncResponseHandler @ 0x140240FF0 (ImpRpcAsyncResponseHandler.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 ImpRpcQueryEnabledStateAsync()
{
  __int64 InputMonitorSessionState; // rsi
  int v2; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+48h] [rbp-40h] BYREF
  int *v4; // [rsp+68h] [rbp-20h]
  int v5; // [rsp+70h] [rbp-18h]
  int v6; // [rsp+74h] [rbp-14h]

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
  if ( (unsigned int)dword_14029F1A0 > 5 )
  {
    v2 = 0;
    v4 = &v2;
    v5 = 4;
    v6 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284BC2, 0LL, 0LL, 3u, &v3);
  }
  return 0LL;
}
