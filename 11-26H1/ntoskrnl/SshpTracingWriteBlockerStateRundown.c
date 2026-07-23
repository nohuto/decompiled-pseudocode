/*
 * XREFs of SshpTracingWriteBlockerStateRundown @ 0x1404A2608
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SshpFreeBlockerEntry @ 0x140AAB60C (SshpFreeBlockerEntry.c)
 *     SshpTracingRundownBlockerState @ 0x140B15904 (SshpTracingRundownBlockerState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SshpTracingWriteBlockerStateRundown(PCEVENT_DESCRIPTOR EventDescriptor, PKSPIN_LOCK SpinLock)
{
  BOOLEAN result; // al
  KSPIN_LOCK v5; // rbx
  KIRQL v6; // al
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-65h] BYREF
  PKSPIN_LOCK v11; // [rsp+48h] [rbp-61h] BYREF
  __int64 v12; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  KSPIN_LOCK v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+78h] [rbp-31h]
  KSPIN_LOCK v16; // [rsp+80h] [rbp-29h]
  __int64 v17; // [rsp+88h] [rbp-21h]
  struct _LIST_ENTRY *v18; // [rsp+90h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-11h]
  __int64 *v20; // [rsp+A0h] [rbp-9h]
  __int64 v21; // [rsp+A8h] [rbp-1h]
  int *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  unsigned int *v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+1Fh]
  __int64 v26; // [rsp+D0h] [rbp+27h]
  int v27; // [rsp+D8h] [rbp+2Fh]
  int v28; // [rsp+DCh] [rbp+33h]

  result = SshpTraceHandleRegistered;
  if ( SshpTraceHandleRegistered )
  {
    result = EtwEventEnabled(SshpTraceHandle, EventDescriptor);
    if ( result )
    {
      v5 = SpinLock[38];
      v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v9 = SpinLock[1] & 1;
      v12 = MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLock(SpinLock, v6);
      v11 = SpinLock;
      v7 = *(unsigned __int16 *)(v5 + 80);
      UserData.Ptr = (ULONGLONG)&v11;
      v14 = v5 + 64;
      v10 = v7 >> 1;
      v16 = v5 + 48;
      *(_QWORD *)&UserData.Size = 8LL;
      v15 = 16LL;
      v17 = 16LL;
      v8 = *(int *)(v5 + 40);
      v21 = 8LL;
      v19 = 16LL;
      v23 = 4LL;
      v25 = 4LL;
      v18 = (&SshpBlockerCollections.Header.WaitListHead.Flink)[6 * v8];
      v20 = &v12;
      v22 = &v9;
      v24 = &v10;
      v26 = *(_QWORD *)(v5 + 88);
      v27 = 2 * (v7 >> 1);
      v28 = 0;
      return EtwWriteEx(SshpTraceHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 8u, &UserData);
    }
  }
  return result;
}
