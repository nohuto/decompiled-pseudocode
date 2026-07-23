/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1403C1F60
 * Callers:
 *     DifEnumeratePluginData @ 0x140644640 (DifEnumeratePluginData.c)
 *     IovCleanupAiDb @ 0x140645F6C (IovCleanupAiDb.c)
 *     DifTerminateObjectTracking @ 0x14064EFE0 (DifTerminateObjectTracking.c)
 *     CarDeleteDriverRuleViolations @ 0x14064FF90 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x140650040 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x1406500D0 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140650230 (CarWriteEarlyRuleViolationEvents.c)
 *     PiDmObjectManagerPopulate @ 0x1407AA358 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x140833EEC (EtwpFreeKeyNameList.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C27FB0 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140C28028 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140C2FC6C (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140C30440 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RealSuccessor @ 0x1403C2100 (RealSuccessor.c)
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
