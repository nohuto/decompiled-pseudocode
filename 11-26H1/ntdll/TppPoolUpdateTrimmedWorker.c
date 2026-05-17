/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x1800E708C
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     RtlWakeConditionVariable @ 0x18002A8A0 (RtlWakeConditionVariable.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 */

char __fastcall TppPoolUpdateTrimmedWorker(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  int v4; // eax
  _QWORD *Heap_0; // rbx
  _QWORD *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = (volatile signed __int64 *)(a1 + 72);
  v9 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72), a2);
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    goto LABEL_2;
  Heap_0 = (_QWORD *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    goto LABEL_2;
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v9, 0, 0, 2) < 0 )
  {
    RtlFreeHeap_0();
LABEL_2:
    LOBYTE(v4) = (unsigned __int8)RtlReleaseSRWLockExclusive(v2);
    return v4;
  }
  Heap_0[2] = v9;
  v6 = *(_QWORD **)(a1 + 464);
  if ( *v6 != a1 + 456 )
    __fastfail(3u);
  Heap_0[1] = v6;
  *Heap_0 = a1 + 456;
  *v6 = Heap_0;
  *(_QWORD *)(a1 + 464) = Heap_0;
  v7 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v7;
  RtlReleaseSRWLockExclusive(v2);
  v4 = v7 ^ (v7 >> 11);
  if ( (v4 & 0xFFE) == 0 )
    LOBYTE(v4) = RtlWakeConditionVariable((volatile signed __int64 *)(a1 + 448));
  return v4;
}
