/*
 * XREFs of RtlSetIoCompletionCallback @ 0x1800B4830
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180087B90 (RtlpTpRevertCapture.c)
 *     RtlpTpIoLookup @ 0x1800B4A00 (RtlpTpIoLookup.c)
 */

NTSTATUS __cdecl RtlSetIoCompletionCallback(HANDLE FileHandle, APC_CALLBACK_FUNCTION CompletionProc, ULONG Flags)
{
  int v5; // ebx
  __int64 v6; // rcx
  _QWORD *Heap_0; // rbx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !FileHandle || Flags )
    return -1073741811;
  v5 = RtlpTpRevertCapture(&v11, 0);
  if ( v5 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( RtlpTpIoRegistered )
    {
      v5 = 0;
    }
    else
    {
      Heap_0 = RtlAllocateHeap_0(LdrpHeap, NtdllBaseTag + 0x40000, 0x20uLL);
      if ( Heap_0 )
      {
        Heap_0[2] = RtlpTpIoDllNotification;
        Heap_0[3] = 0LL;
        RtlEnterCriticalSection(&LdrpDllNotificationLock);
        v8 = off_1801C48D8[0];
        if ( *(_UNKNOWN ***)off_1801C48D8[0] != &LdrpDllNotificationList )
          __fastfail(3u);
        *Heap_0 = &LdrpDllNotificationList;
        Heap_0[1] = v8;
        *v8 = Heap_0;
        off_1801C48D8[0] = (_UNKNOWN **)Heap_0;
        RtlLeaveCriticalSection(&LdrpDllNotificationLock);
        RtlpTpIoDllNotificationCookie = (__int64)Heap_0;
        v5 = 0;
      }
      else
      {
        v5 = -1073741801;
      }
      if ( v5 >= 0 )
        RtlpTpIoRegistered = 1;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v5 >= 0 )
    {
LABEL_6:
      v5 = RtlpTpIoLookup(&v10, CompletionProc, FileHandle);
      if ( v5 >= 0 )
      {
        v6 = v10;
        *(_QWORD *)(v10 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v6 + 168) = NtCurrentTeb()->ActivityId;
        v5 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v11);
  return v5;
}
