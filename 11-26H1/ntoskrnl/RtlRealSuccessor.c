/*
 * XREFs of RtlRealSuccessor @ 0x14030C4F0
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140308CE0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14030A210 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14030B6D0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x14030C2F0 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTable @ 0x14030C480 (RtlEnumerateGenericTable.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14030C590 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x14030CB80 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14030CF7C (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1403BF9C4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1403C1168 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1404C7410 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlGetNextFileLock @ 0x1405B8250 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140ABDC80 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140ABE1C0 (RtlNextUnicodePrefix.c)
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
