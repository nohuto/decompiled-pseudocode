/*
 * XREFs of ImpQueueCharacter @ 0x140087F18
 * Callers:
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x140087DF0 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpAcquireLock @ 0x140088964 (ImpAcquireLock.c)
 *     ImpReleaseLock @ 0x1400889B8 (ImpReleaseLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ImpQueueCharacter(__int64 a1, __int64 a2, int a3, __int16 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 InputMonitorSessionState; // rdi
  __int64 v11; // r8
  struct _KPROCESS *CurrentProcess; // r14
  __int64 Pool2; // rax
  __int64 v14; // r8
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned int v22; // [rsp+38h] [rbp-59h] BYREF
  int v23; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v24; // [rsp+40h] [rbp-51h] BYREF
  __int64 v25; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v28; // [rsp+78h] [rbp-19h]
  int v29; // [rsp+80h] [rbp-11h]
  int v30; // [rsp+84h] [rbp-Dh]
  int *v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  __int64 *v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh]
  __int64 *v35; // [rsp+A8h] [rbp+17h]
  __int64 v36; // [rsp+B0h] [rbp+1Fh]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11);
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
  Pool2 = ExAllocatePool2(256LL, 56LL, 1836084809LL);
  v15 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = a3;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_WORD *)(Pool2 + 40) = a4;
    *(_DWORD *)(Pool2 + 44) = (unsigned int)PsGetProcessId(CurrentProcess);
    v15[6] = PsGetProcessSequenceNumber(CurrentProcess);
    ImpAcquireLock(InputMonitorSessionState + 72);
    v16 = *(_QWORD **)(InputMonitorSessionState + 64);
    if ( *v16 != InputMonitorSessionState + 56 )
      __fastfail(3u);
    v15[1] = v16;
    *v15 = InputMonitorSessionState + 56;
    *v16 = v15;
    *(_QWORD *)(InputMonitorSessionState + 64) = v15;
    ImpReleaseLock(InputMonitorSessionState + 72);
    if ( !*(_BYTE *)(InputMonitorSessionState + 48) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    if ( !*(_QWORD *)(InputMonitorSessionState + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    KeSetEvent(*(PRKEVENT *)(InputMonitorSessionState + 24), 0, 0);
    v20 = 0;
    if ( (unsigned int)dword_14029F1A0 > 5 )
    {
      v23 = *(_DWORD *)InputMonitorSessionState;
      v32 = 4LL;
      v31 = &v23;
      v24 = a1;
      v33 = &v24;
      v34 = 8LL;
      v35 = &v25;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_14029F1A8;
      v25 = a2;
      v36 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)off_14029F1A8;
      v28 = &unk_140284929;
      UserData.Reserved = 2;
      v29 = 43;
      v30 = 1;
      v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_14029F1C0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  else
  {
    v20 = -1073741670;
    if ( (unsigned int)dword_14029F1A0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_14029F1A0, 0x400000000000LL, v14) )
    {
      v22 = *(_DWORD *)InputMonitorSessionState;
      v32 = 4LL;
      v31 = (int *)&v22;
      v23 = -1073741670;
      v33 = (__int64 *)&v23;
      v34 = 4LL;
      v35 = &v24;
      v24 = 0x1000000LL;
      v36 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284955, 0LL, 0LL, 5u, &UserData);
    }
  }
  return v20;
}
