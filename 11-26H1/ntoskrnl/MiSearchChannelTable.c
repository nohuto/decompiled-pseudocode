/*
 * XREFs of MiSearchChannelTable @ 0x1402ADCA8
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiGetPageToTrade @ 0x140294740 (MiGetPageToTrade.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiAcquirePageListSynchronization @ 0x1402999B0 (MiAcquirePageListSynchronization.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402ABC50 (MiInsertSecondaryListStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402AC370 (MiReplaceSecondaryListStandbyPage.c)
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402ACBC0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402AD730 (MiWriteStandbyLookasideEntry.c)
 *     MiPfnToStandbyLookaside @ 0x1402ADD70 (MiPfnToStandbyLookaside.c)
 *     MiEnqueuePageList @ 0x1402AECA0 (MiEnqueuePageList.c)
 *     MiSharedInsertPfnChainInList @ 0x1402AFEC0 (MiSharedInsertPfnChainInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402B0720 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkStandbyPage @ 0x1402DBCA0 (MiUnlinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiAcquirePageListLock @ 0x1402DD540 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x1402DDCB0 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402DE320 (MiFindSuitableLookasideReplacement.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  _QWORD *result; // rax
  int v3; // r10d
  int v4; // r11d
  int v5; // edx
  __int64 v6; // rcx

  if ( (unsigned __int8)byte_140E2D80A > (unsigned int)(unsigned __int8)byte_140E2D80B
    || (result = (char *)qword_140E2D868 + 16 * (unsigned __int8)byte_140E2D80A, BugCheckParameter2 < *result)
    || byte_140E2D80A != byte_140E2D80B && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    v4 = (unsigned __int8)byte_140E2D80B;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 < v3 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, 0LL, 0LL);
        v5 = (v3 + v4) >> 1;
        v6 = 16LL * v5;
        result = (char *)qword_140E2D868 + v6;
        if ( BugCheckParameter2 >= *(_QWORD *)((char *)qword_140E2D868 + v6) )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D868 + v6, 0LL);
        v4 = v5 - 1;
      }
      if ( v5 == (unsigned __int8)byte_140E2D80B || BugCheckParameter2 < result[2] )
        break;
      v3 = v5 + 1;
    }
    byte_140E2D80A = (v3 + v4) >> 1;
  }
  return result;
}
