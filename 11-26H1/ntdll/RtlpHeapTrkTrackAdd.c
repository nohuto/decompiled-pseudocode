/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800116E0
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800117C0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlpHeapTrkTrackStack @ 0x180010860 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkHash @ 0x180011B90 (RtlpHeapTrkHash.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

__int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  result = RtlAllocateHeap_0(qword_1801C7798, 0LL, 40LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = RtlpHeapTrkHash(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = RtlpHeapTrkTrackStack();
    v5[4] = v7;
    if ( v7 )
    {
      v8 = 8LL * (v6 & 0xF);
      RtlAcquireSRWLockExclusive(*(_QWORD *)(v8 + qword_1801C7778));
      v10 = 16LL * v6 + qword_1801C7280;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      *v5 = v11;
      v5[1] = v10;
      *(_QWORD *)(v11 + 8) = v5;
      *(_QWORD *)v10 = v5;
      return RtlReleaseSRWLockExclusive(*(_QWORD *)(v8 + qword_1801C7778), v9);
    }
    else
    {
      return RtlFreeHeap_0(qword_1801C7798, 0LL, v5);
    }
  }
  return result;
}
