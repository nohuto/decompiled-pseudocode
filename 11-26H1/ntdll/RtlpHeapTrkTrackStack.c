/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x18005BF90
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x18005CE10 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 *RtlpHeapTrkTrackStack()
{
  __int64 v0; // rbp
  ULONG v1; // r15d
  _QWORD *Heap_0; // rsi
  __int64 v3; // rax
  __int64 *i; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-238h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-228h] BYREF

  memset_thunk_772440563353939046(BackTrace, 0, 0x200uLL);
  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  v1 = BackTraceHash[0] % 0x1EEF;
  Heap_0 = RtlAllocateHeap_0(HeapHandle, 0, 8 * v0 + 24);
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67E8 + 8LL * (v1 & 0xF)));
  v3 = qword_1801C6288;
  for ( i = *(__int64 **)(qword_1801C6288 + 16LL * v1); ; i = (__int64 *)*i )
  {
    v5 = v3 + 16LL * v1;
    if ( i == (__int64 *)v5 )
      break;
    if ( *((_WORD *)i + 8) == (_WORD)v0 )
    {
      if ( RtlCompareMemory(BackTrace, i + 3, 8 * v0) == 8 * v0 )
      {
        ++*((_DWORD *)i + 5);
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67E8 + 8LL * (v1 & 0xF)));
        if ( Heap_0 )
          RtlFreeHeap_0(HeapHandle, 0, Heap_0);
        return i;
      }
      v3 = qword_1801C6288;
    }
  }
  if ( Heap_0 )
  {
    *((_WORD *)Heap_0 + 8) = v0;
    *((_WORD *)Heap_0 + 9) = v1;
    *((_DWORD *)Heap_0 + 5) = 1;
    memmove(Heap_0 + 3, BackTrace, 8 * v0);
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *Heap_0 = v6;
    Heap_0[1] = v5;
    *(_QWORD *)(v6 + 8) = Heap_0;
    *(_QWORD *)v5 = Heap_0;
    _InterlockedIncrement(&dword_1801C620C);
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67E8 + 8LL * (v1 & 0xF)));
    return Heap_0;
  }
  else
  {
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801C67E8 + 8LL * (v1 & 0xF)));
    return 0LL;
  }
}
