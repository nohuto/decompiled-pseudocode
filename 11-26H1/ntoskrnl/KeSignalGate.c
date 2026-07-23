/*
 * XREFs of KeSignalGate @ 0x1403CC9D0
 * Callers:
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     MiAttachThreadDone @ 0x140311390 (MiAttachThreadDone.c)
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     KiGenericCallDpcInitiatorDpc @ 0x1403CC0E0 (KiGenericCallDpcInitiatorDpc.c)
 *     MiThreadWorker @ 0x1403CD1F0 (MiThreadWorker.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiFinishVadDeletion @ 0x14043B7B8 (MiFinishVadDeletion.c)
 *     MiTrimAllWorkingSets @ 0x14045F5B0 (MiTrimAllWorkingSets.c)
 *     MiDeleteActiveTrimView @ 0x1404657B4 (MiDeleteActiveTrimView.c)
 *     PsWatchWorkingSet @ 0x140476780 (PsWatchWorkingSet.c)
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1404A89A0 (MiUnlockControlAreaSectionExtend.c)
 *     PspDetachSession @ 0x1404B05B0 (PspDetachSession.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     MiSubsectionProtosCreated @ 0x140507A40 (MiSubsectionProtosCreated.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405F81D8 (KiSrcuNotifyWorkerSelectAndQueue.c)
 *     KiEpfComplete @ 0x1405F9754 (KiEpfComplete.c)
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x140707A18 (MiWakeWaitersForAweCacheAttributeChange.c)
 *     MiWakeList @ 0x1407149F4 (MiWakeList.c)
 *     MiScrubMemoryWorker @ 0x140884240 (MiScrubMemoryWorker.c)
 *     sub_140C88510 @ 0x140C88510 (sub_140C88510.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeSignalGate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // r8
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  char v12; // cl
  int v13; // eax

  v3 = a2;
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v4, a2, a3);
  if ( !*(_DWORD *)(v4 + 4) )
  {
    *(_DWORD *)(v4 + 4) = 1;
    v8 = *(_QWORD **)(v4 + 8);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v8 == (_QWORD *)(v4 + 8) )
          goto LABEL_13;
        v9 = (_QWORD *)*v8;
        v10 = (__int64)v8;
        v8 = v9;
        v11 = *(_QWORD **)(v10 + 8);
        if ( v9[1] != v10 || *v11 != v10 )
          __fastfail(3u);
        *v11 = v9;
        v9[1] = v11;
        v12 = *(_BYTE *)(v10 + 16);
        if ( v12 != 1 )
          break;
        if ( KiTryUnwaitThread((__int64)CurrentPrcb, v10, *(unsigned __int16 *)(v10 + 18), 0LL) )
        {
LABEL_12:
          v13 = *(_DWORD *)(v4 + 4) - 1;
          *(_DWORD *)(v4 + 4) = v13;
          if ( !v13 )
            goto LABEL_13;
        }
      }
      if ( v12 == 2 )
      {
        *(_BYTE *)(v10 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v10 + 24), (_QWORD *)v10, v7);
        goto LABEL_12;
      }
      if ( v12 == 4 )
      {
        *(_BYTE *)(v10 + 17) = 5;
        *(_DWORD *)(v4 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v10 + 24), v4, v10, 0LL, 0);
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v10, 256LL, 0LL);
      }
    }
  }
LABEL_13:
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, v3, CurrentIrql);
}
