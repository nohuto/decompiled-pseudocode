/*
 * XREFs of RtlCompareExchangePropertyStore @ 0x180145A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     qsort @ 0x18012BEB0 (qsort.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlCompareExchangePropertyStore(_OWORD *Key, __int64 a2, __int64 *a3, _QWORD *a4)
{
  int v4; // r12d
  void *v6; // r15
  _OWORD *i; // rbp
  char *Heap_0; // rbx
  char *v10; // rax
  int v11; // esi
  unsigned int v12; // edi
  int v13; // ebp
  __int64 v14; // rdx
  unsigned int v15; // edi
  void *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // ebx

  v4 = 0;
  v6 = 0LL;
  for ( i = Key; ; i = Key )
  {
    RtlAcquireSRWLockExclusive(&RtlpPropStoreLock, a2);
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
        v15 = RtlpPropStoreEntriesActiveCount;
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
    Heap_0 = (char *)RtlAllocateHeap_0();
    if ( !Heap_0 )
    {
LABEL_28:
      v20 = -1073741801;
      goto LABEL_29;
    }
    RtlAcquireSRWLockExclusive(&RtlpPropStoreLock, v14);
    if ( v11 == RtlpPropStoreEntriesTotalCount )
    {
      v16 = RtlpPropStoreEntries;
      v12 = RtlpPropStoreEntriesActiveCount;
      if ( RtlpPropStoreEntries )
      {
        memmove(Heap_0, RtlpPropStoreEntries, 24LL * (unsigned int)RtlpPropStoreEntriesActiveCount);
        v6 = v16;
      }
      RtlpPropStoreEntriesTotalCount = v13;
      i = Key;
      RtlpPropStoreEntries = Heap_0;
      break;
    }
    RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
    RtlFreeHeap_0();
  }
  v17 = v12;
  v4 = 1;
  v15 = v12 + 1;
  LODWORD(RtlpPropStoreEntriesActiveCount) = v15;
  v10 = &Heap_0[24 * v17];
  if ( a3 )
    v18 = *a3;
  else
    v18 = 0LL;
  *((_QWORD *)v10 + 2) = v18;
  *(_OWORD *)v10 = *i;
LABEL_20:
  v19 = *((_QWORD *)v10 + 2);
  if ( !a3 || v19 == *a3 )
    *((_QWORD *)v10 + 2) = a2;
  if ( a4 )
    *a4 = v19;
  if ( v4 )
  {
    qsort(Heap_0, v15, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v20 = 0;
  }
  else
  {
    v20 = 0x40000000;
  }
LABEL_29:
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  if ( v6 )
    RtlFreeHeap_0();
  return v20;
}
