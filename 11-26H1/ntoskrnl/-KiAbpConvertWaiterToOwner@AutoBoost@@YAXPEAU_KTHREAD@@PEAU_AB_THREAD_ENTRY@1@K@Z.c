/*
 * XREFs of ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC
 * Callers:
 *     KeAbPreWakeupHandle @ 0x140272C14 (KeAbPreWakeupHandle.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     ?KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140377770 (-KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     ?KiAbpPropagateBoosts@AutoBoost@@YAXPEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140461660 (-KiAbpPropagateBoosts@AutoBoost@@YAXPEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ?KiAbpTryDecrementIoWaiterCounts@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140479360 (-KiAbpTryDecrementIoWaiterCounts@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpConvertWaiterToOwner(
        AutoBoost *this,
        struct _KTHREAD *a2,
        struct AutoBoost::_AB_THREAD_ENTRY *a3)
{
  int v3; // r15d
  struct _KTHREAD *v4; // rbx
  volatile signed __int16 *v5; // r14
  int v6; // esi
  signed __int8 v7; // al
  signed __int8 v8; // tt
  unsigned __int8 CurrentIrql; // di
  struct AutoBoost::_AB_BOOST_CONTEXT *v10; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  struct AutoBoost::_AB_BOOST_CONTEXT *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rsi
  struct AutoBoost::_AB_THREAD_ENTRY *v15; // r8
  struct AutoBoost::_AB_THREAD_ENTRY *v16; // rdx
  signed __int8 v17; // al
  __int64 v18; // rdx
  BOOLEAN v19; // r8
  int v20; // r8d
  __int64 v21; // rax
  _QWORD v22[3]; // [rsp+20h] [rbp-20h] BYREF
  int v23; // [rsp+38h] [rbp-8h]
  int v24; // [rsp+3Ch] [rbp-4h]
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF

  v3 = (int)a3;
  v4 = a2;
  v5 = (volatile signed __int16 *)this;
  v6 = 0;
  _m_prefetchw((char *)&a2->QuantumTarget + 2);
  v7 = BYTE2(a2->QuantumTarget);
  do
  {
    LOBYTE(a2) = v7 | 1;
    v8 = v7;
    v7 = _InterlockedCompareExchange8((volatile signed __int8 *)&v4->QuantumTarget + 2, v7 | 1, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 2) != 0 )
  {
    _InterlockedAnd8((volatile signed __int8 *)&v4->QuantumTarget + 2, 0xFEu);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(this) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(this, a2);
    }
    AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)v4, (struct AutoBoost::_AB_THREAD_ENTRY *)a2);
    if ( (v4->QuantumTarget & 2) != 0 && (v4->QuantumTarget & 0x400) != 0 )
    {
      v14 = *(_QWORD *)&v4->Header.Lock;
      KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)&v4->Header.Lock + 32LL));
      _InterlockedAdd16(v5 + 396, 0xFFu);
      AutoBoost::KiAbpTryDecrementIoWaiterCounts((AutoBoost *)v14, (struct AutoBoost::_AB_HEAD_ENTRY *)v4, v15);
      RtlRbRemoveNode((PRTL_RB_TREE)(v14 + 56), (PRTL_BALANCED_NODE)&v4->Header.WaitListHead);
      BYTE1(v4->QuantumTarget) &= ~4u;
      v17 = AutoBoost::KiAbpOwnerComputeCpuPriorityKey((AutoBoost *)v4, v16);
      BYTE5(v4->QuantumTarget) = v17;
      v18 = *(_QWORD *)(v14 + 40);
      if ( (*(_BYTE *)(v14 + 48) & 1) != 0 && v18 )
        v18 ^= v14 + 40;
      v19 = 0;
      if ( v18 )
      {
        v20 = v17;
        while ( 1 )
        {
          if ( v20 - *(char *)(v18 + 29) >= 0 )
          {
            v21 = *(_QWORD *)(v18 + 8);
            if ( (*(_BYTE *)(v14 + 48) & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_27;
              v21 ^= v18;
            }
            if ( !v21 )
            {
LABEL_27:
              v19 = 1;
              break;
            }
          }
          else
          {
            v21 = *(_QWORD *)v18;
            if ( (*(_BYTE *)(v14 + 48) & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_34;
              v21 ^= v18;
            }
            if ( !v21 )
            {
LABEL_34:
              v19 = 0;
              break;
            }
          }
          v18 = v21;
        }
      }
      RtlRbInsertNodeEx(
        (PRTL_RB_TREE)(v14 + 40),
        (PRTL_BALANCED_NODE)v18,
        v19,
        (PRTL_BALANCED_NODE)&v4->Header.WaitListHead);
      KxReleaseSpinLock((PKSPIN_LOCK)(v14 + 32));
      v6 = 1;
    }
    _InterlockedAnd8((volatile signed __int8 *)&v4->QuantumTarget + 3, 0xFEu);
    if ( v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v22[0] = &v25;
      v25 = 0LL;
      v22[1] = &v26;
      v26 = 0LL;
      v22[2] = &CurrentPrcb->AbSelfIoBoostsList;
      v24 = 0;
      v23 = 6;
      AutoBoost::KiAbpProcessEntry((PVOID)v5, v4, (struct AutoBoost::_AB_THREAD_ENTRY *)v22, v10);
      AutoBoost::KiAbpPropagateBoosts((AutoBoost *)v22, v12);
      if ( v25 )
      {
        if ( !v3 )
        {
          LOBYTE(v13) = CurrentIrql;
          KiProcessDeferredReadyList(CurrentPrcb, &v25, v13);
          return;
        }
        KiReadyDeferredReadyList(CurrentPrcb, &v25);
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
