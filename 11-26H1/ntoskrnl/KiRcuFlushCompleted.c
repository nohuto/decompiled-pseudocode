/*
 * XREFs of KiRcuFlushCompleted @ 0x1404FD44C
 * Callers:
 *     KiCheckWaitNext @ 0x140221A60 (KiCheckWaitNext.c)
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiRcuFlushCompletedDpcRoutine @ 0x1404FD430 (KiRcuFlushCompletedDpcRoutine.c)
 *     KiRcuStartGracePeriod @ 0x140526914 (KiRcuStartGracePeriod.c)
 *     KiRcuFlushCompletedWorkerRoutine @ 0x1405F2A70 (KiRcuFlushCompletedWorkerRoutine.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D31A0 (KiSrcuCompareGraceSequence.c)
 *     KiRcuRebalance @ 0x1405F2ABC (KiRcuRebalance.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiRcuFlushCompleted(int a1)
{
  unsigned __int8 EffectiveIrql; // al
  unsigned __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // r11
  unsigned __int8 *i; // r8
  __int64 v7; // r8
  _QWORD **v8; // r9
  __int64 *v9; // r10
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // [rsp+30h] [rbp-18h] BYREF
  _QWORD **v18; // [rsp+38h] [rbp-10h]

  EffectiveIrql = KeGetEffectiveIrql();
  v3 = EffectiveIrql;
  if ( EffectiveIrql > 2u )
  {
    KiInsertQueueDpc((ULONG_PTR)&KiDpcCorralLock.WaitBlock[3], 0LL, 0LL, 0LL, 0);
    return;
  }
  v4 = 0;
  v18 = &v17;
  v17 = &v17;
  if ( a1 )
    v4 = KiRcuRebalance();
  if ( (unsigned __int8)v3 < 2u )
  {
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Blink);
  }
  else if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&KiDpcCorralLock.WaitBlockFill11[104]) )
  {
LABEL_34:
    _InterlockedOr((volatile signed __int32 *)&KiDpcCorralLock.UserAffinityPrimaryGroup, 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&KiDpcCorralLock.UserAffinityPrimaryGroup, 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&KiDpcCorralLock.QueueListEntry.Blink, CriticalWorkQueue);
    return;
  }
  v5 = *(_QWORD *)&KiDpcCorralLock.WaitBlockFill11[112];
  for ( i = (unsigned __int8 *)KiDpcCorralLock.WaitBlock[2].Object;
        i != &KiDpcCorralLock.WaitBlockFill11[128] && (int)KiSrcuCompareGraceSequence(v5, *((_QWORD *)i + 2)) >= 0;
        i = *(unsigned __int8 **)v7 )
  {
    if ( v3 > (*(_QWORD *)(v7 + 24) & 3uLL) )
      v4 = 1;
    if ( a1 || (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFFCuLL) <= 8 )
    {
      v10 = *v9;
      v11 = (_QWORD *)(v7 + 8);
      v7 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD ***)(*v9 + 8) != v8
        || *(_QWORD ***)v7 != v8
        || (*(_QWORD *)v7 = v10, *(_QWORD *)(v10 + 8) = v7, v12 = v18, *v18 != &v17) )
      {
LABEL_32:
        __fastfail(3u);
      }
      *v11 = v18;
      *v9 = (__int64)&v17;
      *v12 = v8;
      v18 = v8;
    }
    else
    {
      v4 = 1;
    }
  }
  if ( (unsigned __int8)v3 < 2u )
    KeReleaseSpinLock((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Blink, v3);
  else
    KxReleaseSpinLock((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Blink);
  while ( 1 )
  {
    v14 = v17;
    if ( v17 == &v17 )
      break;
    v15 = *v17;
    if ( *(_QWORD **)(*v17 + 8LL) != v17 )
      goto LABEL_32;
    v16 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v16 != v17 )
      goto LABEL_32;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( v14[3] >> 2 == 1LL )
    {
      KeSignalGate(v14[4], 0LL, v13);
    }
    else if ( v14[3] >> 2 == 3LL )
    {
      ExFreePoolWithTag((PVOID)v14[4], 0);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v14[4], v14[5]);
    }
  }
  if ( v4 )
    goto LABEL_34;
}
