/*
 * XREFs of MiInSwapStore @ 0x140AE9990
 * Callers:
 *     MmInSwapWorkingSet @ 0x1404D58CC (MmInSwapWorkingSet.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402052D0 (KeQueryPriorityThread.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItemToPartition @ 0x1403830D0 (ExQueueWorkItemToPartition.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     MiInSwapStoreContextDereference @ 0x140AEA190 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v4; // rdi
  int v6; // r8d
  int v7; // edx

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x48uLL, 1934847309, CurrentProcessorColor | 0x80000000);
  v4 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  KeInitializeEvent((PRKEVENT)(PoolMm + 40), NotificationEvent, 0);
  *(_QWORD *)(v4 + 24) = v4;
  *(_QWORD *)(v4 + 16) = MiInSwapStoreWorker;
  *(_QWORD *)v4 = 0LL;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *(_QWORD *)(v4 + 32) = Object;
  *(_DWORD *)(v4 + 64) = 2;
  KeQueryPriorityThread(KeGetCurrentThread());
  MiGetProcessPartition((__int64)Object);
  v7 = v6 + 1;
  if ( v6 >= 15 )
    v7 = v6;
  ExQueueWorkItemToPartition((_QWORD *)v4, v7 + 32, 0xFFFFFFFF);
  KeWaitForSingleObject((PVOID)(v4 + 40), WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference(v4);
  return 0LL;
}
