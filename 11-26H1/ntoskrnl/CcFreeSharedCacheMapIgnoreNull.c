/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x14039DE34
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PSLIST_ENTRY __fastcall CcFreeSharedCacheMapIgnoreNull(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3)
{
  PSLIST_ENTRY result; // rax

  if ( ListEntry )
  {
    ++dword_140E10F5C;
    if ( LOWORD(CcSharedCacheMapLookasideList.Alignment) >= (unsigned __int16)word_140E10F50 )
    {
      ++dword_140E10F60;
      return (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(ListEntry, &CcSharedCacheMapLookasideList, a3);
    }
    else
    {
      return RtlpInterlockedPushEntrySList(&CcSharedCacheMapLookasideList, ListEntry);
    }
  }
  return result;
}
