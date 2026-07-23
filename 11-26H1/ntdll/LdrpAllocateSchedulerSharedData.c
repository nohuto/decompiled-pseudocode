/*
 * XREFs of LdrpAllocateSchedulerSharedData @ 0x1800F7C28
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 */

__int64 LdrpAllocateSchedulerSharedData()
{
  NTSTATUS v0; // ebx
  void *v1; // rcx
  _QWORD *Heap_0; // rbx
  __int64 v4; // rax
  void *ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = 0LL;
  if ( LdrpIsSecureProcess )
    return (unsigned int)-1073741637;
  v0 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessSchedulerSharedData, &ProcessInformation, 8u);
  if ( v0 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0(LdrpHeap, (NtdllBaseTag + 0x40000) | 8, 0x18uLL);
    if ( Heap_0 )
    {
      Heap_0[2] = ProcessInformation;
      RtlAcquireSRWLockExclusive(&LdrpSchedulerSharedDataListHeadLock);
      v4 = LdrpSchedulerSharedDataListHead;
      if ( *(__int64 **)(LdrpSchedulerSharedDataListHead + 8) != &LdrpSchedulerSharedDataListHead )
        __fastfail(3u);
      Heap_0[1] = &LdrpSchedulerSharedDataListHead;
      *Heap_0 = v4;
      *(_QWORD *)(v4 + 8) = Heap_0;
      LdrpSchedulerSharedDataListHead = (__int64)Heap_0;
      RtlReleaseSRWLockExclusive(&LdrpSchedulerSharedDataListHeadLock);
      v1 = 0LL;
      ProcessInformation = 0LL;
      v0 = 0;
      goto LABEL_4;
    }
    v0 = -1073741670;
  }
  v1 = ProcessInformation;
LABEL_4:
  if ( v1 )
    NtClose(v1);
  return (unsigned int)v0;
}
