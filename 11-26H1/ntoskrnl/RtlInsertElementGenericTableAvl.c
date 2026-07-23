/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1403C27C0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1403C25F4 (VfAvlInsertReservedTreeNode.c)
 *     PnpMapActivatingDeviceNodeToThread @ 0x1403C2754 (PnpMapActivatingDeviceNodeToThread.c)
 *     IovAiInsertObject @ 0x14053451C (IovAiInsertObject.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     CarAddUniqueViolation @ 0x14064FC9C (CarAddUniqueViolation.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     PiDmObjectManagerPopulate @ 0x1407AA358 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1407AA6AC (PiDcInitUpdateProperties.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1407E7560 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     EtwpEnumerateAutologgerPath @ 0x140833C18 (EtwpEnumerateAutologgerPath.c)
 *     EtwpInitializeAutoLoggers @ 0x140833F20 (EtwpInitializeAutoLoggers.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14094E98C (PiDqQueryAddObjectToResultSet.c)
 *     PiUpdateDriverDBCache @ 0x140A37858 (PiUpdateDriverDBCache.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x140A8D51C (PiSwBusRelationAdd.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     PopPowerRequestTableInsertEntry @ 0x140B03840 (PopPowerRequestTableInsertEntry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B2BAF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x140B40078 (EtwpEnumerateKeyProviders.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140C2FAC8 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140C3026C (VfPtProcessAllocPoolInfo.c)
 * Callees:
 *     RebalanceNode @ 0x1403C2F40 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  void *v4; // rbx
  size_t v5; // r13
  _RTL_BALANCED_LINKS **p_RightChild; // r14
  _RTL_BALANCED_LINKS *i; // rsi
  int v11; // eax
  _RTL_BALANCED_LINKS *RightChild; // rax
  int v13; // ebp
  __int64 v14; // rdx
  _RTL_BALANCED_LINKS *v15; // rax
  _RTL_BALANCED_LINKS *v16; // rcx
  _RTL_BALANCED_LINKS *j; // r8
  char v18; // dl
  bool v19; // zf
  char Balance; // al

  v4 = 0LL;
  v5 = BufferSize;
  p_RightChild = &Table->BalancedRoot.RightChild;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = *p_RightChild; ; i = RightChild )
    {
      v11 = guard_dispatch_icall_no_overrides(Table, Buffer);
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          v13 = 1;
          goto LABEL_24;
        }
        RightChild = i->RightChild;
        if ( !RightChild )
        {
          v13 = 3;
          goto LABEL_10;
        }
      }
      else
      {
        RightChild = i->LeftChild;
        if ( !RightChild )
        {
          v13 = 2;
          goto LABEL_10;
        }
      }
    }
  }
  v13 = 0;
LABEL_10:
  v14 = (unsigned int)(v5 + 32);
  if ( (unsigned int)v14 >= (unsigned int)v5
    && (v15 = (_RTL_BALANCED_LINKS *)guard_dispatch_icall_no_overrides(Table, v14)) != 0LL )
  {
    *(_OWORD *)&v15->Parent = 0LL;
    *(_OWORD *)&v15->RightChild = 0LL;
    ++Table->NumberGenericTableElements;
    if ( v13 )
    {
      v16 = i;
      if ( v13 == 2 )
        i->LeftChild = v15;
      else
        i->RightChild = v15;
      v15->Parent = i;
      i = v15;
      Table->BalancedRoot.Balance = -1;
      for ( j = v15->Parent; ; v16 = j )
      {
        v18 = -1;
        v19 = j->LeftChild == v15;
        Balance = v16->Balance;
        if ( !v19 )
          v18 = 1;
        if ( Balance )
          break;
        j = v16->Parent;
        v15 = v16;
        v16->Balance = v18;
      }
      if ( Balance == v18 )
      {
        RebalanceNode();
      }
      else
      {
        v16->Balance = 0;
        if ( !Table->BalancedRoot.Balance )
          ++Table->DepthOfTree;
      }
    }
    else
    {
      *p_RightChild = v15;
      i = v15;
      v15->Parent = &Table->BalancedRoot;
      Table->DepthOfTree = 1;
    }
    memmove(&i[1], Buffer, v5);
LABEL_24:
    if ( NewElement )
      *NewElement = v13 != 1;
    Table->WhichOrderedElement = 0;
    Table->OrderedPointer = 0LL;
    return &i[1];
  }
  else if ( NewElement )
  {
    *NewElement = 0;
  }
  return v4;
}
