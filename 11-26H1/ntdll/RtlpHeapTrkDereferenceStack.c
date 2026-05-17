/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x180011C20
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800117C0 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FC1E8 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlpHeapTrkDereferenceStack(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 *v5; // rdx
  __int64 **v6; // rax

  v2 = 8LL * (*((_WORD *)a1 + 9) & 0xF);
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v2 + qword_1801C77A0));
  if ( (*((_DWORD *)a1 + 5))-- != 1 )
    return RtlReleaseSRWLockExclusive(*(_QWORD *)(v2 + qword_1801C77A0), v3);
  v5 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  _InterlockedDecrement(&dword_1801C720C);
  RtlReleaseSRWLockExclusive(*(_QWORD *)(v2 + qword_1801C77A0), v5);
  return RtlFreeHeap_0(qword_1801C7798, 0LL, a1);
}
