/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x1800E5AEC
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 * Callees:
 *     RtlWakeConditionVariable @ 0x1800159A0 (RtlWakeConditionVariable.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 */

void __fastcall TppPoolUpdateTrimmedWorker(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rsi
  _QWORD *Heap_0; // rbx
  _QWORD *v4; // rcx
  unsigned int v5; // ebx
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_RTL_SRWLOCK *)(a1 + 72);
  TargetHandle = 0LL;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    goto LABEL_2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x18uLL);
  if ( !Heap_0 )
    goto LABEL_2;
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)0xFFFFFFFFFFFFFFFELL,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) < 0 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap_0);
LABEL_2:
    RtlReleaseSRWLockExclusive(v1);
    return;
  }
  Heap_0[2] = TargetHandle;
  v4 = *(_QWORD **)(a1 + 464);
  if ( *v4 != a1 + 456 )
    __fastfail(3u);
  Heap_0[1] = v4;
  *Heap_0 = a1 + 456;
  *v4 = Heap_0;
  *(_QWORD *)(a1 + 464) = Heap_0;
  v5 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v5;
  RtlReleaseSRWLockExclusive(v1);
  if ( ((v5 ^ (v5 >> 11)) & 0xFFE) == 0 )
    RtlWakeConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 448));
}
