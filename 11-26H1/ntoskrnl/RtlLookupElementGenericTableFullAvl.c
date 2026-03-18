/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x14041CC60
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051C810 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     IovAiIrpHasUnlockedMdl @ 0x1405305F0 (IovAiIrpHasUnlockedMdl.c)
 *     PnpGetCurrentlyActiveWorkerThread @ 0x1405DA010 (PnpGetCurrentlyActiveWorkerThread.c)
 *     IovAiDecrementRemoveIrp @ 0x140641FF0 (IovAiDecrementRemoveIrp.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140642124 (IovAiIsInvalidIrpMdlMarking.c)
 *     IovAiRemoveIrp @ 0x140642274 (IovAiRemoveIrp.c)
 *     DifObjTrkLookupItem @ 0x14064B060 (DifObjTrkLookupItem.c)
 *     PiPnpRtlObjectEventCreate @ 0x1409A4110 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1409A6BD0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409D8F40 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  int v9; // eax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v9 = guard_dispatch_icall_no_overrides(Table, Buffer);
        if ( !v9 )
          break;
        if ( v9 != 1 )
        {
          *NodeOrParent = i;
          *SearchResult = TableFoundNode;
          return (char *)*NodeOrParent + 32;
        }
        if ( !i->RightChild )
        {
          *NodeOrParent = i;
          *SearchResult = TableInsertAsRight;
          return 0LL;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    *NodeOrParent = i;
    *SearchResult = TableInsertAsLeft;
  }
  else
  {
    *SearchResult = TableEmptyTree;
  }
  return 0LL;
}
