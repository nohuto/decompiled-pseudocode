/*
 * XREFs of RtlQueryPropertyStore @ 0x180145D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 */

__int64 __fastcall RtlQueryPropertyStore(void *Key, _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  RtlAcquireSRWLockShared(&RtlpPropStoreLock);
  v4 = 0;
  if ( RtlpPropStoreEntries
    && (v5 = bsearch(
               Key,
               RtlpPropStoreEntries,
               (unsigned int)RtlpPropStoreEntriesActiveCount,
               0x18uLL,
               (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry)) != 0LL )
  {
    *a2 = v5[2];
  }
  else
  {
    v4 = -1073741275;
  }
  RtlReleaseSRWLockShared(&RtlpPropStoreLock);
  return v4;
}
