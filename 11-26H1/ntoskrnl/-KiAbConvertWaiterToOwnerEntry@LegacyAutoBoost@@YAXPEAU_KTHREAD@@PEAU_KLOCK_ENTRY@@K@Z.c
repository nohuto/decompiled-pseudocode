/*
 * XREFs of ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560
 * Callers:
 *     KeAbPreWakeupHandle @ 0x140272C14 (KeAbPreWakeupHandle.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x14044F6A0 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z @ 0x14026ECC4 (-KiAbOwnerComputeCpuPriorityKey@LegacyAutoBoost@@YACPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14026ED10 (-KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     ?KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429394 (-KiAbThreadRemoveBoostsSlow@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXT_KLOCK_ENTRY_BOOST_BITMAP@@PE.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1404AAA04 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall LegacyAutoBoost::KiAbConvertWaiterToOwnerEntry(
        LegacyAutoBoost *this,
        __int64 a2,
        struct _KLOCK_ENTRY *a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  volatile LONG *v12; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rbx
  unsigned __int64 *v18; // rcx
  LegacyAutoBoost *v19; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  struct _SINGLE_LIST_ENTRY *v21; // r9
  struct _KPRCB *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  struct _KLOCK_ENTRY *v25; // rdx
  void *v26; // r8
  signed __int8 v27; // al
  _RTL_RB_TREE *v28; // rbx
  signed __int8 v29; // r9
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v31; // r8
  _RTL_BALANCED_NODE *v32; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  union _KLOCK_ENTRY_BOOST_BITMAP v35; // [rsp+88h] [rbp+48h] BYREF
  int v36; // [rsp+90h] [rbp+50h]

  v36 = (int)a3;
  v3 = *(_QWORD *)a2;
  v35.AllFields = 0LL;
  v4 = a2;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  if ( v6 && *(char *)(a2 + 8) >= 0 )
    v6 |= 0x8000000000000000uLL;
  v7 = *(_QWORD *)a2 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = v7 >> 4;
  if ( *(char *)(a2 + 8) >= 0 )
  {
    v9 = &unk_140E16400;
    v24 = ((v7 >> 4) & 0x3FF) << 6;
    v12 = (volatile LONG *)((char *)&unk_140E16400 + v24 + 16);
    v11 = (__int64)&unk_140E16400 + v24;
  }
  else
  {
    v9 = *(_QWORD **)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16);
    v10 = v9[68];
    a2 = 3LL * ((unsigned int)v8 % *(_DWORD *)(v10 + 96));
    v11 = *(_QWORD *)(v10 + 88) + 24LL * ((unsigned int)v8 % *(_DWORD *)(v10 + 96));
    v12 = (volatile LONG *)(v11 + 16);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, a2);
  }
  ExAcquireSpinLockSharedAtDpcLevel(v12);
  v14 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 && v14 )
    v14 ^= v11;
  if ( !v14 )
    goto LABEL_59;
  do
  {
    v15 = *(_QWORD *)(v14 - 16) & 0x7FFFFFFFFFFFFFFCLL;
    if ( v15 < v7 )
    {
      v16 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      if ( v15 <= v7 )
        break;
      v16 = *(_QWORD *)v14;
    }
    if ( (*(_BYTE *)(v11 + 8) & 1) != 0 && v16 )
      v14 ^= v16;
    else
      v14 = v16;
  }
  while ( v14 );
  if ( !v14 )
  {
LABEL_59:
    *(_BYTE *)(v4 + 9) = 0;
    ExReleaseSpinLockSharedFromDpcLevel(v12);
LABEL_60:
    v19 = this;
    goto LABEL_33;
  }
  v17 = (_QWORD *)(v14 - 16);
  LockHandle.LockQueue.Next = 0LL;
  v18 = (unsigned __int64 *)(v14 - 16 + 72);
  LockHandle.LockQueue.Lock = v18;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)v18, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v18);
  }
  ExReleaseSpinLockSharedFromDpcLevel(v12);
  if ( *(__int64 *)v4 >= 0 )
  {
    *(_BYTE *)(v4 + 9) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v5 = 1;
    goto LABEL_60;
  }
  v19 = this;
  _InterlockedAdd16((volatile signed __int16 *)this + 396, 0xFFu);
  if ( (*(_BYTE *)(v4 + 11) & 2) != 0 )
  {
    --*((_BYTE *)v17 + 84);
    *(_BYTE *)(v4 + 11) &= ~2u;
  }
  if ( (*(_BYTE *)(v4 + 11) & 4) != 0 )
  {
    *((_DWORD *)v17 + 21) ^= ((unsigned __int16)*((_DWORD *)v17 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v17 + 21) >> 8)
                                                                                          - 1) << 8)) & 0x7F00;
    *(_BYTE *)(v4 + 11) &= ~4u;
  }
  if ( v17 == (_QWORD *)v4 )
  {
    *(_BYTE *)(v4 + 9) = 0;
    v5 = 2;
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(v17 + 7), (PRTL_BALANCED_NODE)(v4 + 16));
    *(_BYTE *)(v4 + 9) = 0;
    v26 = (void *)*(unsigned int *)(v4 + 80);
    *(_DWORD *)(v4 + 80) = 0;
    if ( (_DWORD)v26 )
      LegacyAutoBoost::KiAbThreadRemoveBoostsSlow(
        this,
        (struct _KTHREAD *)v6,
        v26,
        (union _KLOCK_ENTRY_BOOST_BITMAP)&v35,
        (struct _SINGLE_LIST_ENTRY *)LockHandle.LockQueue.Next);
    v27 = LegacyAutoBoost::KiAbOwnerComputeCpuPriorityKey((LegacyAutoBoost *)v4, v25);
    v28 = (_RTL_RB_TREE *)(v17 + 5);
    *(_BYTE *)(v4 + 40) = v27;
    v29 = v27;
    Root = v28->Root;
    if ( (*(_BYTE *)&v28->0 & 1) != 0 && Root )
      Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v28 ^ (unsigned __int64)Root);
    v31 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( SLOBYTE(Root[1].Children[0]) <= v29 )
        {
          v32 = Root->Children[1];
          if ( (*(_BYTE *)&v28->0 & 1) != 0 )
          {
            if ( !v32 )
              goto LABEL_55;
            v32 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v32);
          }
          if ( !v32 )
          {
LABEL_55:
            v31 = 1;
            break;
          }
        }
        else
        {
          v32 = Root->Children[0];
          if ( (*(_BYTE *)&v28->0 & 1) != 0 )
          {
            if ( !v32 )
              break;
            v32 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v32);
          }
          if ( !v32 )
            break;
        }
        Root = v32;
      }
    }
    RtlRbInsertNodeEx(v28, Root, v31, (PRTL_BALANCED_NODE)(v4 + 16));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned int)LegacyAutoBoost::KiAbThreadInsertList(
                       this,
                       (struct _KTHREAD *)&CurrentPrcb->AbSelfIoBoostsList,
                       (struct _SINGLE_LIST_ENTRY *)this + 102,
                       v21) )
  {
    AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v22);
    v5 |= 8u;
  }
  if ( v35.AllFields )
  {
    if ( !v36 )
    {
      LOBYTE(v23) = CurrentIrql;
      KiProcessDeferredReadyList(CurrentPrcb, &v35, v23);
      goto LABEL_36;
    }
    KiReadyDeferredReadyList(CurrentPrcb, &v35);
  }
LABEL_33:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
LABEL_36:
  if ( (WORD2(xmmword_140FC0C10) & 0x1000) != 0 )
    EtwTraceAutoBoostConvertWaiterToOwner(v19, v6, v5);
}
