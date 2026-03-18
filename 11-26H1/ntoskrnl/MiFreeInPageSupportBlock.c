/*
 * XREFs of MiFreeInPageSupportBlock @ 0x14031D5D8
 * Callers:
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 *     MiResolveMappedFileFaultGetInPageSupport @ 0x14036FF50 (MiResolveMappedFileFaultGetInPageSupport.c)
 *     MiResolvePageFileFault @ 0x1403701DC (MiResolvePageFileFault.c)
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiDeleteVadEventRotate @ 0x14086ABE0 (MiDeleteVadEventRotate.c)
 *     MmPrefetchPagesEx @ 0x140A51A98 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x140A526F0 (MiPfAllocateMdls.c)
 *     MiPfOptimizeMdl @ 0x140AB5C08 (MiPfOptimizeMdl.c)
 *     MiGetReadyInPageBlock @ 0x140B3C89C (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x14031C624 (MiInsertInPageBlock.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403A001C (MiDereferenceInPageAutoBoostLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY *v3; // rcx
  struct _SLIST_ENTRY *v4; // rcx

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
