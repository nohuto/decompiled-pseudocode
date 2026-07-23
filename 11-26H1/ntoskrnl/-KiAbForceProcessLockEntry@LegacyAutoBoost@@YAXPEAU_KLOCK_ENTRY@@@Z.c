/*
 * XREFs of ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4
 * Callers:
 *     ?KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z @ 0x14052C0D8 (-KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z.c)
 * Callees:
 *     ?KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026DE68 (-KiAbEntryGetCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z @ 0x14026E9C8 (-KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbCpuBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@CPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EAB0 (-KiAbCpuBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@CPEAU_SINGLE_LIST_ENTRY@@11@Z.c)
 *     ?KiAbIoBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@KPEAU_SINGLE_LIST_ENTRY@@11@Z @ 0x14026EBB8 (-KiAbIoBoostOwners@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@KPEAU_SINGLE_LIST_ENTRY@@11@Z.c)
 *     ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026ECC4 (-KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x14026F83C (-KiAbEntryUpdateWaiterTreePosition@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299010 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1404AAAAC (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall LegacyAutoBoost::KiAbForceProcessLockEntry(
        struct _KLOCK_ENTRY *this,
        struct _KLOCK_ENTRY *a2,
        __int64 a3,
        struct _KLOCK_QUEUE_HANDLE *a4)
{
  unsigned __int8 CurrentIrql; // r15
  _KLOCK_ENTRY_LOCK_STATE v6; // rbp
  struct _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r13
  __int64 v8; // rbp
  struct _KLOCK_ENTRY *v9; // rdx
  struct _KLOCK_ENTRY *LockedHeadEntry; // rsi
  struct _KLOCK_ENTRY *v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  _RTL_BALANCED_NODE *Min; // r14
  char v15; // r14
  signed __int8 v16; // al
  char v17; // dl
  struct _KLOCK_ENTRY *v18; // rdx
  struct _KLOCK_ENTRY *v19; // rdx
  unsigned int v20; // r10d
  char CpuPriorityKey; // r12
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _SINGLE_LIST_ENTRY v23; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+98h] [rbp+10h]

  v23.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v6.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)this->LockState;
  CurrentPrcb = KeGetCurrentPrcb();
  memset(&LockHandle, 0, sizeof(LockHandle));
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v8 = *(_QWORD *)&v6.0 & 0x7FFFFFFFFFFFFFFCLL;
  if ( v8 && (this->StaticByte & 0x80u) == 0 )
    v8 |= 0x8000000000000000uLL;
  LockedHeadEntry = LegacyAutoBoost::KiAbEntryGetLockedHeadEntry((LegacyAutoBoost *)this, 1LL, &LockHandle, a4);
  v13 = 320;
  if ( LockedHeadEntry )
  {
    v13 = this->WaitingByte != 0 ? 328 : 320;
    if ( !this->WaitingByte )
    {
LABEL_25:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_26;
    }
    if ( this != LockedHeadEntry )
    {
      LegacyAutoBoost::KiAbEntryUpdateWaiterTreePosition((LegacyAutoBoost *)this, LockedHeadEntry, v11);
      v13 |= 0x20u;
    }
    Min = LockedHeadEntry->OwnerTree.Min;
    if ( Min )
      v15 = (char)Min[1].Children[0];
    else
      v15 = 30;
    if ( !LockedHeadEntry->WaitingByte )
    {
      v16 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey((LegacyAutoBoost *)LockedHeadEntry, v9);
      v17 = v15;
      if ( v16 < v15 )
        v17 = v16;
      v15 = v17;
    }
    LegacyAutoBoost::KiAbTryIncrementIoWaiterCounts((LegacyAutoBoost *)this, LockedHeadEntry, v11);
    CpuPriorityKey = LegacyAutoBoost::KiAbEntryGetCpuPriorityKey(this, v18);
    if ( v15 < CpuPriorityKey )
    {
      if ( !v20 )
      {
LABEL_24:
        LOBYTE(v19) = CpuPriorityKey;
        LegacyAutoBoost::KiAbCpuBoostOwners(
          LockedHeadEntry,
          v19,
          (struct LegacyAutoBoost::_AB_PRIORITY *)&v23,
          0LL,
          p_AbSelfIoBoostsList);
        goto LABEL_25;
      }
    }
    else if ( !v20 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v13 |= 2u;
      goto LABEL_26;
    }
    LegacyAutoBoost::KiAbIoBoostOwners(
      LockedHeadEntry,
      (struct _KLOCK_ENTRY *)v20,
      (struct LegacyAutoBoost::_AB_PRIORITY *)&v23,
      0LL,
      p_AbSelfIoBoostsList);
    goto LABEL_24;
  }
LABEL_26:
  if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 )
    EtwTraceAutoBoostProcessLockEntry(this[-(this->StaticByte & 0x3F) - 1].EntryLock, v8, v13);
  LOBYTE(v11) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v23, (__int64)v11, v12);
}
