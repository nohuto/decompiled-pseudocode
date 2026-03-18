/*
 * XREFs of ImpRpcSendString @ 0x1400BF6DC
 * Callers:
 *     ImpProcessSequence @ 0x1400BF3B4 (ImpProcessSequence.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 InputMonitorSessionState; // rbx
  __int64 v14; // r8
  _QWORD v16[3]; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+54h] [rbp-24h]
  __int64 v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+60h] [rbp-18h]
  int v21; // [rsp+64h] [rbp-14h]

  v7 = a4;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
  if ( !*(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
  if ( !*(_QWORD *)(InputMonitorSessionState + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
  v16[0] = a1;
  v16[1] = a2;
  v16[2] = a3;
  v17 = v7;
  v18 = a5;
  v19 = a6;
  v20 = *a7;
  v21 = a7[1];
  return NdrClientCall3(
           (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
           0,
           0LL,
           *(_QWORD *)(InputMonitorSessionState + 16),
           *(_QWORD *)(InputMonitorSessionState + 8),
           v16);
}
