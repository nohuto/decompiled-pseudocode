/*
 * XREFs of ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x140274C5C
 * Callers:
 *     KeAbPreWakeupHandle @ 0x1402736A4 (KeAbPreWakeupHandle.c)
 *     KeWakeWaitChain @ 0x140273700 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273AF0 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273EB0 (ExpCommitWakeResourceShared.c)
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140382B84 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140270780 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x14032F930 (KiReadyDeferredReadyList.c)
 *     ?KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z @ 0x1403759C0 (-KiAbpOwnerComputeCpuPriorityKey@AutoBoost@@YACPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     ?KiAbpPropagateBoosts@AutoBoost@@YAXPEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140467F10 (-KiAbpPropagateBoosts@AutoBoost@@YAXPEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ?KiAbpTryDecrementIoWaiterCounts@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x14047F9F0 (-KiAbpTryDecrementIoWaiterCounts@AutoBoost@@YAXPEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  AutoBoost *v14; // rsi
  struct AutoBoost::_AB_THREAD_ENTRY *v15; // r8
  struct AutoBoost::_AB_THREAD_ENTRY *v16; // rdx
  signed __int8 v17; // al
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD v21[3]; // [rsp+20h] [rbp-20h] BYREF
  int v22; // [rsp+38h] [rbp-8h]
  int v23; // [rsp+3Ch] [rbp-4h]
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

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
      v14 = *(AutoBoost **)&v4->Header.Lock;
      KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)&v4->Header.Lock + 32LL));
      _InterlockedAdd16(v5 + 396, 0xFFu);
      AutoBoost::KiAbpTryDecrementIoWaiterCounts(v14, (struct AutoBoost::_AB_HEAD_ENTRY *)v4, v15);
      RtlRbRemoveNode((char *)v14 + 56, &v4->Header.WaitListHead);
      BYTE1(v4->QuantumTarget) &= ~4u;
      v17 = AutoBoost::KiAbpOwnerComputeCpuPriorityKey((AutoBoost *)v4, v16);
      BYTE5(v4->QuantumTarget) = v17;
      v19 = *((_QWORD *)v14 + 5);
      if ( (*((_BYTE *)v14 + 48) & 1) != 0 && v19 )
        v19 ^= (unsigned __int64)v14 + 40;
      LOBYTE(v18) = 0;
      if ( v19 )
      {
        v18 = (unsigned int)v17;
        while ( 1 )
        {
          if ( (int)v18 - *(char *)(v19 + 29) >= 0 )
          {
            v20 = *(_QWORD *)(v19 + 8);
            if ( (*((_BYTE *)v14 + 48) & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_27;
              v20 ^= v19;
            }
            if ( !v20 )
            {
LABEL_27:
              LOBYTE(v18) = 1;
              break;
            }
          }
          else
          {
            v20 = *(_QWORD *)v19;
            if ( (*((_BYTE *)v14 + 48) & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_34;
              v20 ^= v19;
            }
            if ( !v20 )
            {
LABEL_34:
              LOBYTE(v18) = 0;
              break;
            }
          }
          v19 = v20;
        }
      }
      RtlRbInsertNodeEx((char *)v14 + 40, v19, v18, &v4->Header.WaitListHead);
      KxReleaseSpinLock((PKSPIN_LOCK)v14 + 4);
      v6 = 1;
    }
    _InterlockedAnd8((volatile signed __int8 *)&v4->QuantumTarget + 3, 0xFEu);
    if ( v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21[0] = &v24;
      v24 = 0LL;
      v21[1] = &v25;
      v25 = 0LL;
      v21[2] = &CurrentPrcb->AbSelfIoBoostsList;
      v23 = 0;
      v22 = 6;
      AutoBoost::KiAbpProcessEntry((PVOID)v5, v4, (struct AutoBoost::_AB_THREAD_ENTRY *)v21, v10);
      AutoBoost::KiAbpPropagateBoosts((AutoBoost *)v21, v12);
      if ( v24 )
      {
        if ( !v3 )
        {
          LOBYTE(v13) = CurrentIrql;
          KiProcessDeferredReadyList(CurrentPrcb, &v24, v13);
          return;
        }
        KiReadyDeferredReadyList(CurrentPrcb, &v24);
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
