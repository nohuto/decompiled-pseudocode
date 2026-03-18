/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1403B8060
 * Callers:
 *     DifEnumeratePluginData @ 0x140640A60 (DifEnumeratePluginData.c)
 *     IovCleanupAiDb @ 0x14064238C (IovCleanupAiDb.c)
 *     DifTerminateObjectTracking @ 0x14064B400 (DifTerminateObjectTracking.c)
 *     CarDeleteDriverRuleViolations @ 0x14064C3B0 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14064C460 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14064C4F0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14064C650 (CarWriteEarlyRuleViolationEvents.c)
 *     PiDmObjectManagerPopulate @ 0x1407A77A8 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14082DCAC (EtwpFreeKeyNameList.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C21FA0 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140C22018 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140C2A430 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RealSuccessor @ 0x1403B8200 (RealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  void *v2; // r8
  _RTL_BALANCED_LINKS **p_RestartKey; // r9
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS *v5; // rcx
  _RTL_BALANCED_LINKS *i; // rcx

  v2 = 0LL;
  p_RestartKey = &Table->RestartKey;
  if ( Restart )
    *p_RestartKey = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    if ( !*p_RestartKey )
    {
      RightChild = Table->BalancedRoot.RightChild;
      for ( i = RightChild->LeftChild; i; i = i->LeftChild )
        RightChild = i;
      v5 = RightChild;
      goto LABEL_6;
    }
    RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*p_RestartKey, Restart, 0LL);
    v5 = RightChild;
    if ( RightChild )
    {
LABEL_6:
      *p_RestartKey = v5;
      return &RightChild[1];
    }
  }
  return v2;
}
