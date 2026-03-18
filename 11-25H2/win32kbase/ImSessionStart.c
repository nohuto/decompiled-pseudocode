/*
 * XREFs of ImSessionStart @ 0x140138500
 * Callers:
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ImpInitializeWork @ 0x14013882C (ImpInitializeWork.c)
 *     ImpRpcConnect @ 0x140138CE8 (ImpRpcConnect.c)
 *     ImpShutdownWorker @ 0x140149AD8 (ImpShutdownWorker.c)
 *     ImpCleanupWork @ 0x14015208C (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x140155268 (ImpWaitForWorkerShutdown.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ImSessionStart(PVOID Object)
{
  int *InputMonitorSessionState; // rdi
  int CurrentProcessSessionId; // ebx
  int v4; // ebx
  int v5; // eax
  struct _KEVENT *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+38h] [rbp-39h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-31h] BYREF
  int v12; // [rsp+48h] [rbp-29h] BYREF
  __int64 v13; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  PRKEVENT *p_Event; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  int *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]
  __int64 *v25; // [rsp+A8h] [rbp+37h]
  int v26; // [rsp+B0h] [rbp+3Fh]
  int v27; // [rsp+B4h] [rbp+43h]

  InputMonitorSessionState = (int *)W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *InputMonitorSessionState = -1;
  InputMonitorSessionState[1] = 0;
  Event = 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *InputMonitorSessionState = CurrentProcessSessionId;
  v4 = ImpInitializeWork(Object);
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_14029F1A0 > 2
      && (qword_14029F1B0 & 0x400000000000LL) != 0
      && (qword_14029F1B8 & 0x400000000000LL) == qword_14029F1B8 )
    {
      v5 = *InputMonitorSessionState;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v12 = v5;
      p_Event = (PRKEVENT *)&v12;
      v22 = &v10;
      v25 = &v13;
      *(_DWORD *)&EventDescriptor.Level = 2;
      UserData.Ptr = (ULONGLONG)off_14029F1A8;
      v20 = 4;
      v23 = 4;
      EventDescriptor.Keyword = 0x400000000000LL;
      v10 = v4;
      v13 = 0x1000000LL;
      v26 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_14029F1A8;
      v16 = &unk_1402847C7;
      UserData.Reserved = 2;
      v17 = 57;
      v18 = 1;
      LODWORD(Event) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_14029F1C0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    InputMonitorSessionState[1] = v4;
LABEL_18:
    *InputMonitorSessionState = -1;
    return (unsigned int)v4;
  }
  v6 = Event;
  if ( !Event )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v4 = ImpRpcConnect();
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_14029F1A0 > 2 && tlgKeywordOn((__int64)&dword_14029F1A0, 0x400000000000LL) )
    {
      v7 = *InputMonitorSessionState;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      LODWORD(Event) = v7;
      p_Event = &Event;
      v22 = &v10;
      v25 = &v13;
      v20 = 4;
      v23 = 4;
      v10 = v4;
      v13 = 0x1000000LL;
      v26 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284801, 0LL, 0LL, 5u, &UserData);
    }
    InputMonitorSessionState[1] = v4;
    ImpShutdownWorker();
    KeSetEvent(v6, 0, 0);
    ImpWaitForWorkerShutdown();
    ImpCleanupWork();
    goto LABEL_18;
  }
  if ( KeSetEvent(Event, 0, 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)dword_14029F1A0 > 5 )
  {
    v8 = *InputMonitorSessionState;
    v21 = 0;
    LODWORD(Event) = v8;
    v20 = 4;
    p_Event = &Event;
    v24 = 0;
    v10 = MEMORY[0xFFFFF780000002D8];
    v22 = &v10;
    v23 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284783, 0LL, 0LL, 4u, &UserData);
  }
  InputMonitorSessionState[1] = v4;
  return (unsigned int)v4;
}
