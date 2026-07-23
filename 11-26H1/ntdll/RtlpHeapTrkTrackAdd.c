/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x18005CE10
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpHeapTrkTrackStack @ 0x18005BF90 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkHash @ 0x18005D2C0 (RtlpHeapTrkHash.c)
 */

void __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  _QWORD *Heap_0; // rbx
  unsigned int v5; // ebp
  __int64 *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax

  Heap_0 = RtlAllocateHeap_0(HeapHandle, 0, 0x28uLL);
  if ( Heap_0 )
  {
    v5 = RtlpHeapTrkHash(a2);
    Heap_0[2] = a1;
    Heap_0[3] = a2;
    v6 = RtlpHeapTrkTrackStack();
    Heap_0[4] = v6;
    if ( v6 )
    {
      v7 = 8LL * (v5 & 0xF);
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(v7 + qword_1801C67C8));
      v8 = 16LL * v5 + qword_1801C6280;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap_0 = v9;
      Heap_0[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap_0;
      *(_QWORD *)v8 = Heap_0;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v7 + qword_1801C67C8));
    }
    else
    {
      RtlFreeHeap_0(HeapHandle, 0, Heap_0);
    }
  }
}
