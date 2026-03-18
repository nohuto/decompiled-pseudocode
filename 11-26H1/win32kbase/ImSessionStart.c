/*
 * XREFs of ImSessionStart @ 0x1400BDFF8
 * Callers:
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 * Callees:
 *     ImpCleanupWork @ 0x1400BDA18 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1400BDAA4 (ImpWaitForWorkerShutdown.c)
 *     ImpShutdownWorker @ 0x1400BDB60 (ImpShutdownWorker.c)
 *     ImpRpcConnect @ 0x1400BDCEC (ImpRpcConnect.c)
 *     ImpInitializeWork @ 0x1400BE40C (ImpInitializeWork.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall ImSessionStart(PVOID Object)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int *InputMonitorSessionState; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int CurrentProcessSessionId; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  struct _KEVENT *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v19; // [rsp+38h] [rbp-39h] BYREF
  int v20; // [rsp+3Ch] [rbp-35h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v25; // [rsp+78h] [rbp+7h]
  int v26; // [rsp+80h] [rbp+Fh]
  int v27; // [rsp+84h] [rbp+13h]
  PRKEVENT *p_Event; // [rsp+88h] [rbp+17h]
  __int64 v29; // [rsp+90h] [rbp+1Fh]
  int *v30; // [rsp+98h] [rbp+27h]
  __int64 v31; // [rsp+A0h] [rbp+2Fh]
  _QWORD *v32; // [rsp+A8h] [rbp+37h]
  __int64 v33; // [rsp+B0h] [rbp+3Fh]

  InputMonitorSessionState = (unsigned int *)W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v5);
  *InputMonitorSessionState = -1;
  InputMonitorSessionState[1] = 0;
  Event = 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  *InputMonitorSessionState = CurrentProcessSessionId;
  v12 = ImpInitializeWork(Object);
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_1402AA1C0 > 2
      && (qword_1402AA1D0 & 0x400000000000LL) != 0
      && (qword_1402AA1D8 & 0x400000000000LL) == qword_1402AA1D8 )
    {
      v19 = *InputMonitorSessionState;
      EventDescriptor.Keyword = 0x400000000000LL;
      p_Event = (PRKEVENT *)&v19;
      v29 = 4LL;
      v30 = &v20;
      v32 = v23;
      *(_DWORD *)&EventDescriptor.Level = 2;
      UserData.Ptr = (ULONGLONG)off_1402AA1C8;
      v20 = v12;
      v31 = 4LL;
      v23[0] = 0x1000000LL;
      v33 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
      v25 = &unk_14028ED40;
      UserData.Reserved = 2;
      v26 = 57;
      v27 = 1;
      LODWORD(Event) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    InputMonitorSessionState[1] = v12;
    goto LABEL_19;
  }
  v14 = Event;
  if ( !Event )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
  v12 = ImpRpcConnect();
  if ( v12 < 0 )
  {
    if ( (unsigned int)dword_1402AA1C0 > 2
      && (qword_1402AA1D0 & 0x400000000000LL) != 0
      && (qword_1402AA1D8 & 0x400000000000LL) == qword_1402AA1D8 )
    {
      LODWORD(Event) = *InputMonitorSessionState;
      EventDescriptor.Keyword = 0x400000000000LL;
      p_Event = &Event;
      v29 = 4LL;
      v30 = &v20;
      v32 = v23;
      *(_DWORD *)&EventDescriptor.Level = 2;
      UserData.Ptr = (ULONGLONG)off_1402AA1C8;
      v20 = v12;
      v31 = 4LL;
      v23[0] = 0x1000000LL;
      v33 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
      v25 = &unk_14028ED85;
      UserData.Reserved = 2;
      v26 = 59;
      v27 = 1;
      v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    InputMonitorSessionState[1] = v12;
    ImpShutdownWorker();
    KeSetEvent(v14, 0, 0);
    ImpWaitForWorkerShutdown();
    ImpCleanupWork();
LABEL_19:
    *InputMonitorSessionState = -1;
    return (unsigned int)v12;
  }
  if ( KeSetEvent(Event, 0, 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  if ( (unsigned int)dword_1402AA1C0 > 5 )
  {
    LODWORD(Event) = *InputMonitorSessionState;
    v29 = 4LL;
    p_Event = &Event;
    v20 = MEMORY[0xFFFFF780000002D8];
    v30 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1402AA1C8;
    v31 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
    v25 = &unk_14028EE8F;
    UserData.Reserved = 2;
    v26 = 45;
    v27 = 1;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  InputMonitorSessionState[1] = v12;
  return (unsigned int)v12;
}
