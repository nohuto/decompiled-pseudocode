/*
 * XREFs of ImpRpcSendString @ 0x140088D44
 * Callers:
 *     ImpProcessSequence @ 0x140088A74 (ImpProcessSequence.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CLIENT_CALL_RETURN __fastcall ImpRpcSendString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  int v7; // edi
  __int64 InputMonitorSessionState; // rbx
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]
  __int64 v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+60h] [rbp-18h]
  int v18; // [rsp+64h] [rbp-14h]

  v7 = a4;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v13[0] = a1;
  v13[1] = a2;
  v13[2] = a3;
  v14 = v7;
  v15 = a5;
  v16 = a6;
  v17 = *a7;
  v18 = a7[1];
  return NdrClientCall3(
           (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
           0,
           0LL,
           *(_QWORD *)(InputMonitorSessionState + 16),
           *(_QWORD *)(InputMonitorSessionState + 8),
           v13);
}
