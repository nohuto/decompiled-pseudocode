/*
 * XREFs of RtlRemovePropertyStore @ 0x180145EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlRemovePropertyStore(void *Key, _QWORD *a2)
{
  unsigned int v4; // edi
  char *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx

  RtlAcquireSRWLockExclusive(&RtlpPropStoreLock, (__int64)a2);
  v4 = 0;
  if ( RtlpPropStoreEntries
    && (v5 = (char *)bsearch(
                       Key,
                       RtlpPropStoreEntries,
                       (unsigned int)RtlpPropStoreEntriesActiveCount,
                       0x18uLL,
                       (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    v6 = RtlpPropStoreEntriesActiveCount;
    v7 = v5 - (_BYTE *)RtlpPropStoreEntries;
    *a2 = *((_QWORD *)v5 + 2);
    memmove(v5, v5 + 24, 24 * (v6 - 0xAAAAAAAAAAAAAAABuLL * (v7 >> 3)) - 24);
    LODWORD(RtlpPropStoreEntriesActiveCount) = v6 - 1;
  }
  else
  {
    v4 = -1073741275;
  }
  RtlReleaseSRWLockExclusive(&RtlpPropStoreLock);
  return v4;
}
