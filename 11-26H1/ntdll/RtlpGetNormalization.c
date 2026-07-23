/*
 * XREFs of RtlpGetNormalization @ 0x1800AD560
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1800AC330 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800AD6E0 (RtlpNameprepAsciiRealWorker.c)
 *     RtlNormalizeString @ 0x1800ADEF0 (RtlNormalizeString.c)
 *     RtlIsNormalizedString @ 0x1800AE370 (RtlIsNormalizedString.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NormalizationList__Lookup @ 0x1800AE114 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x1800FF374 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x180160E70 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *Heap_0; // rax
  char *v10; // rbx
  int Tables; // ebp
  _QWORD *v12; // rax
  __int128 SectionSize; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&NormalizationListLock);
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
  SectionSize = 0uLL;
  v7 = NormalizationList__Lookup(v4);
  if ( v7 )
  {
    *((_QWORD *)&SectionSize + 1) = *(_QWORD *)(v7 + 8);
    *(_QWORD *)&SectionSize = *(_QWORD *)(v7 + 16);
LABEL_7:
    Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v10 = Heap_0;
    if ( Heap_0 )
    {
      v5 = (__int64)(Heap_0 + 24);
      Tables = Normalization__LoadTables(a1, *((_QWORD *)&SectionSize + 1), SectionSize, Heap_0 + 24);
      if ( Tables >= 0 )
      {
        *((_DWORD *)v10 + 4) = a1;
        v12 = off_1801C46C0;
        if ( *off_1801C46C0 != (_UNKNOWN *)&NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &NormalizationListHead;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        off_1801C46C0 = (_UNKNOWN **)v10;
        goto LABEL_3;
      }
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_12;
  }
  NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, (PVOID *)&SectionSize + 1, (PULONG)&SectionSize);
  if ( NlsSectionPtr >= 0 )
    goto LABEL_7;
LABEL_12:
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  return (unsigned int)NlsSectionPtr;
}
