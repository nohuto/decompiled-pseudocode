/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x180146D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Heap_0; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v6; // rax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0();
    v5 = Heap_0;
    if ( Heap_0 )
    {
      *(_DWORD *)(Heap_0 + 16) = 1;
      *(_QWORD *)(Heap_0 + 24) = a1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock, v4);
      v6 = (__int64 *)off_1801C5540;
      if ( *off_1801C5540 != (_UNKNOWN *)&RtlpSecMemListHead )
        __fastfail(3u);
      *(_QWORD *)v5 = &RtlpSecMemListHead;
      *(_QWORD *)(v5 + 8) = v6;
      *v6 = v5;
      off_1801C5540 = (_UNKNOWN **)v5;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
