/*
 * XREFs of ImpShutdownWorker @ 0x1400BDB60
 * Callers:
 *     ?ShutdownImWorker@@YAJXZ @ 0x1400BCD50 (-ShutdownImWorker@@YAJXZ.c)
 *     ImSessionStart @ 0x1400BDFF8 (ImSessionStart.c)
 * Callees:
 *     ImpReleaseLock @ 0x1400BF30C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1400BF35C (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 ImpShutdownWorker()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 InputMonitorSessionState; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  int *v18; // [rsp+70h] [rbp+27h]
  __int64 v19; // [rsp+78h] [rbp+2Fh]
  _DWORD *v20; // [rsp+80h] [rbp+37h]
  __int64 v21; // [rsp+88h] [rbp+3Fh]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v3);
  ImpAcquireLock(InputMonitorSessionState + 72);
  if ( !*(_BYTE *)(InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  *(_BYTE *)(InputMonitorSessionState + 48) = 0;
  ImpReleaseLock(InputMonitorSessionState + 72);
  if ( !*(_QWORD *)(InputMonitorSessionState + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  KeSetEvent(*(PRKEVENT *)(InputMonitorSessionState + 24), 0, 0);
  if ( (unsigned int)dword_1402AA1C0 > 5 )
  {
    v11 = *(unsigned __int8 *)(InputMonitorSessionState + 561);
    v19 = 4LL;
    v18 = &v11;
    v12[0] = *(_DWORD *)InputMonitorSessionState;
    v20 = v12;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1402AA1C8;
    v21 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
    v15 = &unk_14028EFD8;
    UserData.Reserved = 2;
    v16 = 46;
    v17 = 1;
    v12[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0LL;
}
