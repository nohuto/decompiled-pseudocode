/*
 * XREFs of ImpRpcAsyncResponseHandler @ 0x14024A738
 * Callers:
 *     ImpWorkerRoutine @ 0x1400BEB90 (ImpWorkerRoutine.c)
 * Callees:
 *     ImpCompleteRpc @ 0x1400BD230 (ImpCompleteRpc.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcQueryEnabledStateAsync @ 0x1400C05B8 (ImpRpcQueryEnabledStateAsync.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 ImpRpcAsyncResponseHandler()
{
  __int64 InputMonitorSessionState; // rdi
  int EnabledStateAsync; // ebx
  int v2; // ecx
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+40h] [rbp-9h] BYREF
  int *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)ImpCompleteRpc() == -1073610734 )
  {
    if ( (unsigned int)dword_1402AA1C0 > 5 )
    {
      v4 = *(_DWORD *)InputMonitorSessionState;
      v9 = 4LL;
      v8 = &v4;
      v5 = -1073610734;
      v10 = &v5;
      v11 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1402AA1C0, byte_14028F16D, 0LL, 0LL, 4u, v7);
    }
    return 0;
  }
  else
  {
    EnabledStateAsync = ImpRpcQueryEnabledStateAsync();
    if ( EnabledStateAsync < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (unsigned int)dword_1402AA1C0 > 5 )
    {
      v2 = *(_DWORD *)InputMonitorSessionState;
      v8 = &v5;
      v4 = *(unsigned __int8 *)(InputMonitorSessionState + 561);
      v5 = v2;
      v10 = &v4;
      v9 = 4LL;
      v12 = &v6;
      v11 = 4LL;
      v6 = EnabledStateAsync;
      v13 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1402AA1C0, byte_14028F2F6, 0LL, 0LL, 5u, v7);
    }
  }
  return (unsigned int)EnabledStateAsync;
}
