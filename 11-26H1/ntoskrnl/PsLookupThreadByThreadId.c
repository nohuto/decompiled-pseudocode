/*
 * XREFs of PsLookupThreadByThreadId @ 0x140A0FD60
 * Callers:
 *     PfpServiceMainThreadBoostPrep @ 0x1407C9108 (PfpServiceMainThreadBoostPrep.c)
 *     PspCriticalProcessDeathBlamedThreadTryGet @ 0x140800498 (PspCriticalProcessDeathBlamedThreadTryGet.c)
 *     NtAlertMultipleThreadByThreadId @ 0x140804F30 (NtAlertMultipleThreadByThreadId.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     PsLookupProcessThreadByCid @ 0x140A0F650 (PsLookupProcessThreadByCid.c)
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 *     PopInitSystemSleeperThread @ 0x140A77BF0 (PopInitSystemSleeperThread.c)
 *     PopManageTransitionRecordRequest @ 0x140AE1E44 (PopManageTransitionRecordRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExFastReferenceHandleTableEntry @ 0x1403ED400 (ExFastReferenceHandleTableEntry.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 *     ExLockHandleTableEntry @ 0x140444160 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1404453A0 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v4; // rax
  signed __int64 *v5; // r14
  int v6; // eax
  NTSTATUS v7; // esi
  ULONG_PTR HandlePointer; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned __int64 CurrentServerSilo; // rax
  $241382875694CED3D471BC5892DE3337 *v14; // rcx
  int v16; // ebp
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v20 = 0LL;
  if ( ((unsigned __int16)ThreadId & 0x3FC) == 0 )
    goto LABEL_10;
  v4 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, (__int64)ThreadId);
  v5 = v4;
  if ( !v4 )
    goto LABEL_10;
  v6 = ExFastReferenceHandleTableEntry(PspCidTable, v4, (unsigned __int64 *)&v20);
  v7 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1 )
    {
      v16 = 0;
      if ( !ExLockHandleTableEntry(PspCidTable, v5) )
        goto LABEL_10;
      HandlePointer = ExGetHandlePointer(v5);
      if ( (*(_BYTE *)HandlePointer & 0x7F) == 6 )
      {
        if ( (*(_DWORD *)(HandlePointer + 1440) & 3) == 2 )
          v16 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v5);
        _m_prefetchw((const void *)(HandlePointer - 48));
        v17 = *(_QWORD *)(HandlePointer - 48);
        while ( v17 )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(HandlePointer - 48),
                  v17 + (unsigned int)(v16 + 1),
                  v17);
          if ( v18 == v17 )
            goto LABEL_35;
        }
        *v5 &= 0xFFFFFFFFFFFE0001uLL;
      }
      HandlePointer = 0LL;
LABEL_35:
      ExUnlockHandleTableEntry(PspCidTable, v5);
    }
    else
    {
      HandlePointer = 0LL;
    }
  }
  else
  {
    HandlePointer = ExGetHandlePointer((__int64 *)&v20);
    if ( (*(_BYTE *)HandlePointer & 0x7F) != 6 )
    {
      ObDereferenceObjectExWithTag2(HandlePointer, 1, 0x746C6644u, 0);
      goto LABEL_10;
    }
  }
  if ( !HandlePointer )
  {
LABEL_10:
    v7 = -1073741813;
    goto LABEL_12;
  }
  ObpTraceObjectReferenceIfActive(HandlePointer - 48, 1, 0x746C6644u);
  if ( IoThreadToProcess((PETHREAD)HandlePointer) == PsIdleProcess )
  {
    v7 = -1073741813;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
  {
    _InterlockedOr(v19, 0);
    if ( (*(_QWORD *)(HandlePointer + 1424) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((struct _KTHREAD *)(HandlePointer + 1424), v9, v10, v11);
    if ( (*(_DWORD *)(HandlePointer + 1440) & 2) == 0 )
    {
      v7 = -1073741813;
LABEL_11:
      ObfDereferenceObject((PVOID)HandlePointer);
      goto LABEL_12;
    }
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(HandlePointer + 544), CurrentServerSilo) )
  {
    v7 = -1073741813;
    goto LABEL_11;
  }
  *Thread = (PETHREAD)HandlePointer;
LABEL_12:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v14 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v14->ApcState.ApcListHead[0].Flink != v14 )
      KiCheckForKernelApcDelivery((__int64)v14, (__int64)Thread);
  }
  return v7;
}
