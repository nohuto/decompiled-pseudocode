/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x1404886EC
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     SmpKeyedStoreCreate @ 0x140ADC25C (SmpKeyedStoreCreate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  int v5; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  __int64 v16; // [rsp+90h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 2464) & 0x3FF;
  WorkItem.List.Blink = 0LL;
  v5 = v4;
  BYTE3(Object) = 0;
  v15 = 0;
  v16 = 0LL;
  v8 = *(_QWORD *)(a1 + 8 * (v4 >> 5));
  if ( v8 )
    v9 = v8 + 40 * (v4 & 0x1F);
  else
    v9 = 0LL;
  if ( a3 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v9 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v9 + 34) & 1) == 0 )
  {
    return v3;
  }
  if ( !*(_QWORD *)(a2 + 72) )
  {
    _m_prefetchw((const void *)(v9 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v9 + 34), 2u) & 2) == 0
      && (int)guard_dispatch_icall_no_overrides(a1, &v16) >= 0 )
    {
      v13[1] = v13;
      v13[0] = v13;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
      WorkItem.Parameter = &WorkItem;
      WorkItem.List.Blink = 0LL;
      Object = 393216LL;
      v15 = 0;
      v13[2] = a1;
      v14 = v5;
      WorkItem.List.Flink = 0LL;
      if ( v16 )
        ExQueueWorkItemToPartition(&WorkItem, 1, 0xFFFFFFFF);
      else
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v3;
}
