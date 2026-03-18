/*
 * XREFs of RtlRealSuccessor @ 0x1402C1830
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x1402BE020 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402BF550 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C0A10 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402C1630 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTable @ 0x1402C17C0 (RtlEnumerateGenericTable.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402C18D0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402C1EC0 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1402C22BC (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403B5AC4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1403B7268 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1404CD9E0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlGetNextFileLock @ 0x1405B5A40 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140ABBF80 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140ABC3A0 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *RightChild; // r8
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rdx
  _RTL_SPLAY_LINKS *i; // rcx

  RightChild = Links->RightChild;
  result = 0LL;
  v3 = Links;
  if ( RightChild )
  {
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    return RightChild;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
  }
  return result;
}
