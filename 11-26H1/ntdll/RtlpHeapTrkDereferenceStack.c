/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x18005D350
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FB938 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

void __fastcall RtlpHeapTrkDereferenceStack(PVOID **BaseAddress)
{
  __int64 v2; // rdi
  PVOID *v4; // rdx
  PVOID *v5; // rax

  v2 = 8LL * (*((_WORD *)BaseAddress + 9) & 0xF);
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(v2 + qword_1801C67E8));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v4 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v5 = BaseAddress[1], *v5 != BaseAddress) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    _InterlockedDecrement(&dword_1801C620C);
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v2 + qword_1801C67E8));
    RtlFreeHeap_0(HeapHandle, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v2 + qword_1801C67E8));
  }
}
