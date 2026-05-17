/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x180010860
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x1800116E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkInterceptor @ 0x1800117C0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180010460 (RtlCaptureStackBackTrace.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHeapTrkTrackStack()
{
  __int64 v0; // rbp
  ULONG v1; // r15d
  __int64 Heap_0; // rsi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 *i; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  memset_thunk_772440563353939046(BackTrace, 0, 0x200uLL);
  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  v1 = BackTraceHash[0] % 0x1EEF;
  Heap_0 = RtlAllocateHeap_0(qword_1801C7798, 0LL, 8 * v0 + 24);
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_1801C77A0 + 8LL * (v1 & 0xF)));
  v4 = qword_1801C7288;
  for ( i = *(__int64 **)(qword_1801C7288 + 16LL * v1); ; i = (__int64 *)*i )
  {
    v6 = v4 + 16LL * v1;
    if ( i == (__int64 *)v6 )
      break;
    if ( *((_WORD *)i + 8) == (_WORD)v0 )
    {
      if ( RtlCompareMemory(BackTrace, i + 3, 8 * v0) == 8 * v0 )
      {
        ++*((_DWORD *)i + 5);
        RtlReleaseSRWLockExclusive(*(_QWORD *)(qword_1801C77A0 + 8LL * (v1 & 0xF)), v3);
        if ( Heap_0 )
          RtlFreeHeap_0(qword_1801C7798, 0LL, Heap_0);
        return (__int64)i;
      }
      v4 = qword_1801C7288;
    }
  }
  if ( Heap_0 )
  {
    *(_WORD *)(Heap_0 + 16) = v0;
    *(_WORD *)(Heap_0 + 18) = v1;
    *(_DWORD *)(Heap_0 + 20) = 1;
    memmove((void *)(Heap_0 + 24), BackTrace, 8 * v0);
    v8 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
      __fastfail(3u);
    *(_QWORD *)Heap_0 = v8;
    *(_QWORD *)(Heap_0 + 8) = v6;
    *(_QWORD *)(v8 + 8) = Heap_0;
    *(_QWORD *)v6 = Heap_0;
    _InterlockedIncrement(&dword_1801C720C);
    RtlReleaseSRWLockExclusive(*(_QWORD *)(qword_1801C77A0 + 8LL * (v1 & 0xF)), v7);
    return Heap_0;
  }
  else
  {
    RtlReleaseSRWLockExclusive(*(_QWORD *)(qword_1801C77A0 + 8LL * (v1 & 0xF)), v3);
    return 0LL;
  }
}
