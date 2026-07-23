/*
 * XREFs of PnpChainDereferenceComplete @ 0x1409B69F0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x1404DC41C (PnpIsChainDereferenced.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 *     IopSetRelationsTag @ 0x1409B6B4C (IopSetRelationsTag.c)
 *     PnpDelayedRemoveWorkerContextCreate @ 0x1409B6BB0 (PnpDelayedRemoveWorkerContextCreate.c)
 */

void __fastcall PnpChainDereferenceComplete(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  PVOID *i; // rbx
  unsigned int *v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  for ( i = (PVOID *)IopPendingSurpriseRemovals; ; i = (PVOID *)*i )
  {
    if ( i == &IopPendingSurpriseRemovals )
      goto LABEL_13;
    if ( !*((_BYTE *)i + 104) && (int)IopSetRelationsTag(i[8], a1, v5) >= 0 )
    {
      v7 = *(unsigned int **)i[8];
      v8 = i[7];
      v9 = v7[2];
      v5 = *v7;
      v10 = v8 ? *(_QWORD *)(v8[39] + 40LL) : 0LL;
      if ( *(_DWORD *)(v10 + 300) != 784 && v9 == (_DWORD)v5 )
        break;
    }
  }
  v11 = PnpDelayedRemovePending == 0;
  *((_BYTE *)i + 104) = 1;
  if ( !v11 )
  {
LABEL_13:
    ExReleaseResourceLite(&IopSurpriseRemoveListLock);
    KeLeaveCriticalRegion();
    return;
  }
  PnpDelayedRemovePending = 1;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KeLeaveCriticalRegion();
  if ( a2 && KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpDelayedRemoveWorker(0LL);
  }
  else
  {
    PnpDelayedRemoveWorkItem.Parameter = (void *)PnpDelayedRemoveWorkerContextCreate(i);
    PnpDelayedRemoveWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDelayedRemoveWorker;
    PnpDelayedRemoveWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDelayedRemoveWorkItem, DelayedWorkQueue);
  }
}
