/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1403B8A60
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     VfAvlDeleteTreeNode @ 0x1403B7A64 (VfAvlDeleteTreeNode.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     PnpUnmapActivatingDeviceNodeToThread @ 0x1403B8804 (PnpUnmapActivatingDeviceNodeToThread.c)
 *     IovAiRemoveObject @ 0x1405321F0 (IovAiRemoveObject.c)
 *     IovAiDecrementRemoveIrp @ 0x140641FF0 (IovAiDecrementRemoveIrp.c)
 *     IovAiRemoveIrp @ 0x140642274 (IovAiRemoveIrp.c)
 *     IovCleanupAiDb @ 0x14064238C (IovCleanupAiDb.c)
 *     DifTerminateObjectTracking @ 0x14064B400 (DifTerminateObjectTracking.c)
 *     CarDeleteDriverRuleViolations @ 0x14064C3B0 (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14064C460 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14064C4F0 (CarDeleteRuleViolationDB.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407944C0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     PiDmObjectManagerPopulate @ 0x1407A77A8 (PiDmObjectManagerPopulate.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1407E25C8 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     EtwpFreeKeyNameList @ 0x14082DCAC (EtwpFreeKeyNameList.c)
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140912C40 (PnpCleanupDeviceRegistryValues.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140990010 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409D8EB0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiUpdateDriverDBCache @ 0x140A24D48 (PiUpdateDriverDBCache.c)
 *     PiSwCloseDevice @ 0x140A7B100 (PiSwCloseDevice.c)
 *     PiSwBusRelationRemove @ 0x140A7B204 (PiSwBusRelationRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     SshpCacheRemoveBlocker @ 0x140AAD518 (SshpCacheRemoveBlocker.c)
 *     PopPowerRequestTableDeleteEntry @ 0x140AD624C (PopPowerRequestTableDeleteEntry.c)
 *     PiDmListRemoveObjectWorker @ 0x140AF4068 (PiDmListRemoveObjectWorker.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C21FA0 (VfAvlDeleteAllTreeNodes.c)
 *     VfPtProcessFreePoolInfo @ 0x140C2A308 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140C2A430 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RebalanceNode @ 0x1403B9040 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  int v5; // eax
  _RTL_BALANCED_LINKS *LeftChild; // rax
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS *Parent; // rax
  _RTL_BALANCED_LINKS *v10; // rax
  _RTL_BALANCED_LINKS *k; // rsi
  _RTL_BALANCED_LINKS *v12; // rax
  char v13; // dl
  _RTL_BALANCED_LINKS *v14; // rcx
  _RTL_BALANCED_LINKS *v15; // r8
  _RTL_BALANCED_LINKS *v16; // rcx
  _RTL_BALANCED_LINKS *v17; // rcx
  _RTL_BALANCED_LINKS *v18; // r14
  char Balance; // al
  bool v20; // zf
  _RTL_BALANCED_LINKS *j; // rcx
  _RTL_BALANCED_LINKS *v22; // rcx
  _RTL_BALANCED_LINKS *v23; // rax
  _RTL_BALANCED_LINKS *v24; // rax
  _RTL_BALANCED_LINKS *m; // rax
  _RTL_BALANCED_LINKS *v26; // rcx

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = guard_dispatch_icall_no_overrides(Table, Buffer);
    if ( !v5 )
    {
      LeftChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != 1 )
      break;
    LeftChild = RightChild->RightChild;
LABEL_7:
    RightChild = LeftChild;
    if ( !LeftChild )
      return 0;
  }
  if ( RightChild == Table->RestartKey )
  {
    Parent = RightChild->LeftChild;
    if ( Parent )
    {
      for ( i = Parent->RightChild; i; i = i->RightChild )
        Parent = i;
    }
    else
    {
      Parent = RightChild->Parent;
      for ( j = RightChild; Parent->LeftChild == j; Parent = Parent->Parent )
        j = Parent;
      if ( Parent->RightChild != j || Parent->Parent == Parent )
        Parent = 0LL;
    }
    Table->RestartKey = Parent;
  }
  ++Table->DeleteCount;
  v10 = RightChild->LeftChild;
  if ( v10 && (k = RightChild->RightChild) != 0LL )
  {
    if ( RightChild->Balance < 0 )
    {
      v26 = v10->RightChild;
      for ( k = RightChild->LeftChild; v26; v26 = v26->RightChild )
        k = v26;
    }
    else
    {
      for ( m = k->LeftChild; m; m = m->LeftChild )
        k = m;
    }
  }
  else
  {
    k = RightChild;
  }
  v12 = k->Parent;
  v13 = -1;
  v14 = k->LeftChild;
  v15 = k->Parent->LeftChild;
  if ( v14 )
  {
    if ( v15 == k )
    {
      v12->LeftChild = v14;
    }
    else
    {
      v12->RightChild = v14;
      v13 = 1;
    }
    v17 = k->LeftChild;
LABEL_18:
    v17->Parent = k->Parent;
  }
  else
  {
    v16 = k->RightChild;
    if ( v15 == k )
    {
      v12->LeftChild = v16;
    }
    else
    {
      v12->RightChild = v16;
      v13 = 1;
    }
    v17 = k->RightChild;
    if ( v17 )
      goto LABEL_18;
  }
  Table->BalancedRoot.Balance = 0;
  v18 = k->Parent;
  while ( 2 )
  {
    Balance = v18->Balance;
    if ( Balance == v13 )
    {
      v18->Balance = 0;
LABEL_27:
      v13 = 1;
      v20 = v18->Parent->RightChild == v18;
      v18 = v18->Parent;
      if ( !v20 )
        v13 = -1;
      continue;
    }
    break;
  }
  if ( Balance )
  {
    if ( (unsigned int)RebalanceNode(v18) )
      goto LABEL_24;
    v18 = v18->Parent;
    goto LABEL_27;
  }
  v18->Balance = -v13;
  if ( Table->BalancedRoot.Balance )
    --Table->DepthOfTree;
LABEL_24:
  if ( RightChild != k )
  {
    *(_OWORD *)&k->Parent = *(_OWORD *)&RightChild->Parent;
    *(_OWORD *)&k->RightChild = *(_OWORD *)&RightChild->RightChild;
    v22 = k->Parent;
    if ( RightChild->Parent->LeftChild == RightChild )
      v22->LeftChild = k;
    else
      v22->RightChild = k;
    v23 = k->LeftChild;
    if ( v23 )
      v23->Parent = k;
    v24 = k->RightChild;
    if ( v24 )
      v24->Parent = k;
  }
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  guard_dispatch_icall_no_overrides(Table, RightChild);
  return 1;
}
