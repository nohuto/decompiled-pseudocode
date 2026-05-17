/*
 * XREFs of LdrpAllocateSchedulerSharedData @ 0x1800F8458
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtSetInformationProcess @ 0x18015F2C0 (NtSetInformationProcess.c)
 */

__int64 LdrpAllocateSchedulerSharedData()
{
  int v0; // ebx
  HANDLE v1; // rcx
  __int64 v3; // rdx
  _QWORD *Heap_0; // rbx
  __int64 v5; // rax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( LdrpIsSecureProcess )
    return (unsigned int)-1073741637;
  v0 = NtSetInformationProcess(-1LL, 112LL, &Handle, 8LL);
  if ( v0 >= 0 )
  {
    Heap_0 = (_QWORD *)RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      Heap_0[2] = Handle;
      RtlAcquireSRWLockExclusive(&LdrpSchedulerSharedDataListHeadLock, v3);
      v5 = LdrpSchedulerSharedDataListHead;
      if ( *(__int64 **)(LdrpSchedulerSharedDataListHead + 8) != &LdrpSchedulerSharedDataListHead )
        __fastfail(3u);
      Heap_0[1] = &LdrpSchedulerSharedDataListHead;
      *Heap_0 = v5;
      *(_QWORD *)(v5 + 8) = Heap_0;
      LdrpSchedulerSharedDataListHead = (__int64)Heap_0;
      RtlReleaseSRWLockExclusive(&LdrpSchedulerSharedDataListHeadLock);
      v1 = 0LL;
      Handle = 0LL;
      v0 = 0;
      goto LABEL_4;
    }
    v0 = -1073741670;
  }
  v1 = Handle;
LABEL_4:
  if ( v1 )
    NtClose(v1);
  return (unsigned int)v0;
}
