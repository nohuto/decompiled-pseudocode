/*
 * XREFs of ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448C0C
 * Callers:
 *     ?KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14023D580 (-KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     ?KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448DD0 (-KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z.c)
 *     ?KiAbReleaseTeeLockForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140448E28 (-KiAbReleaseTeeLockForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z.c)
 *     ?KiAbTryDecrementIoWaiterCounts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x140448E64 (-KiAbTryDecrementIoWaiterCounts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     RtlRbReplaceNode @ 0x140448EB0 (RtlRbReplaceNode.c)
 */

void __fastcall LegacyAutoBoost::KiAbEntryRemoveEntryFromTreeAndRelease(
        struct _KLOCK_ENTRY *this,
        struct _KLOCK_ENTRY *a2,
        struct _KLOCK_ENTRY *a3,
        struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *a4)
{
  $30B4444BD3490E7581D76DDB996291EC *p_WaiterTree; // rcx
  _RTL_BALANCED_NODE *p_TreeNode; // rbp
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v9; // rdx
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v10; // rdx
  __int64 v11; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v13; // rdx
  struct _KLOCK_ENTRY *v14; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 == this )
  {
    p_WaiterTree = ($30B4444BD3490E7581D76DDB996291EC *)&a2->WaiterTree;
    if ( a2->WaiterTree.Root || (p_WaiterTree = &a2->40, a2->OwnerTree.Root) )
    {
      p_TreeNode = &this->TreeNode;
      if ( p_WaiterTree )
      {
        Root = p_WaiterTree->OwnerTree.Root;
        RtlRbRemoveNode(&p_WaiterTree->OwnerTree, p_WaiterTree->OwnerTree.Root);
        RtlRbReplaceNode(*(_QWORD *)&a3->LockState.0, &this->TreeNode, Root);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&Root[2].Children[1], &LockHandle);
        LegacyAutoBoost::KiAbReleaseTeeLockForEntry((LegacyAutoBoost *)a3, v13);
        Root[1].0 = ($759577327DFD5B4689535A406FDFE094)this->40;
        *(_RTL_RB_TREE *)&Root[1].0 = this->WaiterTree;
        BYTE4(Root[2].ParentValue) = *((_BYTE *)&this->BoostBitmap.2 + 4);
        HIDWORD(Root[2].ParentValue) ^= (this->BoostBitmap.WaiterCounts ^ HIDWORD(Root[2].ParentValue)) & 0x7F00;
        LegacyAutoBoost::KiAbTryDecrementIoWaiterCounts(
          (LegacyAutoBoost *)this,
          (struct _KLOCK_ENTRY *)&Root[-1].Right,
          v14);
        BYTE3(Root[-1].ParentValue) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_10:
        this->InTreeByte &= ~0x80u;
        this->CrossThreadFlags &= ~1u;
        goto LABEL_11;
      }
    }
    else
    {
      p_TreeNode = &this->TreeNode;
    }
    RtlRbRemoveNode((PRTL_RB_TREE)a3->LockState.LockState, p_TreeNode);
    LegacyAutoBoost::KiAbReleaseTeeLockForEntry((LegacyAutoBoost *)a3, v9);
    v10 = (struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *)((char *)&a2->BoostBitmap.2 + 4);
    if ( (a2->CrossThreadFlags & 2) != 0 )
    {
      --*(_BYTE *)v10;
      a2->CrossThreadFlags &= ~2u;
    }
    if ( (a2->CrossThreadFlags & 4) != 0 )
    {
      *(_DWORD *)v10 ^= ((unsigned __int16)*(_DWORD *)v10 ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)v10 >> 8)
                                                                              - 1) << 8)) & 0x7F00;
      a2->CrossThreadFlags &= ~4u;
    }
    goto LABEL_10;
  }
  this->InTreeByte &= ~0x80u;
  if ( this->WaitingByte )
  {
    LegacyAutoBoost::KiAbTryDecrementIoWaiterCounts((LegacyAutoBoost *)this, a2, a3);
    v11 = 56LL;
  }
  else
  {
    v11 = 40LL;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)((char *)a2 + v11), &this->TreeNode);
LABEL_11:
  LegacyAutoBoost::KiAbReleaseLocksForEntry((LegacyAutoBoost *)a3, v10);
  _InterlockedDecrement8((volatile signed __int8 *)(this[-(this->StaticByte & 0x3F) - 1].EntryLock
                                                  - (this->WaitingByte != 0)
                                                  + 793));
}
