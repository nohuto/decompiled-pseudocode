/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x180086070
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TpSetPoolStackInformation @ 0x180086040 (TpSetPoolStackInformation.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800878AC (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(SIZE_T *a1)
{
  char v2; // si
  NTSTATUS v3; // ebx
  PTP_POOL_STACK_INFORMATION v4; // rcx
  PTP_POOL_STACK_INFORMATION Heap_0; // rax
  SIZE_T v6; // rcx
  _TP_POOL *v7; // rax

  v2 = 0;
  v3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = TppPoolpGlobalPoolStackSize;
  if ( !TppPoolpGlobalPoolStackSize
    || TppPoolpGlobalPoolStackSize->StackCommit < a1[1]
    || TppPoolpGlobalPoolStackSize->StackReserve < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap_0 = TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap_0 = (PTP_POOL_STACK_INFORMATION)RtlAllocateHeap_0(
                                                 NtCurrentPeb()->ProcessHeap,
                                                 (TppHeapTag + 786432) | 8,
                                                 0x10uLL),
          (TppPoolpGlobalPoolStackSize = Heap_0) != 0LL) )
    {
      v6 = a1[1];
      if ( Heap_0->StackCommit < v6 )
      {
        Heap_0->StackCommit = v6;
        v2 = 1;
      }
      if ( Heap_0->StackReserve < *a1 )
      {
        Heap_0->StackReserve = *a1;
        v2 = 1;
      }
    }
    else
    {
      v3 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v3 >= 0 && v2 )
  {
    v7 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool(v4);
    if ( v7 )
    {
      v3 = TpSetPoolStackInformation(v7, TppPoolpGlobalPoolStackSize);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v3;
}
