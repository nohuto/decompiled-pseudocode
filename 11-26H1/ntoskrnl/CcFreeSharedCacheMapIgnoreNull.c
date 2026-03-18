/*
 * XREFs of CcFreeSharedCacheMapIgnoreNull @ 0x14039C0D4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PSLIST_ENTRY __fastcall CcFreeSharedCacheMapIgnoreNull(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3)
{
  PSLIST_ENTRY result; // rax

  if ( ListEntry )
  {
    ++dword_140E10E1C;
    if ( LOWORD(CcSharedCacheMapLookasideList.Alignment) >= (unsigned __int16)word_140E10E10 )
    {
      ++dword_140E10E20;
      return (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(ListEntry, &CcSharedCacheMapLookasideList, a3);
    }
    else
    {
      return RtlpInterlockedPushEntrySList(&CcSharedCacheMapLookasideList, ListEntry);
    }
  }
  return result;
}
