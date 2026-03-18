/*
 * XREFs of ImSessionStop @ 0x1400BD4B8
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     ImpRpcDisconnect @ 0x1400BD804 (ImpRpcDisconnect.c)
 *     ImpCleanupWork @ 0x1400BDA18 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1400BDAA4 (ImpWaitForWorkerShutdown.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS ImSessionStop()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int *InputMonitorSessionState; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS result; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // [rsp+38h] [rbp-39h] BYREF
  int v24; // [rsp+3Ch] [rbp-35h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  void *v27; // [rsp+68h] [rbp-9h]
  int v28; // [rsp+70h] [rbp-1h]
  int v29; // [rsp+74h] [rbp+3h]
  unsigned int *v30; // [rsp+78h] [rbp+7h]
  __int64 v31; // [rsp+80h] [rbp+Fh]
  unsigned int *v32; // [rsp+88h] [rbp+17h]
  __int64 v33; // [rsp+90h] [rbp+1Fh]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+98h] [rbp+27h]
  __int64 v35; // [rsp+A0h] [rbp+2Fh]

  if ( KeGetCurrentIrql() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  InputMonitorSessionState = (unsigned int *)W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v6);
  if ( (InputMonitorSessionState[1] & 0x80000000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v6);
  if ( *InputMonitorSessionState != (unsigned int)PsGetCurrentProcessSessionId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( *((_BYTE *)InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  v10 = *InputMonitorSessionState;
  if ( (_DWORD)v10 == MEMORY[0xFFFFF780000002D8] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v9);
  v11 = ImpWaitForWorkerShutdown();
  v14 = (unsigned int)v11;
  if ( v11 < 0 && (unsigned int)dword_1402AA1C0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_1402AA1C0, 0x400000000000LL) )
  {
    v23 = *InputMonitorSessionState;
    v24 = v14;
    v30 = &v23;
    v31 = 4LL;
    v32 = (unsigned int *)&v24;
    v33 = 4LL;
    p_EventDescriptor = &EventDescriptor;
    *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
    v35 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_1402AA1C0, &unk_14028EDE8, 0LL, 0LL, 5, &UserData);
  }
  v15 = ImpRpcDisconnect(v13, v12, v14);
  v18 = (unsigned int)v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_1402AA1C0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_1402AA1C0, 0x400000000000LL) )
    {
      v24 = *InputMonitorSessionState;
      v23 = v18;
      v30 = (unsigned int *)&v24;
      v31 = 4LL;
      v32 = &v23;
      v33 = 4LL;
      p_EventDescriptor = &EventDescriptor;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v35 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_1402AA1C0, &unk_14028EE3A, 0LL, 0LL, 5, &UserData);
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  }
  result = ImpCleanupWork(v17, v16, v18);
  v22 = (unsigned int)result;
  if ( result < 0 )
  {
    if ( (unsigned int)dword_1402AA1C0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_1402AA1C0, 0x400000000000LL) )
    {
      v24 = *InputMonitorSessionState;
      v23 = v22;
      v30 = (unsigned int *)&v24;
      v31 = 4LL;
      v32 = &v23;
      v33 = 4LL;
      p_EventDescriptor = &EventDescriptor;
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v35 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_1402AA1C0, &unk_14028ECED, 0LL, 0LL, 5, &UserData);
    }
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  }
  if ( (unsigned int)dword_1402AA1C0 > 5 )
  {
    v24 = *InputMonitorSessionState;
    v31 = 4LL;
    v30 = (unsigned int *)&v24;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1402AA1C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
    v27 = &unk_14028EDCC;
    UserData.Reserved = 2;
    v28 = 27;
    v29 = 1;
    v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    result = EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  *InputMonitorSessionState = -1;
  return result;
}
