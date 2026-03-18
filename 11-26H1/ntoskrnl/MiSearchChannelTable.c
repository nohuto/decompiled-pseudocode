/*
 * XREFs of MiSearchChannelTable @ 0x1402CBEE8
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiCoalesceFreeSmallPages @ 0x14028D060 (MiCoalesceFreeSmallPages.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028DF90 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiGetPageToTrade @ 0x1402951E0 (MiGetPageToTrade.c)
 *     MiPageToChannel @ 0x140295870 (MiPageToChannel.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiAcquirePageListSynchronization @ 0x14029A450 (MiAcquirePageListSynchronization.c)
 *     MiPruneStandbyPages @ 0x1402C8780 (MiPruneStandbyPages.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402C9E90 (MiInsertSecondaryListStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402CA5B0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiRestrictRangeToNode @ 0x1402CABF0 (MiRestrictRangeToNode.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402CAE00 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402CB970 (MiWriteStandbyLookasideEntry.c)
 *     MiPfnToStandbyLookaside @ 0x1402CBFB0 (MiPfnToStandbyLookaside.c)
 *     MiEnqueuePageList @ 0x1402CCEE0 (MiEnqueuePageList.c)
 *     MiSharedInsertPfnChainInList @ 0x1402CE100 (MiSharedInsertPfnChainInList.c)
 *     MiSynchronizeFastPageInsert @ 0x1402CE960 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkStandbyPage @ 0x1402F9C20 (MiUnlinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiAcquirePageListLock @ 0x1402FB4C0 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x1402FBC30 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402FC2A0 (MiFindSuitableLookasideReplacement.c)
 *     MiTradePageMarkedTransition @ 0x1402FD5C0 (MiTradePageMarkedTransition.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  _QWORD *result; // rax
  int v3; // r10d
  int v4; // r11d
  int v5; // edx
  __int64 v6; // rcx

  if ( (unsigned __int8)byte_140E2D68A > (unsigned int)(unsigned __int8)byte_140E2D68B
    || (result = (char *)qword_140E2D6E8 + 16 * (unsigned __int8)byte_140E2D68A, BugCheckParameter2 < *result)
    || byte_140E2D68A != byte_140E2D68B && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    v4 = (unsigned __int8)byte_140E2D68B;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 < v3 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, 0LL, 0LL);
        v5 = (v3 + v4) >> 1;
        v6 = 16LL * v5;
        result = (char *)qword_140E2D6E8 + v6;
        if ( BugCheckParameter2 >= *(_QWORD *)((char *)qword_140E2D6E8 + v6) )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, (ULONG_PTR)qword_140E2D6E8 + v6, 0LL);
        v4 = v5 - 1;
      }
      if ( v5 == (unsigned __int8)byte_140E2D68B || BugCheckParameter2 < result[2] )
        break;
      v3 = v5 + 1;
    }
    byte_140E2D68A = (v3 + v4) >> 1;
  }
  return result;
}
