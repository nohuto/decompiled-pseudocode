/*
 * XREFs of ?KiAbEntryRemoveEntryFromTreeAndRelease@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0PEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140450ADC
 * Callers:
 *     ?KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14023BC20 (-KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     ?KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140450CA0 (-KiAbReleaseLocksForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z.c)
 *     ?KiAbReleaseTeeLockForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z @ 0x140450CF8 (-KiAbReleaseTeeLockForEntry@LegacyAutoBoost@@YAXPEAU_KI_AB_TREE_LOCK_HANDLE@1@@Z.c)
 *     ?KiAbTryDecrementIoWaiterCounts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x140450D34 (-KiAbTryDecrementIoWaiterCounts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     RtlRbReplaceNode @ 0x140450D80 (RtlRbReplaceNode.c)
 */

void __fastcall LegacyAutoBoost::KiAbEntryRemoveEntryFromTreeAndRelease(
        struct _KLOCK_ENTRY *this,
        struct _KLOCK_ENTRY *a2,
        struct _KLOCK_ENTRY *a3,
        struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *a4)
{
  __int64 *p_WaiterTree; // rcx
  _RTL_BALANCED_NODE *p_TreeNode; // rbp
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v9; // rdx
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *v13; // rdx
  struct _KLOCK_ENTRY *v14; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 == this )
  {
    p_WaiterTree = (__int64 *)&a2->WaiterTree;
    if ( a2->WaiterTree.Root || (p_WaiterTree = (__int64 *)&a2->40, a2->OwnerTree.Root) )
    {
      p_TreeNode = &this->TreeNode;
      if ( p_WaiterTree )
      {
        v12 = *p_WaiterTree;
        RtlRbRemoveNode((__int64)p_WaiterTree, *p_WaiterTree);
        RtlRbReplaceNode(*(_QWORD *)&a3->LockState.0, &this->TreeNode, v12);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 56), &LockHandle);
        LegacyAutoBoost::KiAbReleaseTeeLockForEntry((LegacyAutoBoost *)a3, v13);
        *($07BAD7E6BFE160503A0B2CC15B90D4A7 *)(v12 + 24) = this->40;
        *(_RTL_RB_TREE *)(v12 + 40) = this->WaiterTree;
        *(_BYTE *)(v12 + 68) = *((_BYTE *)&this->BoostBitmap.2 + 4);
        *(_DWORD *)(v12 + 68) ^= (this->BoostBitmap.WaiterCounts ^ *(_DWORD *)(v12 + 68)) & 0x7F00;
        LegacyAutoBoost::KiAbTryDecrementIoWaiterCounts((LegacyAutoBoost *)this, (struct _KLOCK_ENTRY *)(v12 - 16), v14);
        *(_BYTE *)(v12 - 5) |= 1u;
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
    RtlRbRemoveNode((__int64)a3->LockState.LockState, (__int64)p_TreeNode);
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
  RtlRbRemoveNode((__int64)a2 + v11, (__int64)&this->TreeNode);
LABEL_11:
  LegacyAutoBoost::KiAbReleaseLocksForEntry((LegacyAutoBoost *)a3, v10);
  _InterlockedDecrement8((volatile signed __int8 *)(this[-(this->StaticByte & 0x3F) - 1].EntryLock
                                                  - (this->WaitingByte != 0)
                                                  + 793));
}
