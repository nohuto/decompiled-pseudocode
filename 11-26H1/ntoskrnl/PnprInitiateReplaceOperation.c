/*
 * XREFs of PnprInitiateReplaceOperation @ 0x140BF7744
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PnprCompleteWake @ 0x1405DE4FC (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x1405DE678 (PnprQuiesce.c)
 *     PnprSwap @ 0x1405DE720 (PnprSwap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprReplaceStart @ 0x1407B3164 (PnprReplaceStart.c)
 *     PnprWakeProcessors @ 0x140BF8DAC (PnprWakeProcessors.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  __int64 v3; // rdx
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int128 v25; // [rsp+30h] [rbp-48h] BYREF
  __int128 v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-28h]

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v0 = 0;
  v1 = 0;
  Pool2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 33064), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33088), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33112), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 33136), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      v3 = PnprContext;
      v4 = -1073741670;
      v5 = *(_DWORD *)(PnprContext + 33288);
      if ( !v5 )
        v5 = 1514;
      v6 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v5;
      if ( !v6 )
        v6 = 10;
LABEL_7:
      *(_DWORD *)(v3 + 33292) = v6;
      goto LABEL_42;
    }
    Pool2->Parameter = Pool2;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
  v4 = PnprReplaceStart();
  if ( v4 < 0 )
  {
    v3 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = 1529;
    v6 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v8;
    if ( !v6 )
      v6 = 1;
    goto LABEL_7;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_26;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    *((_QWORD *)&v26 + 1) = 0LL;
    *(_QWORD *)&v25 = PnprStartMirroring;
    LODWORD(v27) = 8;
    *((_QWORD *)&v25 + 1) = PnprEndMirroring;
    *(_QWORD *)&v26 = PnprMirrorPhysicalMemory;
    v9 = MmDuplicateMemory(&v25);
    v4 = 0;
    if ( v9 != 1073742484 )
      v4 = v9;
    goto LABEL_42;
  }
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v7);
  if ( v4 < 0 )
  {
    v10 = PnprContext;
    v3 = 1597LL;
    v11 = *(_DWORD *)(PnprContext + 33288);
    if ( !v11 )
      v11 = 1597;
    *(_DWORD *)(PnprContext + 33288) = v11;
    v12 = *(_DWORD *)(v10 + 33292);
    if ( !v12 )
      v12 = 8;
    *(_DWORD *)(v10 + 33292) = v12;
  }
  else
  {
LABEL_26:
    CurrentIrql = KeGetCurrentIrql();
    v4 = PnprQuiesce();
    if ( v4 < 0 )
    {
      v19 = PnprContext;
      v3 = 1630LL;
      v20 = *(_DWORD *)(PnprContext + 33288);
      if ( !v20 )
        v20 = 1630;
      *(_DWORD *)(PnprContext + 33288) = v20;
      v21 = *(_DWORD *)(v19 + 33292);
      if ( !v21 )
        v21 = 1;
      *(_DWORD *)(v19 + 33292) = v21;
    }
    else
    {
      v0 = 1;
      v4 = PnprSwap(v15, v14);
      if ( v4 < 0 )
      {
        guard_dispatch_icall_no_overrides(3LL, *(_QWORD *)(PnprContext + 33176));
        v16 = PnprContext;
        v17 = *(_DWORD *)(PnprContext + 33288);
        if ( !v17 )
          v17 = 1620;
        *(_DWORD *)(PnprContext + 33288) = v17;
        v18 = *(_DWORD *)(v16 + 33292);
        if ( !v18 )
          v18 = 1;
        *(_DWORD *)(v16 + 33292) = v18;
      }
      PnprWakeProcessors();
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
LABEL_42:
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( v0 )
      PnprCompleteWake();
  }
  else if ( Pool2 )
  {
    KeSetEvent((PRKEVENT)(PnprContext + 33112), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 33136), Executive, 0, 0, 0LL);
  }
  v22 = *(_QWORD *)(PnprContext + 33176);
  if ( v22 )
    guard_dispatch_icall_no_overrides(v22, v3);
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v23 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v3);
      if ( v4 >= 0 )
        return v23;
    }
  }
  return (unsigned int)v4;
}
