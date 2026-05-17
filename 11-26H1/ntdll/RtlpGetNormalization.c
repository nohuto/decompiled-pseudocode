/*
 * XREFs of RtlpGetNormalization @ 0x1800AE430
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1800AD200 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AE5B0 (RtlpNameprepAsciiRealWorker.c)
 *     RtlNormalizeString @ 0x1800AEDC0 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x1800AF240 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NormalizationList__Lookup @ 0x1800AEFE4 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x1800FFC24 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x180160F70 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap_0; // rax
  __int64 v11; // rbx
  int Tables; // ebp
  __int64 *v13; // rax
  __int128 v14; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&NormalizationListLock, (__int64)a2);
  v5 = NormalizationList__Lookup(a1);
  if ( v5 )
  {
LABEL_3:
    RtlReleaseSRWLockExclusive(&NormalizationListLock);
    result = 0LL;
    *a2 = v5;
    return result;
  }
  LODWORD(v4) = v4 ^ 0x100;
  v14 = 0uLL;
  v7 = NormalizationList__Lookup(v4);
  if ( v7 )
  {
    *((_QWORD *)&v14 + 1) = *(_QWORD *)(v7 + 8);
    *(_QWORD *)&v14 = *(_QWORD *)(v7 + 16);
LABEL_7:
    Heap_0 = RtlAllocateHeap_0();
    v11 = Heap_0;
    if ( Heap_0 )
    {
      v5 = Heap_0 + 24;
      Tables = Normalization__LoadTables(a1, *((_QWORD *)&v14 + 1), v14, Heap_0 + 24);
      if ( Tables >= 0 )
      {
        *(_DWORD *)(v11 + 16) = a1;
        v13 = (__int64 *)off_1801C56C0;
        if ( *off_1801C56C0 != (_UNKNOWN *)&NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v11 = &NormalizationListHead;
        *(_QWORD *)(v11 + 8) = v13;
        *v13 = v11;
        off_1801C56C0 = (_UNKNOWN **)v11;
        goto LABEL_3;
      }
      RtlFreeHeap_0();
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_12;
  }
  v8 = a1;
  LODWORD(v8) = a1 & 0xFFFFFEFF;
  NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v8, 0LL, (char *)&v14 + 8, &v14);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_7;
LABEL_12:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}
