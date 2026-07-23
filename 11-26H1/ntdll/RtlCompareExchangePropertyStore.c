/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x180145910
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     qsort @ 0x18012BC20 (qsort.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlCompareExchangePropertyStore(
        ULONG_PTR Key,
        PULONG_PTR Comperand,
        PULONG_PTR Exchange,
        PULONG_PTR Context)
{
  int v4; // r12d
  void *v6; // r15
  _OWORD *i; // rbp
  char *Heap_0; // rbx
  char *v10; // rax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebp
  unsigned int v14; // edi
  void *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  NTSTATUS v19; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = (_OWORD *)Key; ; i = (_OWORD *)Key )
  {
    RtlAcquireSRWLockExclusive(&RtlpPropStoreLock);
    Heap_0 = (char *)RtlpPropStoreEntries;
    if ( RtlpPropStoreEntries )
    {
      v10 = (char *)bsearch(
                      i,
                      RtlpPropStoreEntries,
                      (unsigned int)RtlpPropStoreEntriesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      Heap_0 = (char *)RtlpPropStoreEntries;
      if ( v10 )
      {
        v14 = RtlpPropStoreEntriesActiveCount;
        goto LABEL_20;
      }
    }
    v11 = RtlpPropStoreEntriesTotalCount;
    if ( Heap_0 )
    {
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( (_DWORD)RtlpPropStoreEntriesActiveCount + 1 != RtlpPropStoreEntriesTotalCount )
        break;
    }
    if ( RtlpPropStoreEntriesTotalCount )
    {
      v13 = 2 * RtlpPropStoreEntriesTotalCount;
      if ( 2 * RtlpPropStoreEntriesTotalCount < (unsigned int)RtlpPropStoreEntriesTotalCount )
        goto LABEL_28;
    }
    else
    {
      v13 = 16;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 24LL * v13);
    if ( !Heap_0 )
    {
LABEL_28:
      v19 = -1073741801;
      goto LABEL_29;
    }
    RtlAcquireSRWLockExclusive(&RtlpPropStoreLock);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v15 = RtlpPropStoreEntries;
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( RtlpPropStoreEntries )
      {
        memmove(Heap_0, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v6 = v15;
      }
      RtlpPropStoreEntriesTotalCount = v13;
      i = (_OWORD *)Key;
      RtlpPropStoreEntries = Heap_0;
      break;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  }
  v16 = v12;
  v4 = 1;
  v14 = v12 + 1;
  LODWORD(RtlpPropStoreEntriesActiveCount) = v14;
  v10 = &Heap_0[24 * v16];
  if ( Exchange )
    v17 = *Exchange;
  else
    v17 = 0LL;
  *((_QWORD *)v10 + 2) = v17;
  *(_OWORD *)v10 = *i;
LABEL_20:
  v18 = *((_QWORD *)v10 + 2);
  if ( !Exchange || v18 == *Exchange )
    *((_QWORD *)v10 + 2) = Comperand;
  if ( Context )
    *Context = v18;
  if ( v4 )
  {
    qsort(Heap_0, v14, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v19 = 0;
  }
  else
  {
    v19 = 0x40000000;
  }
LABEL_29:
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  if ( v6 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  return v19;
}
