/*
 * XREFs of ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x14047F03C
 * Callers:
 *     ?KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x14023D580 (-KiAbpProcessPostContextSwitch@LegacyAutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14029ABE0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 */

_RTL_BALANCED_NODE *__fastcall LegacyAutoBoost::KiAbAcquireLocksForEntry(
        _RTL_BALANCED_NODE *this,
        struct _KLOCK_ENTRY *a2,
        struct LegacyAutoBoost::_KI_AB_TREE_LOCK_HANDLE *a3)
{
  unsigned __int64 v3; // rbp
  char Right; // cl
  unsigned __int64 v6; // rax
  unsigned __int64 ParentValue; // r8
  __int64 v9; // rdx
  char *v10; // rax
  $7D93978C745EB1C2D28075BAF55422B4 v11; // dl
  volatile LONG *v12; // rcx
  _KLOCK_ENTRY_LOCK_STATE v13; // rcx
  _BYTE *v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  _RTL_BALANCED_NODE *v19; // rdi
  _RTL_BALANCED_NODE *p_TreeNode; // rcx
  volatile __int64 *v21; // r8
  __int64 v22; // rdx
  volatile LONG *v23; // rcx
  _RTL_BALANCED_NODE *result; // rax
  LOGICAL v25; // eax
  $7D93978C745EB1C2D28075BAF55422B4 v26; // dl
  LOGICAL v27; // eax
  volatile LONG *v28; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v29; // dl

  v3 = (__int64)this->Children[0] & 0x7FFFFFFFFFFFFFFCLL;
  Right = (char)this->Right;
  v6 = v3 >> 4;
  if ( Right >= 0 )
  {
    v10 = (char *)&unk_140E16400 + 64 * ((v3 >> 4) & 0x3FF);
    a2->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)v10;
  }
  else
  {
    ParentValue = this->Children[-11 * (Right & 0x3F) - 2][22].ParentValue;
    v9 = 3LL * ((unsigned int)v6 % *(_DWORD *)(ParentValue + 96));
    a2->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(*(_QWORD *)(ParentValue + 88)
                                                        + 24LL * ((unsigned int)v6 % *(_DWORD *)(ParentValue + 96)));
    v10 = (char *)(*(_QWORD *)(ParentValue + 88) + 8 * v9);
  }
  *(_QWORD *)&a2->EntryFlags = v10 + 16;
  v11 = ($7D93978C745EB1C2D28075BAF55422B4)(*(&a2->CpuPriorityKey + 8) & 0xFD | (2 * (BYTE3(this->Right) & 1)));
  for ( a2->OwnerTree.0 = v11; ; v11 = a2->OwnerTree.0 )
  {
    v12 = *(volatile LONG **)&a2->EntryFlags;
    if ( (*(_BYTE *)&v11 & 2) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v12);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v12);
    *(_BYTE *)&a2->OwnerTree.0 |= 1u;
    if ( (BYTE3(this->Right) & 1) != 0 )
    {
      v19 = this;
    }
    else
    {
      v13.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)a2->LockState;
      v14 = (_BYTE *)(*(_QWORD *)&a2->LockState.0 + 8LL);
      if ( (*v14 & 1) != 0 )
      {
        if ( *(_QWORD *)v13.LockState )
          v15 = *(_QWORD *)v13.LockState ^ *(_QWORD *)&v13.0;
        else
          v15 = 0LL;
      }
      else
      {
        v15 = *(_QWORD *)v13.LockState;
      }
      v16 = *v14 & 1;
      if ( !v15 )
        goto LABEL_36;
      do
      {
        v17 = *(_QWORD *)(v15 - 16) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v17 < v3 )
        {
          v18 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          if ( v17 <= v3 )
            break;
          v18 = *(_QWORD *)v15;
        }
        if ( v16 && v18 )
          v15 ^= v18;
        else
          v15 = v18;
      }
      while ( v15 );
      if ( v15 )
        v19 = (_RTL_BALANCED_NODE *)(v15 - 16);
      else
LABEL_36:
        v19 = 0LL;
      if ( v19 != this )
        goto LABEL_24;
    }
    if ( (*(&a2->CpuPriorityKey + 8) & 2) == 0 )
    {
      v27 = ExTryConvertSharedSpinLockExclusive(*(PEX_SPIN_LOCK *)&a2->EntryFlags);
      v26 = a2->OwnerTree.0;
      if ( !v27 )
        goto LABEL_47;
      a2->OwnerTree.0 = ($7D93978C745EB1C2D28075BAF55422B4)(*(_BYTE *)&v26 | 2);
    }
LABEL_24:
    if ( v19 )
      break;
    if ( (*(&a2->CpuPriorityKey + 8) & 2) != 0 )
      goto LABEL_31;
    v25 = ExTryConvertSharedSpinLockExclusive(*(PEX_SPIN_LOCK *)&a2->EntryFlags);
    v26 = a2->OwnerTree.0;
    if ( v25 )
    {
      a2->OwnerTree.0 = ($7D93978C745EB1C2D28075BAF55422B4)(*(_BYTE *)&v26 | 2);
      goto LABEL_31;
    }
LABEL_47:
    v28 = *(volatile LONG **)&a2->EntryFlags;
    v29 = ($7D93978C745EB1C2D28075BAF55422B4)(*(_BYTE *)&v26 & 0xFE);
    a2->OwnerTree.0 = v29;
    if ( (*(_BYTE *)&v29 & 2) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v28);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v28);
    *(_BYTE *)&a2->OwnerTree.0 |= 2u;
  }
  p_TreeNode = &a2->TreeNode;
  a2->TreeNode.Children[0] = 0LL;
  v21 = (volatile __int64 *)&v19[3];
  a2->TreeNode.Children[1] = v19 + 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v22 = _InterlockedExchange64(v21, (__int64)p_TreeNode);
    if ( v22 )
      KxWaitForLockOwnerShip((volatile signed __int64)p_TreeNode, v22, (__int64)v21);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)p_TreeNode, (volatile __int64 *)&v19[3]);
  }
  *(_BYTE *)&a2->OwnerTree.0 |= 4u;
  if ( (BYTE3(this->Right) & 1) == 0 )
  {
    *(_BYTE *)&a2->OwnerTree.0 &= ~1u;
    v23 = *(volatile LONG **)&a2->EntryFlags;
    if ( (*(&a2->CpuPriorityKey + 8) & 2) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v23);
    else
      ExReleaseSpinLockSharedFromDpcLevel(v23);
  }
LABEL_31:
  result = v19;
  a2->OwnerTree.Root = v19;
  return result;
}
