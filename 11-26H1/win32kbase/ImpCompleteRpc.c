/*
 * XREFs of ImpCompleteRpc @ 0x1400BD230
 * Callers:
 *     ImpRpcDisconnect @ 0x1400BD804 (ImpRpcDisconnect.c)
 *     ImpRpcAsyncResponseHandler @ 0x14024A738 (ImpRpcAsyncResponseHandler.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 ImpCompleteRpc()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 InputMonitorSessionState; // rsi
  __int64 v3; // r8
  unsigned int v4; // ebx
  int Reply; // [rsp+30h] [rbp-98h] BYREF
  int v7; // [rsp+34h] [rbp-94h] BYREF
  unsigned int v8; // [rsp+38h] [rbp-90h] BYREF
  _DWORD v9[3]; // [rsp+3Ch] [rbp-8Ch] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  void *v13; // [rsp+70h] [rbp-58h]
  int v14; // [rsp+78h] [rbp-50h]
  int v15; // [rsp+7Ch] [rbp-4Ch]
  int *v16; // [rsp+80h] [rbp-48h]
  __int64 v17; // [rsp+88h] [rbp-40h]
  unsigned int *v18; // [rsp+90h] [rbp-38h]
  __int64 v19; // [rsp+98h] [rbp-30h]
  int *v20; // [rsp+A0h] [rbp-28h]
  __int64 v21; // [rsp+A8h] [rbp-20h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  v10 = InputMonitorSessionState;
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  if ( !*(_QWORD *)(InputMonitorSessionState + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  if ( !*(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  if ( !*(_BYTE *)(InputMonitorSessionState + 560) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  Reply = 0;
  *(_BYTE *)(InputMonitorSessionState + 560) = 0;
  v4 = RpcAsyncCompleteCall((PRPC_ASYNC_STATE)(InputMonitorSessionState + 472), &Reply);
  v9[1] = v4;
  if ( v4 == -1073610672 || !v4 )
  {
    if ( (unsigned int)dword_1402AA1C0 > 5 )
    {
      v9[0] = *(_DWORD *)InputMonitorSessionState;
      v16 = v9;
      v17 = 4LL;
      v8 = v4;
      v18 = &v8;
      v19 = 4LL;
      v7 = Reply;
      v20 = &v7;
      v21 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = (ULONGLONG)off_1402AA1C8;
      UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
      UserData.Reserved = 2;
      v13 = &unk_14028F2C3;
      v14 = 50;
      v15 = 1;
      LODWORD(v10) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  else if ( (unsigned int)dword_1402AA1C0 > 5 )
  {
    v7 = *(_DWORD *)InputMonitorSessionState;
    v16 = &v7;
    v17 = 4LL;
    v8 = v4;
    v18 = &v8;
    v19 = 4LL;
    v9[0] = Reply;
    v20 = v9;
    v21 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_1402AA1C0, &unk_14028F1B4, 0LL, 0LL, 5, &UserData);
  }
  return v4;
}
