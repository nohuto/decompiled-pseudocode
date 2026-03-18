/*
 * XREFs of ImpRpcDisconnect @ 0x1400BD804
 * Callers:
 *     ImSessionStop @ 0x1400BD4B8 (ImSessionStop.c)
 * Callees:
 *     ImpCompleteRpc @ 0x1400BD230 (ImpCompleteRpc.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcAsyncUnInit @ 0x1400C0264 (ImpRpcAsyncUnInit.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 ImpRpcDisconnect()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 InputMonitorSessionState; // rdi
  __int64 v3; // r8
  RPC_BINDING_HANDLE *v4; // r14
  RPC_STATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // esi
  __int64 v11; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-88h] BYREF
  RPC_BINDING_HANDLE *Binding; // [rsp+58h] [rbp-70h]
  _QWORD *v14; // [rsp+60h] [rbp-68h]
  char v15[32]; // [rsp+70h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+90h] [rbp-38h]
  __int64 v17; // [rsp+98h] [rbp-30h]
  _QWORD *v18; // [rsp+A0h] [rbp-28h]
  __int64 v19; // [rsp+A8h] [rbp-20h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  v12[0] = InputMonitorSessionState;
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  v14 = (_QWORD *)(InputMonitorSessionState + 8);
  v12[2] = InputMonitorSessionState + 8;
  if ( !*(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  v4 = (RPC_BINDING_HANDLE *)(InputMonitorSessionState + 16);
  v11 = InputMonitorSessionState + 16;
  Binding = (RPC_BINDING_HANDLE *)(InputMonitorSessionState + 16);
  if ( !*(_QWORD *)(InputMonitorSessionState + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  if ( *(_BYTE *)(InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  if ( !*(_BYTE *)(InputMonitorSessionState + 560) )
    goto LABEL_16;
  v5 = RpcAsyncGetCallStatus((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472));
  if ( v5 != 259 && v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  RpcAsyncCancelCall((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472), 1);
  v9 = ImpCompleteRpc();
  if ( v9 == -1073610672 )
    v9 = 0;
  if ( v9 >= 0 )
  {
LABEL_16:
    ImpRpcAsyncUnInit();
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, InputMonitorSessionState + 8);
    RpcBindingUnbind(*v4);
    v9 = RpcBindingFree(Binding);
    *v14 = 0LL;
    *v4 = 0LL;
  }
  if ( v9 < 0 && (unsigned int)dword_1402AA1C0 > 2 )
  {
    LODWORD(v11) = v9;
    v16 = &v11;
    v17 = 4LL;
    LODWORD(v12[0]) = *(_DWORD *)InputMonitorSessionState;
    v18 = v12;
    v19 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_1402AA1C0, &unk_14028F255, 0LL, 0LL, 4, v15);
  }
  return (unsigned int)v9;
}
