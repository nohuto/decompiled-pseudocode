/*
 * XREFs of ImpQueueCharacter @ 0x1400BE898
 * Callers:
 *     ImInspectChar @ 0x1400BE808 (ImInspectChar.c)
 * Callees:
 *     ImpReleaseLock @ 0x1400BF30C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1400BF35C (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall ImpQueueCharacter(__int64 a1, __int64 a2, int a3, __int16 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 InputMonitorSessionState; // rdi
  __int64 v11; // r8
  struct _KPROCESS *CurrentProcess; // r14
  __int64 Pool2; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+38h] [rbp-59h] BYREF
  int v22; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v23; // [rsp+40h] [rbp-51h] BYREF
  __int64 v24; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v27; // [rsp+78h] [rbp-19h]
  int v28; // [rsp+80h] [rbp-11h]
  int v29; // [rsp+84h] [rbp-Dh]
  int *v30; // [rsp+88h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp-1h]
  __int64 *v32; // [rsp+98h] [rbp+7h]
  __int64 v33; // [rsp+A0h] [rbp+Fh]
  __int64 *v34; // [rsp+A8h] [rbp+17h]
  __int64 v35; // [rsp+B0h] [rbp+1Fh]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11);
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v9);
  Pool2 = ExAllocatePool2(256LL, 56LL, 1836084809LL);
  v14 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = a3;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 32) = a2;
    *(_WORD *)(Pool2 + 40) = a4;
    *(_DWORD *)(Pool2 + 44) = (unsigned int)PsGetProcessId(CurrentProcess);
    v14[6] = PsGetProcessSequenceNumber(CurrentProcess);
    ImpAcquireLock(InputMonitorSessionState + 72);
    v15 = *(_QWORD **)(InputMonitorSessionState + 64);
    if ( *v15 != InputMonitorSessionState + 56 )
      __fastfail(3u);
    v14[1] = v15;
    *v14 = InputMonitorSessionState + 56;
    *v15 = v14;
    *(_QWORD *)(InputMonitorSessionState + 64) = v14;
    ImpReleaseLock(InputMonitorSessionState + 72);
    if ( !*(_BYTE *)(InputMonitorSessionState + 48) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    if ( !*(_QWORD *)(InputMonitorSessionState + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    KeSetEvent(*(PRKEVENT *)(InputMonitorSessionState + 24), 0, 0);
    v19 = 0;
    if ( (unsigned int)dword_1402AA1C0 > 5 )
    {
      v22 = *(_DWORD *)InputMonitorSessionState;
      v31 = 4LL;
      v30 = &v22;
      v23 = a1;
      v32 = &v23;
      v33 = 8LL;
      v34 = &v24;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1402AA1C8;
      v24 = a2;
      v35 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)off_1402AA1C8;
      v27 = &unk_14028F012;
      UserData.Reserved = 2;
      v28 = 43;
      v29 = 1;
      v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_1402AA1E0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  else
  {
    v19 = -1073741670;
    if ( (unsigned int)dword_1402AA1C0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_1402AA1C0, 0x400000000000LL) )
    {
      v21 = *(_DWORD *)InputMonitorSessionState;
      v31 = 4LL;
      v30 = (int *)&v21;
      v22 = -1073741670;
      v32 = (__int64 *)&v22;
      v33 = 4LL;
      v34 = &v23;
      v23 = 0x1000000LL;
      v35 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_1402AA1C0, &unk_14028F03E, 0LL, 0LL, 5, &UserData);
    }
  }
  return v19;
}
