/*
 * XREFs of ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC
 * Callers:
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140272190 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KeAbPreWait @ 0x140278AE0 (KeAbPreWait.c)
 *     ?KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z @ 0x1404AAED0 (-KiAbPreWait@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1405FD6C8 (-KiAbCrossThreadRelease@LegacyAutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KxAcquireQueuedSpinLock @ 0x1402B47E0 (KxAcquireQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     ?KiAbTryDecrementIoWaiterCounts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z @ 0x140450D34 (-KiAbTryDecrementIoWaiterCounts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@0@Z.c)
 *     RtlRbReplaceNode @ 0x140450D80 (RtlRbReplaceNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall LegacyAutoBoost::KiAbEntryRemoveFromTree(__int64 this, struct _KLOCK_ENTRY *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 v3; // al
  LegacyAutoBoost *v4; // r12
  __int64 v5; // r8
  __int64 v6; // r14
  unsigned __int8 CurrentIrql; // al
  int v8; // edi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  LegacyAutoBoost *v11; // r15
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  struct _KLOCK_ENTRY *v14; // r8
  volatile LONG *v15; // rcx
  struct _KLOCK_ENTRY *v16; // r8
  _QWORD *v17; // r9
  __int64 v18; // rbx
  struct _KLOCK_ENTRY *v19; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+38h] [rbp-18h] BYREF
  _OWORD *v22; // [rsp+90h] [rbp+40h]
  unsigned __int8 v23; // [rsp+98h] [rbp+48h]

  v2 = *(_QWORD *)this & 0x7FFFFFFFFFFFFFFCLL;
  v3 = *(_BYTE *)(this + 8);
  v4 = (LegacyAutoBoost *)this;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v21, 0, sizeof(v21));
  if ( v3 < 0x80u )
  {
    v6 = (__int64)&unk_140E162C0 + 64 * ((v2 >> 4) & 0x3FF);
  }
  else
  {
    this = 88LL * (v3 & 0x3F);
    v5 = *(_QWORD *)(*(_QWORD *)((char *)v4 - this - 16) + 544LL);
    v6 = *(_QWORD *)(v5 + 88) + 24LL * ((unsigned int)(v2 >> 4) % *(_DWORD *)(v5 + 96));
  }
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(this) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(this, 2LL);
  }
  v8 = *((_BYTE *)v4 + 11) & 1;
  if ( (*((_BYTE *)v4 + 11) & 1) != 0 )
    goto LABEL_43;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v6 + 16));
  while ( 1 )
  {
    v9 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v9 )
      v9 ^= v6;
    while ( v9 )
    {
      v13 = *(_QWORD *)(v9 - 16) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v13 < v2 )
      {
        v10 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        if ( v13 <= v2 )
          break;
        v10 = *(_QWORD *)v9;
      }
      if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v10 )
        v9 ^= v10;
      else
        v9 = v10;
    }
    v11 = (LegacyAutoBoost *)(v9 - 16);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 - 16 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v9 - 16 + 72), (__int64)&LockHandle) )
        KxWaitForLockOwnerShip(&LockHandle);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9 - 16 + 72);
    }
    if ( v11 != v4 )
      break;
    if ( v8 )
    {
      if ( *((_QWORD *)v11 + 7) )
      {
        v22 = (_OWORD *)((char *)v11 + 40);
        v12 = (_QWORD *)((char *)v11 + 56);
        goto LABEL_28;
      }
      v12 = (_QWORD *)((char *)v11 + 40);
      v22 = (_OWORD *)((char *)v11 + 40);
      if ( *((_QWORD *)v11 + 5) )
      {
LABEL_28:
        if ( !v12 )
          goto LABEL_29;
        v18 = *v12;
        RtlRbRemoveNode(v12, *v12);
        RtlRbReplaceNode(v6, v9, v18);
        v21.LockQueue.Next = 0LL;
        v21.LockQueue.Lock = (unsigned __int64 *volatile)(v18 + 56);
        KxAcquireQueuedSpinLock(&v21);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 16));
        *(_OWORD *)(v18 + 24) = *v22;
        *(_OWORD *)(v18 + 40) = *(_OWORD *)((char *)v11 + 56);
        *(_BYTE *)(v18 + 68) = *((_BYTE *)v11 + 84);
        *(_DWORD *)(v18 + 68) ^= (*((_DWORD *)v11 + 21) ^ *(_DWORD *)(v18 + 68)) & 0x7F00;
        LegacyAutoBoost::KiAbTryDecrementIoWaiterCounts(
          (LegacyAutoBoost *)(v9 - 16),
          (struct _KLOCK_ENTRY *)(v18 - 16),
          v19);
        *(_BYTE *)(v18 - 5) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
      }
      else
      {
LABEL_29:
        RtlRbRemoveNode(v6, v9);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 16));
        LegacyAutoBoost::KiAbTryDecrementIoWaiterCounts(
          (LegacyAutoBoost *)(v9 - 16),
          (struct _KLOCK_ENTRY *)(v9 - 16),
          v14);
      }
      *((_BYTE *)v11 + 7) &= ~0x80u;
      *((_BYTE *)v11 + 11) &= ~1u;
      goto LABEL_31;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v6 + 16));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v8 = 1;
LABEL_43:
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 16));
  }
  v15 = (volatile LONG *)(v6 + 16);
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v15);
  *((_BYTE *)v4 + 7) &= ~0x80u;
  if ( *((_BYTE *)v4 + 9) )
    LegacyAutoBoost::KiAbTryDecrementIoWaiterCounts(v4, (struct _KLOCK_ENTRY *)(v9 - 16), v16);
  else
    v17 = (_QWORD *)((char *)v11 + 40);
  RtlRbRemoveNode(v17, (char *)v4 + 16);
LABEL_31:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _InterlockedDecrement8((volatile signed __int8 *)(*((_QWORD *)v4 - 11 * (*((_BYTE *)v4 + 8) & 0x3F) - 2)
                                                  - (*((_BYTE *)v4 + 9) != 0)
                                                  + 793LL));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
  __writecr8(v23);
}
