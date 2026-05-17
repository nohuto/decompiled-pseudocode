/*
 * XREFs of RtlSetIoCompletionCallback @ 0x1800B7310
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     RtlpTpIoLookup @ 0x1800B74E0 (RtlpTpIoLookup.c)
 */

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 Heap_0; // rbx
  __int64 *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || a3 )
    return 3221225485LL;
  v6 = RtlpTpRevertCapture(&v12, 0);
  if ( v6 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive(&RtlpTpIoRegisteredLock, v5);
    if ( RtlpTpIoRegistered )
    {
      v6 = 0;
    }
    else
    {
      Heap_0 = RtlAllocateHeap_0();
      if ( Heap_0 )
      {
        *(_QWORD *)(Heap_0 + 16) = RtlpTpIoDllNotification;
        *(_QWORD *)(Heap_0 + 24) = 0LL;
        RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
        v9 = (__int64 *)off_1801C58D8[0];
        if ( *(_UNKNOWN ***)off_1801C58D8[0] != &LdrpDllNotificationList )
          __fastfail(3u);
        *(_QWORD *)Heap_0 = &LdrpDllNotificationList;
        *(_QWORD *)(Heap_0 + 8) = v9;
        *v9 = Heap_0;
        off_1801C58D8[0] = (_UNKNOWN **)Heap_0;
        RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
        RtlpTpIoDllNotificationCookie = Heap_0;
        v6 = 0;
      }
      else
      {
        v6 = -1073741801;
      }
      if ( v6 >= 0 )
        RtlpTpIoRegistered = 1;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v6 >= 0 )
    {
LABEL_6:
      v6 = RtlpTpIoLookup(&v11, a2, a1);
      if ( v6 >= 0 )
      {
        v7 = v11;
        *(_QWORD *)(v11 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v7 + 168) = NtCurrentTeb()->ActivityId;
        v6 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v12);
  return (unsigned int)v6;
}
