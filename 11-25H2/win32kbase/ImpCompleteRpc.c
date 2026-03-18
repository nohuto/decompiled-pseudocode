/*
 * XREFs of ImpCompleteRpc @ 0x14014A960
 * Callers:
 *     ImpRpcDisconnect @ 0x14014A738 (ImpRpcDisconnect.c)
 *     ImpRpcAsyncResponseHandler @ 0x140240FF0 (ImpRpcAsyncResponseHandler.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 ImpCompleteRpc()
{
  __int64 InputMonitorSessionState; // rsi
  unsigned int v1; // ebx
  __int64 *v2; // rax
  unsigned __int8 *v3; // rdx
  int Reply; // [rsp+30h] [rbp-88h] BYREF
  int v6; // [rsp+34h] [rbp-84h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-80h] BYREF
  __int64 v8; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-48h]
  int v12; // [rsp+78h] [rbp-40h]
  int v13; // [rsp+7Ch] [rbp-3Ch]
  unsigned int *v14; // [rsp+80h] [rbp-38h]
  int v15; // [rsp+88h] [rbp-30h]
  int v16; // [rsp+8Ch] [rbp-2Ch]
  __int64 *v17; // [rsp+90h] [rbp-28h]
  int v18; // [rsp+98h] [rbp-20h]
  int v19; // [rsp+9Ch] [rbp-1Ch]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  v8 = InputMonitorSessionState;
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !*(_BYTE *)(InputMonitorSessionState + 560) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  Reply = 0;
  *(_BYTE *)(InputMonitorSessionState + 560) = 0;
  v1 = RpcAsyncCompleteCall((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472), &Reply);
  v9 = v1;
  if ( v1 == -1073610672 || !v1 )
  {
    if ( (unsigned int)dword_14029F1A0 > 5 )
    {
      LODWORD(v8) = *(_DWORD *)InputMonitorSessionState;
      v11 = &v8;
      v14 = &v7;
      v6 = Reply;
      v2 = (__int64 *)&v6;
      v3 = (unsigned __int8 *)&unk_140284C1F;
      goto LABEL_15;
    }
  }
  else if ( (unsigned int)dword_14029F1A0 > 5 )
  {
    v6 = *(_DWORD *)InputMonitorSessionState;
    v11 = (__int64 *)&v6;
    v14 = &v7;
    LODWORD(v8) = Reply;
    v2 = &v8;
    v3 = (unsigned __int8 *)&unk_140284B5C;
LABEL_15:
    v17 = v2;
    v12 = 4;
    v15 = 4;
    v18 = 4;
    v13 = 0;
    v7 = v1;
    v16 = 0;
    v19 = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, v3, 0LL, 0LL, 5u, &v10);
  }
  return v1;
}
