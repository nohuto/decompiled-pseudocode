/*
 * XREFs of MiFreeInPageSupportBlock @ 0x14031F608
 * Callers:
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x140371D00 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiDeleteVadEventRotate @ 0x140870FC0 (MiDeleteVadEventRotate.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x140A5B9E0 (MiPfAllocateMdls.c)
 *     MiPfOptimizeMdl @ 0x140AB6FA8 (MiPfOptimizeMdl.c)
 *     MiGetReadyInPageBlock @ 0x140B3EB1C (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x14031E654 (MiInsertInPageBlock.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403A1D7C (MiDereferenceInPageAutoBoostLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v3; // rcx
  _SLIST_ENTRY *v4; // rcx

  Next = ListEntry[14].Next;
  if ( Next == ListEntry && *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() )
    KeAbPostRelease((unsigned __int64)Next);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    if ( (*((_DWORD *)&ListEntry[11].Next + 3) & 0x400000) == 0 )
    {
      v3 = ListEntry[13].Next;
      if ( v3 )
      {
        if ( v3 != &ListEntry[17] )
          ExFreePoolWithTag(v3, 0);
      }
    }
    v4 = ListEntry[14].Next;
    if ( v4 && v4 != ListEntry )
      MiDereferenceInPageAutoBoostLock();
    if ( !(unsigned int)MiInsertInPageBlock(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
